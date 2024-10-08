// 2696. Minimum String Length After Removing Substrings

// using brute force

#include <bits/stdc++.h>
#include <stack>
using namespace std;
// int minLenght(string s)
// {

//   int n = s.length();

//   bool found = true;

//   while (found)
//   {

//     found = false;

//     size_t position = s.find("AB"); // find the AB and return position indexes

//     if (position != string::npos) // chekk if the value out of bound
//     {
//       s.erase(position, 2);
//       found = true;
//     }

//     position = s.find("CD");
//     if (position != string::npos)
//     {
//       s.erase(position, 2);
//       found = true;
//     }
//   }
//   return s.length();
// }

// Using STack

int minLength(string s)
{

  stack<char> st;

  for (char &c : s){
    if (!st.empty() && (st.top() == 'A' && c == 'B' || st.top() == 'D' || c == 'C'))
      st.pop();
    else
      st.push(c);
  }
  return st.size();
}

int main()
{
  string s = "ABCDEF";
  cout << "Min length of \"" << s << "\": " << minLength(s) << endl;
}
