// Write a function, undirectedPath, that takes in an array of edges for an undirected graph and two nodes (nodeA, nodeB). The function should return a boolean indicating whether or not there exists a path between nodeA and nodeB.

const edges = [
  ["b", "a"],
  ["c", "a"],
  ["b", "c"],
  ["q", "r"],
  ["q", "s"],
  ["q", "u"],
  ["q", "t"],
];

const buildGraph = (edges) => {
  const adjacencyList = new Map();

  for (let [key, value] of edges) {
    adjacencyList.get(key)
      ? adjacencyList.get(key).push(value)
      : adjacencyList.set(key, [value]);

    adjacencyList.get(value)
      ? adjacencyList.get(value).push(key)
      : adjacencyList.set(value, [key]);
  }

  return adjacencyList;
};

const matchPath = (graph, src, dst, set) => {
  if (src === dst) return true;

  if (set.has(src)) return false;
  set.add(src);

  console.log(src);
  for (let n of graph.get(src)) {
    if (matchPath(graph, n, dst, set)) return true;
  }

  return false;
};

const undirectedPath = (edges, src, dst) => {
  const graph = buildGraph(edges);
  const isMatched = matchPath(graph, src, dst, new Set());
  return isMatched;
};

console.log(undirectedPath(edges, "a", "c"));
