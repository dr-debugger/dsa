/**
 * @combinatorics def : Field of math concerned with counting things
 * @Combination def: A collection of things where the order does not matter
 * ****
 * Given a set of n things, there are 2^n combinations
 */

const combinations = (elem, result = [[]]) => {
  if (elem.length <= 0) return result;
  let firstEl = elem[0];
  let rest = elem.slice(1);

  let newResult = [...result];

  result.forEach((e) => {
    newResult.push([...e, firstEl]);
  });

  return combinations(rest, newResult);
};

console.log(combinations(["a", "b", "c"]));

// [[], ["a"], ["b"], ["a", "b"], ["c"], ["a", "c"], ["b", "c"], ["a", "b", "c"]];
