#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100][100];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int countEvenNegatives = 0;
    int sumEvenNegatives = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] < 0 && arr[i][j] % 2 == 0) {
                ++countEvenNegatives;
                sumEvenNegatives += arr[i][j];
            }
        }
    }

    cout << countEvenNegatives << " " << sumEvenNegatives << endl;

    return 0;
}