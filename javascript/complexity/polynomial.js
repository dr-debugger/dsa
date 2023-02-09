/**
 * 1. 0(n^c) => where n is the size of the input and c is the constant
 * 2. 0(n^2) [quadratic], 0(n^3) [cubic] , etc falls in this family
 */

// ❤️ex1
const bar = (arr) => {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      console.log(`${arr[i]}/${arr[j]}`);
    }
  }
};
// bar(["a", "b", "c"]);

//❤️ex2
const foo = (str) => {
  if (str.length === 0) return console.log("base");

  const firstChar = str[0]; //its 0(1)
  console.log(firstChar);

  let rest = "";
  for (let i = 1; i < str.length; i++) {
    console.log(str[i]);
    rest += str[i];
  }

  foo(rest);
};
foo("str");
// we did n recursive call , and on every call we did additional n-1 iteration;
// so complexcity would be n * (n-1) => 0(n^2)
