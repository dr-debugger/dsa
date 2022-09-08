class Node {
  constructor(v) {
    this.value = v;
    this.left = null;
    this.right = null;
  }
}

const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
const d = new Node("d");
const e = new Node("e");

a.left = b;
a.right = c;
c.left = d;
c.right = e;

/**
 *       a
 *      / \
 *     b   c
 *        / \
 *       d   e
 */
