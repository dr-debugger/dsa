/**
 * @permutation def : A collection of thing where order matters; oposite of combination.
 * **** Given a set of n things , there are n! permutations
 */

const permutations = (elem) => {
  if (elem.length <= 0) return [[]];

  const firstEl = elem[0];
  const rest = elem.slice(1);

  const permsWithoutFirstEl = permutations(rest);

  let allPermutation = new Array();

  for (let i = 0; i < permsWithoutFirstEl.length; i++) {
    let elem = permsWithoutFirstEl[i];

    for (let j = 0; j <= elem.length; j++) {
      let permWithFirst = [...elem.slice(0, j), firstEl, ...elem.slice(j)];
      allPermutation.push(permWithFirst);
    }
  }

  return allPermutation;
};

console.log(permutations(["a", "b", "c"]));
// time complexity 0(n!), space complexity 0(n * (n-1)) => 0(n^2)

// [
//   ["a", "b", "c"],
//   ["b", "a", "c"],
//   ["b", "c", "a"],
//   ["a", "c", "b"],
//   ["c", "a", "b"],
//   ["c", "b", "a"],
// ];
