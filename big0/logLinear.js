/**
 * it has linear behavior nested in log steps
 * its bigger than 0(n) but smaller than 0(n^2)
 */

//❤️ex1
const bar = (str) => {
  console.log(str);
  if (str.length <= 1) return "base";
  let midIndex = Math.floor(str.length / 2);

  // bar(str.slice(0, midIndex));

  let slice = "";
  // for every iteration we're doing n/2 times iteration more,
  // so time complexity wouldbe ~ 0(n/2 * log(n)) => 0(nlog(n))
  for (let i = 0; i < midIndex; i++) {
    slice += str[i];
  }
  bar(slice);
};
// bar("ghjedghwjegdwehjdgewjhdgewhjd");

//❤️ex2
const foo = (arr) => {
  let str = "";

  // this is a linear time complexity, and on every iteration we doing this. so it will be added on every level on the tree
  for (let i = 0; i < arr.length; i++) {
    str += arr[i];
  }
  console.log(str);
  console.log("---------");

  if (arr.length <= 1) return console.log("base");

  const midIndex = Math.floor(arr.length / 2);
  const left = arr.slice(0, midIndex);
  const right = arr.slice(midIndex);
  foo(left);
  foo(right);
};

foo(["a", "b", "c", "d", "e", "f", "g", "h"]);

// here the time complexity would be 0(nlog(n));

/**
 *  n   n*log2(n)    n*n
 *  2       2         4
 *  4       8         16
 *  16      64        256
 *  32      160      32*32
 *  ..      ..        ...
 *  1024    10240    1048576
 */
