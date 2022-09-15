//Write a function, largestComponent, that takes in the adjacency list of an undirected graph. The function should return the size of the largest connected component in the graph.

const obj = {
  1: ["2"],
  2: ["1", "8"],
  6: ["7"],
  9: ["8"],
  7: ["6", "8"],
  8: ["9", "7", "2"],
};

function makeAdjacent(obj) {
  const adjacent = new Map();

  for (let key in obj) {
    adjacent.set(+key, obj[key]);
  }

  return adjacent;
}

const traversal = (graph, visited, node) => {
  if (visited.has(node)) return 0;

  visited.add(node);
  for (let item of graph[node]) {
  }
};

const largestComponent = (graph) => {
  const visited = new Set();
  let hasNodes = 0;

  for (let [key] of graph) {
    let total = 0;
    total += traversal(graph, visited, key);
  }
};

console.log(largestComponent(makeAdjacent(obj)));
