/**
 * 0(c^n) => c is the constant, n is the input size
 * 2. ex => 0(2^n), 0(3^n) etc
 */

//❤️ex1 : 0(2^n)
const foo = (n) => {
  if (n === 1) return;
  foo(n - 1);
  foo(n - 1);
};

//❤️ex2 : 0(3^n)
const bar = (n) => {
  if (n === 1) return;
  bar(n - 1);
  bar(n - 1);
  bar(n - 1);
};

//❤️ex3 : 0(2^n/3) =>  0(2^n)
const fun = (n) => {
  if (n === 1) return;
  fun(n - 3);
  fun(n - 3);
};

/**
 * n  n^2  2^n
 * 1   1    2
 * 2   2    4
 * 3   9    8
 * 4   16   16
 * 6   36   64
 * 7   49   128
 */
