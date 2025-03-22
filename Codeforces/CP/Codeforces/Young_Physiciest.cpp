#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of forces

    int sumX = 0, sumY = 0, sumZ = 0;
    
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;  // Read the force vector
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    // Check equilibrium condition
    if (sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "YES" << endl;  // The body is in equilibrium
    else
        cout << "NO" << endl;   // The body is moving

    return 0;
}
