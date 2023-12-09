#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> prices(n, vector<int>(m));

    vector<vector<int>> sold(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> prices[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> sold[i][j];
        }
    }

    int totalRevenue = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (sold[i][j] == 1) {
                totalRevenue += prices[i][j];
            }
        }
    }

    cout << totalRevenue << endl;

    return 0;
}