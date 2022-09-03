/** ❤️ex1
 * write a function 'sum' that takes anarray of numbers as an input.
 * the function sholud return the total sum of all elements
 */
const sum = (arr) => {
  if (arr.length === 0) return 0;

  let firstEl = arr[0];
  let rest = arr.slice(1);

  return firstEl + sum(rest);
};

// console.log(sum([2, 3, 4, -3]));
// time complexity 0(n^2) and space complexity 0(n)

const sum_optimise = (arr) => {
  return _sum(arr, 0);
};
const _sum = (arr, index) => {
  if (index === arr.length) return 0;

  return arr[index] + _sum(arr, index + 1);
};
console.log(sum_optimise([6, 8]));
// time complexity 0(n) and space complexity 0(n)
