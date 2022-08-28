const gridTravelar = (r, c) => {
  if (r === 1 && c === 1) return 1;
  if (r === 0 || c === 0) return 0;

  return gridTravelar(r - 1, c) + gridTravelar(r, c - 1);
};

console.log(gridTravelar(2, 3));
