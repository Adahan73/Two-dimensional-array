#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[500][500];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int main = 0;
    for (int i = 0; i < n; i++) {
        main += arr[i][i];
    }

    int secondary = 0;
    for (int i = 0; i < n; i++) {
        secondary += arr[i][n - 1 - i];
    }

    cout << "" << main << " " << secondary;

    return 0;
}