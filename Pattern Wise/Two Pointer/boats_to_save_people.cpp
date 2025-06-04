

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {

        int n = people.size();

        // ^ sort the array
        sort(people.begin(), people.end());

        int i = 0;
        int j = n - 1;
        int pass = 0;
        // ^ using two pointer
        while (i <= j)
        {
            // if limit is less than or equal than i++;
            // else always choose the haviest people so alway the j--;
            if (people[i] + people[j] <= limit)
            {
                i++;
            }
            j--;
            pass++;
        }

        return pass;
    }
};