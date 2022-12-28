class Snake {
  constructor() {
    this.snakeBody = [
      [4, 1],
      [4, 2],
      [4, 3],
      [4, 4],
    ];
  }

  draw() {
    const grid = [];
    for (let i = 0; i < 10; i++) {
      let row = [];
      for (let j = 0; j < 10; j++) {
        row.push(" ");
      }
      grid.push(row);
    }
    this.initialize();
  }

  initialize() {
    this.snakeBody.forEach((pos) => {
      const [row, col] = pos;
      grid[row][col] = "0";
    });
  }
}
