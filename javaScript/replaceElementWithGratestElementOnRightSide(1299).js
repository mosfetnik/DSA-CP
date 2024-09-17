// * Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

// Input: arr = [17,18,5,4,6,1]
// Output: [18,6,6,6,1,-1]

function replaceElementOnRightSide() {
  for (const i = arr.length - 1; i >= 0; i--) {
    const maxi = -1;
    if (arr[i] > maxi) {
      maxi = arr[i];
    }
  }
}
