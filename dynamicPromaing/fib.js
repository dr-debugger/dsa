function fib(n, memo = {}) {
  if (n in memo) return memo[n];
  if (n <= 2) return 1;
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  return memo[n];
}

const result = fib(7);
console.log(result);

/**
 * @problem
 * supose got an array of lenth n : [1,2,3,4,5,6,7....,n]
 * now the fib would be : [1, 1, 2, 3, 5, 8, 13, ...., (arr[n-3] + arr[n-2])] // n is the length of the array
 *
 * so fib(7) , would be 13;
 * fib(5) would be 5
 */
