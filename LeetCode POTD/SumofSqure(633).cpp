// Given a non-negative integer c,
//  decide whether there're two integers a and b such that a2 + b2 = c.

// Example 1:

// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5

#include <bits/stdc++.h>
using namespace std;


  bool judgeSquareSum(int c) {
        
        long start =0;
        long end=sqrt(c);
    
        while(start <= end){
       if(start * start + end*end == c) return true;
       else if( start* start + end*end>c) end--;
       else start++;
        }
        return false;
    };