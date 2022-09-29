// if the target is the sum of any sub-array of given Number[], then we return true , otherwise false

const canSum = (target, arrOfNum, memo = new Map()) => {
  if (memo.has(target)) return memo.get(target);
  if (target === 0) return true;
  for (let num of arrOfNum) {
    if (target - num < 0) continue;

    const result = canSum(target - num, arrOfNum, memo);
    memo.set(target, result);
    if (result) return true;
  }

  return false;
};

// without memoize time complexity would be 0(m^n); where m is length of array and n is the target. and space complexity for worst case would be the height of the recursion tree, and that is 0(n); n = target

// with memoization , time complexity would be 0(m*n); space complexity will be same 0(n)

console.log(canSum(4700, [7, 14]));
