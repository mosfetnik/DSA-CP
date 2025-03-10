#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int X, Y, Z; 
        int A, B, C; 
        cin >> X >> Y >> Z >> A >> B >> C;

        int happyPeople = 0;
        int total_people =A+B+C;

       
        int small = min(X, A);
        A -= small;
        happyPeople += small;

      
        int large = min(Y, B);
        B -= large;
        happyPeople += large;

        
        int XL = min(Z, C);
        C -= XL;
        happyPeople += XL;

     
        int convertLtoS = min(Y - large, A);
        A -= convertLtoS;
        happyPeople += convertLtoS;

     
        int convertXLtoL = min(Z - XL, B);
        B -= convertXLtoL;
        happyPeople += convertXLtoL;

    
        int convertXLtoS = min(Z - XL - convertXLtoL, A);
        A -= convertXLtoS;
        happyPeople += convertXLtoS;

        cout << happyPeople << endl;
    }

    return 0;
}
