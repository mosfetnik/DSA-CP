#include <iostream>
#include <vector>
using namespace std;

// Function to check if there's a building at coordinates (x, y)
bool check(vector<vector<int>>& buildings, int x, int y)
{
    // Loop through all buildings to see if we have one at the given coordinates
    for (int i = 0; i < buildings.size(); i++)
    {
        if (buildings[i][0] == x && buildings[i][1] == y)
            return true;  // Found the building
    }
    return false;  // Building not found at (x, y)
}

int countCoveredBuildings(int n, vector<vector<int>>& buildings)
{
    int cnt = 0;
    
    // Loop through all buildings
    for (int i = 0; i < buildings.size(); i++) 
    {
        int x = buildings[i][0];
        int y = buildings[i][1];

        // Check if there are buildings in all four directions (up, down, left, right)
        bool up = check(buildings, x - 1, y);  // Check above (x-1, y)
        bool down = check(buildings, x + 1, y);  // Check below (x+1, y)
        bool left = check(buildings, x, y - 1);  // Check left (x, y-1)
        bool right = check(buildings, x, y + 1);  // Check right (x, y+1)

        // A building is covered if it has at least one building in each of the four directions
        if (up && down && left && right)
            cnt++;  // Increment the count if the building is covered
    }

    return cnt;  // Return the total count of covered buildings
}

int main()
{
    int n = 5;
    vector<vector<int>> buildings = {
        {1, 3},  // Building at (1, 3)
        {3, 2},  // Building at (3, 2)
        {3, 3},  // Building at (3, 3)
        {3, 5},  // Building at (3, 5)
        {5, 3}   // Building at (5, 3)
    };

    cout << countCoveredBuildings(n, buildings) << endl; // Output should be 1

    return 0;
}
