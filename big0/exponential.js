/**
 * 0(c^n) => c is the constant, n is the input size
 * 2. ex => 0(2^n), 0(3^n) etc
 */

//❤️ex1 : time complexity : 0(2^n)
const foo = (n) => {
  if (n === 1) return;
  foo(n - 1);
  foo(n - 1);
};
/**
 * 😎 analyzing stack space for recursion:~
 *  => the space required on the call stack is the maximum stack depth
 * **** here space complexity would be 0(n)
 */

//❤️ex2 :time complexity : 0(3^n) where n > 1
const bar = (n) => {
  if (n === 1) return;
  bar(n - 1);
  bar(n - 1);
  bar(n - 1);
}; // here space complexity would be 0(n)

//❤️ex3 : time complexity  0(2^n/3) =>  0(2^n)
const fun = (n) => {
  if (n <= 0) return;
  fun(n - 3);
  fun(n - 3);
}; // here space complexity would be 0(n/3 + 1),

/**
 * n  n^2  2^n
 * 1   1    2
 * 2   2    4
 * 3   9    8
 * 4   16   16
 * 6   36   64
 * 7   49   128
 */
