#include <bits/stdc++.h>
using namespace std;

// int count_digits(int n)
// {
//    int x = n;
//    int count = 0;
//    while (x != 0)
//    {
//       x = x / 10;
//       count++;
//    }
//    return count;
// }

// //   Reverse the DIGIT
// int reverseDigit(int n)
// {
//    int reverse = 0;
//    int N = n;
//    while (N != 0)
//    {
//       int n = n % 10;
//       int reverse = reverse * 10 + n;
//       N = N / 10;
//    }
// }

//  Armstrong Number
bool armStrong(int n)
{
   int originalNo = n;
   int digit = log10(n) + 1;
   int sum = 0;

   while (n > 0)
   {

      int rem = n % 10;
      sum = sum + pow(rem, digit);
      n = n / 10;
   }

   return (sum == originalNo);
}

bool primeNumber(int k)
{
   for (int i = 2; i <= sqrt(k); i++)
   {

      if (k % i == 0){
        return false;
      }
   }
   return true;
   
}

int main()
{
   int n1 = 1634;
   if (armStrong(n1))
   {
      cout << "Yes, it is an Armstrong Number\n";
   }
   else
   {
      cout << "No, it is not an Armstrong Number\n";
   }
   return 0;
}
