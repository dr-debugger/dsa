//Write a function, largestComponent, that takes in the adjacency list of an undirected graph. The function should return the size of the largest connected component in the graph.

const obj = {
  0: ["4", "7"],
  1: [],
  2: [],
  3: ["6"],
  4: ["0"],
  6: ["3"],
  7: ["0"],
  8: [],
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
  let forThisNode = 1;
  for (let item of graph.get(node)) {
    forThisNode += traversal(graph, visited, +item);
  }
  return forThisNode;
};

const largestComponent = (graph) => {
  const visited = new Set();
  let hasLargeNodes = 0;

  for (let [key] of graph) {
    let total = 0;
    total += traversal(graph, visited, key);
    if (total > hasLargeNodes) {
      hasLargeNodes = total;
    }
  }

  return hasLargeNodes;
};

const graph = makeAdjacent(obj);

console.log(largestComponent(graph));
