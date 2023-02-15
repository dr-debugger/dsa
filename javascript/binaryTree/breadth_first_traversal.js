/**
 * the breadth refers to the width of the tree.
 *  you have to explore all nodes on the current level, before going down
 * queue is the best way to implement this
 */

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

function printTree(tree) {
  let queue = [];

  const breadthFirst = (current, level) => {
    if (!current) return;

    console.log(level);
    if (!queue[level]) {
      queue[level] = [current.value];
    } else {
      queue[level].push(current.value);
    }

    breadthFirst(current.left, level + 1);
    breadthFirst(current.right, level + 1);
  };
  breadthFirst(tree, 0);

  return queue;
}
// console.log(printTree(a));

// another approch
const breadthFirst = (root) => {
  const queue = [root];

  while (queue.length > 0) {
    // extracting the first element of the queue
    const current = queue.shift();
    console.log(current.value);

    if (current.left) queue.push(current.left);
    if (current.right) queue.push(current.right);
  }
}; // in this approch if you want to track level , it will be
// breadthFirst(a);

//  search perticular item in a tree
const searchItem = (root, item) => {
  const queue = [root];

  while (queue.length > 0) {
    // extracting the first element of the queue
    const current = queue.shift();
    if (current.value === item) return true;

    if (current.left) queue.push(current.left);
    if (current.right) queue.push(current.right);
  }

  return false;
}; // n is the nodes in the tree, time complexity 0(n-1), space complexity 0(n - 1) = 0(n)
// console.log(searchItem(a, "f"));
