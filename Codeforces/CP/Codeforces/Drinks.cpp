#include <bits/stdc++.h>
using namespace std;

int main()
{

    int noOfDrinks, typeDrink[110];
    cin >> noOfDrinks;

    double ans = 0.0, sum = 0.0;
    for (int i = 0; i < noOfDrinks; i++)
    {
        cin >> typeDrink[i];
        sum += typeDrink[i];
    }
    ans = sum / noOfDrinks;

    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}