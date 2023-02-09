// ❤️ex1
let foo = (arr) => {
  // arr.length > 0
  for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
  }
};
// complexity would be 0(n)

//ex2
let bar = (n) => {
  // n > 0
  if (n === 0) return;
  console.log(n);
  bar(n - 1);
};
bar(5);
