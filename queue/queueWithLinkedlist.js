class Node {
  constructor(val) {
    (this.value = val), (this.next = null);
  }
}

class Queue {
  constructor() {
    (this.front = null), (this.back = null), (this.size = 0);
  }

  enqueue(val) {
    const newNode = new Node(val);
    if (this.size === 0) {
      this.front = newNode;
      this.back = newNode;
    } else {
      this.back.next = newNode;
      this.back = newNode;
    }
    this.size += 1;
  }

  dequeue() {
    const removeNode = this.front;

    if (this.size === 0) return null;

    this.front = removeNode.next;
    if (removeNode.next === null) {
      this.back = null;
    }
    this.size -= 1;

    return removeNode.value;
  }
}

const queue = new Queue();
queue.enqueue("a");
queue.enqueue("b");

console.log(queue.dequeue());
console.log(queue);
