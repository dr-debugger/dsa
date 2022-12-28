const checkPlaindrome = (str) => {
  const strArr = str.split("");
  if (strArr.length === 0) return false;
  const hasTotalItems = strArr.length - 1;
  if (strArr[0] !== strArr[hasTotalItems]) return false;

  const loopCount = Math.floor(strArr.length / 2) - 1;

  for (let i = 0; i < loopCount; i++) {
    if (strArr[i + 1] !== strArr[hasTotalItems - 1]) return false;
  }

  return true;
};

// time complexity 0(n + n/2) => 0(n)

console.log(checkPlaindrome("abcba"));
