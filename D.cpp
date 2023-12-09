#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> snakeArray(n,vector<int>(n));

    int counter = 1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                snakeArray[i][j] = counter++;
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                snakeArray[i][j] = counter++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << snakeArray[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}