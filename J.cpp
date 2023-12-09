#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> snake(n, vector<int>(n));

    int count = 1;
    for (int diag = 0; diag < 2 * n - 1; ++diag) {
        int startRow = max(0, diag - n + 1);
        int endRow = min(diag, n - 1);

        if (diag % 2 == 0) {
            for (int row = startRow; row <= endRow; ++row) {
                snake[row][diag - row] = count++;
            }
        } else {
            for (int row = endRow; row >= startRow; --row) {
                snake[row][diag - row] = count++;
            }
        }
    }

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            cout << snake[row][col] << ' ';
        }
        cout << endl;
    }

    return 0;
}