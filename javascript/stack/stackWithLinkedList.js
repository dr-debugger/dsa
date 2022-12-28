class Node {
  constructor(value) {
    (this.value = value), (this.next = null);
  }
}

class StackWithLinkedList {
  constructor() {
    (this.top = null), (this.current = null);
  }

  push(val) {
    let curr = this.top;

    if (curr === null) {
      this.top = new Node(val);
      this.current = this.top.value;
      return;
    }

    while (curr.next !== null) {
      curr = curr.next;
    }

    const newItem = new Node(val);
    newItem.next = this.top;
    this.top = newItem;
    this.current = newItem.value;
  }

  pull() {
    let curr = this.top;
    if (curr === null) return;

    this.top = curr.next;
    if (curr.next === null) {
      this.current = null;
      return;
    }
    this.current = this.top.value;
  }
}

const stack = new StackWithLinkedList();
stack.push("a");
stack.push("b");
stack.push("c");
console.log(stack);
stack.pull();
stack.pull();
console.log(stack);
