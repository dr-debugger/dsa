//  ️ex 1
const foo = (n) => {
  let result = 0;
  for (let i = 0; i < 5; i++) {
    result += n;
  }
  return result;
};
console.log(foo(4));
// time complexity 0(5) ~ where we can simply say, its 0(1)

// ️ex 2
const bar = (arr) => {
  return arr[0] + arr[arr.length - 1];
};
console.log(bar([1, 2, 44, 5]));
// every operation running on constant time; so time complexity would be 0(1);
//and no matter what teh array size is, we are just storing constant value on the memory;
// so space complexity would be 0(1);

/**
 * @constant complexity means , input size doesnt matter on how much space or time gonna take our program
 */
