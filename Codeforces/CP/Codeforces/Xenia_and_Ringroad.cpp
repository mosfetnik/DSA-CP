#include <iostream>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m; // Number of houses and number of tasks
    
    long long time = 0;
    int current = 1; // Xenia starts at house 1
 
    for (int i = 0; i < m; i++) {
        int next;
        cin >> next;
        
        if (next >= current) {
            time += next - current;
        } else {
            time += (n - current) + next;
        }
 
        current = next; // Move to the new house
    }
 
    cout << time << endl;
    return 0;
}