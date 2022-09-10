const vertices = ["A", "B", "C", "D", "E"];
const edges = [
  ["A", "B"],
  ["A", "D"],
  ["B", "C"],
  ["C", "D"],
  ["C", "E"],
  ["D", "E"],
];

const adjacency = new Map();

vertices.forEach((elem) => {
  adjacency.set(elem, []);
});

edges.forEach(([key, value]) => {
  adjacency.get(key).push(value);
});

// {
//   'A' => [ 'B', 'D' ],
//   'B' => [ 'C' ],
//   'C' => [ 'D', 'E' ],
//   'D' => [ 'E' ],
//   'E' => []
// }

// depthFirstSearch
const depthFirstSearch = (graph, sourceNode) => {
  const stack = [sourceNode];

  const set = new Set();

  while (stack.length > 0) {
    const current = stack.pop();
    console.log(current);

    for (let neighbour of graph.get(current)) {
      if (neighbour && !set.has(neighbour)) {
        set.add(neighbour);
        stack.push(neighbour);
      }
    }
  }
};
// depthFirstSearch(adjacency, "A");

const depthFirstRecursion = (graph, sourceNode, set = new Set()) => {
  console.log(sourceNode);

  for (let neighbour of graph.get(sourceNode)) {
    if (neighbour && !set.has(neighbour)) {
      set.add(neighbour);
      depthFirstRecursion(graph, neighbour, set);
    }
  }
};
// depthFirstRecursion(adjacency, "A");

const breadthFirstTreversal = (graph, node) => {
  const queue = [node];

  const set = new Set();

  while (queue.length > 0) {
    const current = queue.shift();
    console.log(current);

    for (let neighbour of graph.get(current)) {
      if (!set.has(neighbour)) {
        set.add(neighbour);
        queue.push(neighbour);
      }
    }
  }
};
breadthFirstTreversal(adjacency, "A");
