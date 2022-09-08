> A graph is a data structure made up of **nodes** or **vertices** and **edges** or the connection between nodes
> A graph can have any number of root elements and multiple paths between nodes

```
const vertices = ['A', 'B', 'C', 'D'];
const edges = [
    ['A', 'B'],
    ['A', 'C'],
    ['B', 'D']
];

A  -- B -- D
|
C

```

-> Time complexity to find adjacent nodes => 0(e) where e is the number of edges.
-> Time complexity to check if two nodes are connected - > 0(e)
-> space complexity => 0(v + e) where v is the vertices and e is the edges
