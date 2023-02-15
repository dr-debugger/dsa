/**
 * Write a function, hasPath, that takes in an object representing the adjacency list of a directed acyclic graph and two nodes (src, dst). The function should return a boolean indicating whether or not there exists a directed path between the source and destination nodes.
 */

const graph = {
  v: ["x", "w"],
  w: [],
  x: [],
  y: ["z"],
  z: [],
};
const hasPath = (graph, src, dst) => {
  if (src === dst) return true;

  const set = new Set();
  let flag = 0;
  function depthFirst(curr) {
    for (let neighbour of graph[curr]) {
      if (neighbour === dst) {
        flag = 1;
        return;
      }

      if (!set.has(neighbour) && !flag) {
        set.add(neighbour);
        depthFirst(neighbour);
      }
    }
  }
  depthFirst(src);
  return flag ? true : false;
};
// console.log(hasPath(graph, "v", "z"));

// ️ better way
const visited = new Set();
const isPath = (graph, src, dst) => {
  if (src === dst) return true;

  for (let neighbour of graph[src]) {
    if (!visited.has(neighbour)) {
      visited.add(neighbour);
      if (isPath(graph, neighbour, dst)) return true;
    }
  }

  return false;
};
console.log(isPath(graph, "y", "w"));
//time complexity O(n), space complexity O(n)
