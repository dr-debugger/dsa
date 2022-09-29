/**
 * @question Given a `m,n` grid. tell the all possible way where a person can
 * travel through top left to down right.
 * person can only go right and down direction at a moment.
 */

const map = new Map();

const gridTravelar = (r, c) => {
  let key = `${r},${c}`;

  if (map.has(key)) return map.get(key);

  if (r === 1 && c === 1) return 1;
  if (r === 0 || c === 0) return 0;

  // if it doesnot in the memo object then we put it on thet object;
  let result = gridTravelar(r - 1, c) + gridTravelar(r, c - 1);
  map.set(key, result);
  return map.get(key);
};
// time complexity on brute force algo : 0(2^m+n)
// time complexity on memoized algo : 0(m*n)
// space complexity 0(m+n)
console.log(gridTravelar(2, 3));
