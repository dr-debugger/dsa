/**
 * @complexity hierarchy
 * Big 0       Class
 * 0(1)         constant
 * 0(log(n))    logarithmic
 * 0(n)         linear
 * 0(nlog(n))   loglinear
 * 0(n^c)       polynomial
 * 0(c^n)       exponential
 * 0(n!)        factorial
 */

//❤️ex1
const f = (m, n) => {
  for (let i = 0; i < m; i++) {
    console.log("m");
  }

  for (let j = 0; j < n; j++) {
    console.log("n");
  }
}; // complexity : 0(m+n)

//❤️ex2
const crossPairs = (arr1, arr2) => {
  for (let i = 0; i < arr1.length; i++) {
    for (let j = 0; j < arr2.length; j++) {
      console.log(arr1[i], arr2[j]);
    }
  }
}; // complexity : 0(m*n)

//❤️ex3
const foo = (str1, str2) => {
  if (str1.length > str2.length) {
    for (let i = 0; i < str1.length; i++) {
      console.log(str1[i]);
    }
  } else {
    for (let j = 0; j < str2.length; j++) {
      console.log(str2[j]);
    }
  }
}; // 0(max(m,n)) or 0(n) where n is the length of the longer string
