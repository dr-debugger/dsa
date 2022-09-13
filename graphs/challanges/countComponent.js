// Write a function, connectedComponentsCount, that takes in the adjacency list of an undirected graph. The function should return the number of connected components within the graph.

const obj = {
  0: [4, 7],
  1: [],
  2: [],
  3: [6],
  4: [0],
  6: [3],
  7: [0],
  8: [],
};

function makeAdjacent(obj) {
  const adjacent = new Map();

  for (let key in obj) {
    adjacent.set(+key, obj[key]);
  }

  return adjacent;
}

const traversal = (item, set, graph) => {
  for (let i = 0; i < item.length; i++) {
    if (set.has(item[i])) continue;
    // console.log(item[i], "recursion");
    set.add(item[i]);
    traversal(graph.get(item[i]), set, graph);
  }
};

const connectedComponentsCount = (obj) => {
  const graph = makeAdjacent(obj);

  const visited = new Set();
  let count = 0;

  for (let [key, value] of graph) {
    if (visited.has(key)) continue;

    // console.log(key, "loop");
    visited.add(key);
    count += 1;
    traversal(value, visited, graph);
  }

  return count;
};

console.log(connectedComponentsCount(obj));

/**
 * @😓 Algo:
 * 1. Loop through the adjacency list;
 * 2. if the key is visited , just skip the iteration;
 * 3. if not visited , make count +1 from previous. Now loop through all its value(Number[]) recursively, and also make every item from that value Visited if it's not.
 * ****This Process will continue for every item on adjacency list*****
 * Finally return the count
 */
