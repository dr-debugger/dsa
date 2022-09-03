/**
 * @anatomy of Recursion
 * 1 Base Case: the "smallest" instance of a problem that is solved trivially
 * 2 Recursive Case: an instance of a problem that "shrinks" the size of the input toward the base case
 */

//⬆️ factorial
const fact = (num) => {
  if (num === 1) return 1;
  return num * fact(num - 1);
}; // num >= 1
// time complexity 0(n)
// space complextity 0(n)
