class Node {
  constructor(val) {
    this.value = val;
    this.next = null;
  }
}
class LinkedList {
  constructor() {
    this.head = null;
  }

  append(val) {
    if (this.head === null) {
      this.head = new Node(val);
      return;
    }

    let curr = this.head;
    while (curr.next !== null) {
      curr = curr.next;
    }

    curr.next = new Node(val);
  }
}

const reverseLinkedList = (head) => {
  if (!head) {
    return {
      HEAD: null,
      curr: null,
    };
  }

  // Checking if current node is the last node or not
  if (!head.next) {
    let node = new Node(head.value);
    return {
      HEAD: node,
      curr: node,
    };
  }

  let { curr, HEAD } = reverseLinkedList(head.next);

  curr.next = new Node(head.value);

  return {
    HEAD,
    curr: curr.next,
  };
};

const list = new LinkedList();
list.append("a");
list.append("b");
list.append("c");

let { HEAD } = reverseLinkedList(list.head);
console.log(HEAD);
