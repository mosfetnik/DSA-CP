"use strict";

// * find the of n number

function sumOfNumber(num) {
  let sum = 0;

  // sum= num * (num+1)/2; // using fourmula

  // console.log(sum);

  for (let i = 1; i <= num; i++) {
    sum += i;
  }

  console.log(sum);
}
sumOfNumber(7);

// * find the sum of digit

function sumOfDigit(num) {
  let sum = 0;
  while (num > 0) {
    sum += num % 10;
    num = Math.floor(num / 10);
  }
  return sum;
}
console.log(sumOfDigit(1234));

// * find the number count of digit in number

function countDigit(num) {
  let count = 0;
  num = Math.abs(num);
  do {
    count++;
    num = Math.floor(num / 10);
  } while (num > 0);
  {
    return count;
  }
}
console.log(countDigit(3453));

// palindrome number

function isPalindrome(num) {
  let reverse = 0;
  let copyNum = num;
  while (copyNum > 0) {
    const lastDigit = copyNum % 10;
    reverse = reverse * 10 + lastDigit;

    copyNum = Math.floor(copyNum / 10);
  }

  return num === reverse;
}
console.log(isPalindrome(123));

// & fabonaci number

function fib(n) {
  if (n < 2) {
    return n;
  }
  let prev = 0;
  let curr = 1;
  let next;

  for (let i = 0; i < n; i++) {
    next = prev + curr;
    prev = curr;
    curr = next;
  }
  return next;
}
console.log(fib(5));

//* find the missing number in array

// & approach 1 => find the total sum and - current cum of arry

function missingName(num) {
  let totalSum = 0;
  let currentSum = 0;
  const n = num.length;
  for (let i = 0; i < n; i++) {
    currentSum += num[i];
  }
  totalSum = (n * (n + 1)) / 2;
  return totalSum - currentSum;
}

const num = [1, 2, 3, 4, 5,7,0];
console.log(missingName(num));



// ^ Array in java script 