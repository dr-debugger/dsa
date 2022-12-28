/**
 * stack is the best way to implement this
 */
class Node {
  constructor(v) {
    this.value = v;
    this.left = null;
    this.right = null;
  }
}

// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");
// const e = new Node("e");

const a = new Node(2);
const b = new Node(8);
const c = new Node(10);
const d = new Node(5);
const e = new Node(-5);

a.left = b;
a.right = c;
c.left = d;
c.right = e;

function depth_first(root) {
  const stack = [root];

  while (stack.length > 0) {
    const current = stack.pop();
    console.log(current.value);

    if (current.left) stack.push(current.left);
    if (current.right) stack.push(current.right);
  }
} // time => 0(n); space => 0(n)
// depth_first(a);

const recurseDepthFirst = (node) => {
  // we are not gonn deal with manual stack, we will use js call stack as a stcak

  if (!node) return;

  console.log(node.value);

  recurseDepthFirst(node.right);
  recurseDepthFirst(node.left);
}; // time => 0(n); space => 0(n)
// ❤️ its a pre - order trevarsal cause we print out parent before both children => self -> right -> left
// recurseDepthFirst(a);

/**
 * Three traversal for depth_first _search
 * 1. pre - order => self -> right -> left
 * 2.❤️post - order => left -> right -> self
 * 3 .❤️in - order => left -> self -> right
 */

// ❤️ ex : return the sum of all nodes;
let sum = 0;
const returnSum = (node) => {
  if (!node) return 0;

  sum += node.value;

  returnSum(node.left);
  returnSum(node.right);
};
// returnSum(a);
// console.log(sum);

//better way
const recuesive = (node) => {
  if (!node) return 0;

  return recuesive(node.left) + node.value + recuesive(node.right);
};

console.log(recuesive(a));
