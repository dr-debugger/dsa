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

  print() {
    let str = "";
    let curr = this.head;
    while (curr !== null) {
      str += curr.value + " -> ";
      //   console.log(curr.next, "curr next");
      curr = curr.next;
    }
    return str;
  }

  contains(val) {
    let curr = this.head;
    if (curr === null) return false;
    while (curr !== null) {
      if (curr.value === val) return true;
      curr = curr.next;
    }
    return false;
  }
}

// const list = new LinkedList();
// list.append("a");
// list.append("b");
// list.append("c");
// console.log(list.contains("b"));

class RecursiveLinkedList {
  constructor() {
    this.head = null;
  }

  // appending recursively value into the linked list
  append(val) {
    if (this.head === null) {
      this.head = new Node(val);
      return;
    }
    this.#append_recursive(val, this.head);
  }
  //private method for recursive
  #append_recursive(val, curr) {
    if (curr.next === null) {
      curr.next = new Node(val);
      return;
    }
    this.#append_recursive(val, curr.next);
  }

  // deletion of node
  delete(head, target) {
    let prev = null;
    let curr = head;

    if (curr.value === target) {
      this.head = curr.next;
      return this.head;
    }

    // while (curr !== null) {
    //   if (curr.value === target) {
    //     prev.next = curr.next;
    //   }
    //   prev = curr;
    //   curr = curr.next;
    // } // time complexity 0(n), space 0(1)

    this.#deleteRecursive(curr, prev, target); // time complexity 0(n), space 0(n)

    return head;
  }

  #deleteRecursive(curr, prev, target) {
    if (curr === null) return;

    if (curr.value === target) {
      prev.next = curr.next;
      return;
    }

    this.#deleteRecursive(curr.next, curr, target);
  }
}

const list = new RecursiveLinkedList();
list.append("a");
// list.append("b");
// list.append("c");
// list.append("d");
list.delete(list.head, "a");
console.log(list);
// console.log(list);
