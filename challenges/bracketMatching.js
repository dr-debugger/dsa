/**
 * Match bracket if it in correct order or not. it it in correct order , return 1; or return 0;
 * the parameter will be string of length >=0 ;
 * you can use any data-structure here, but the convinient one will be the stack
 */
const bracketMatch = (str) => {
  const stack = [];

  for (let i = 0; i < str.length; i++) {
    if (str[i] === "(") {
      stack.push("(");
    } else if (str[i] === ")") {
      if (stack.length === 0) return 0;
      stack.pop();
    }
  }

  return stack.length === 0 ? 1 : 0;
}; // time complexity 0(n); space complexity 0(n)
// space complexity 0(n) because in the worst case we have to put every character on stack if the string contents mostly brackets.
console.log(bracketMatch("((1,5)), (34)"));

console.log(new Map());
