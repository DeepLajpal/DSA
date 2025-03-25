/**
 * @param {string} s
 * @param {string} t
 * @param {number[]} nextCost
 * @param {number[]} previousCost
 * @return {number}
 */
var shiftDistance = function (s, t, nextCost, previousCost) {
    let lengthOfStringS = s.length;
    let minimumTotalCostOfShiftDistance = 0;
  
    for (let i = 0; i < lengthOfStringS; i++) {
      let AsciiOfSi = s[i].charCodeAt(0);
      let AsciiOfti = t[i].charCodeAt(0);
  
      if (AsciiOfSi !== AsciiOfti) {
        let forwardShiftCost = 0;
        let backwardShiftCost = 0;
  
        // Calculate forward shift cost
        let forwardSteps = (AsciiOfti - AsciiOfSi + 26) % 26;
        for (let j = 0; j < forwardSteps; j++) {
          let costIndex = (AsciiOfSi - "a".charCodeAt(0) + j) % 26;
          forwardShiftCost += nextCost[costIndex];
        }
  
        // Calculate backward shift cost
        let backwardSteps = (AsciiOfSi - AsciiOfti + 26) % 26;
        for (let j = 0; j < backwardSteps; j++) {
          let costIndex = (AsciiOfSi - "a".charCodeAt(0) - j + 26) % 26;
          backwardShiftCost += previousCost[costIndex];
        }
  
        // Add the minimum cost to the total cost
        minimumTotalCostOfShiftDistance += Math.min(forwardShiftCost, backwardShiftCost);
      }
    }
  
    return minimumTotalCostOfShiftDistance;
  };
  
  // Example usage:
  console.log(shiftDistance(
    "abab",
    "baba",
    [
      100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0,
    ],
    [
      1, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0,
    ]
  )); // Output: 2 
  
  // console.log(shiftDistance(
  //   "leet",
  //   "code",
  //   [
  //     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  //   ],
  //   [
  //     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  //   ]
  // )); // Output: 31