// ️ex1
const foo = (n) => {
  if (n === 1) return;

  for (let i = 0; i < n; i++) {
    foo(n - 1);
  }
};
foo(4); // 0(n!)
