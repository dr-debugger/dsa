/**
 * @logarithmic Complexity means, the number of steps can be expressed as a logarithm
 * on the input size;
 *
 * 1. log is the opposite of exponent.
 * 2. An exponent is an repeated multification , 4*4*4 = 4^3; and "log4(64)" would be 3 for base 4
 * if no base provided in mathematics common base would be 10; and in computer it would be 2
 */

//❤️ex 1
const fun = (n) => {
  let step = 0;
  while (n > 1) {
    console.log(n, step++);
    n /= 2;
  }
  console.log("done", step);
};
// fun(16);
// complexity would be 0(log(n)) ; base is two

// ❤️ex2
const foo = (n) => {
  if (n <= 1) return console.log("end");
  console.log(n);
  foo(n / 4);
};
foo(30);
// complexity would be 0(log(n)); base is 4

/**
 *  n   log2(n)
 *  2      1
 *  4      2
 *  16     4
 *  32     5
 *  ..     ..
 *  1024   10
 */
