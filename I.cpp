#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_a, m_a;
    cin >> n_a >> m_a;

    vector<vector<int>> A(n_a, vector<int>(m_a));
    for (int i = 0; i < n_a; ++i) {
        for (int j = 0; j < m_a; ++j) {
            cin >> A[i][j];
        }
    }

    int n_b, m_b;
    cin >> n_b >> m_b;

    vector<vector<int>> B(n_b, vector<int>(m_b));
    for (int i = 0; i < n_b; ++i) {
        for (int j = 0; j < m_b; ++j) {
            cin >> B[i][j];
        }
    }

    if (m_a != n_b) {
        cout << -1 << endl;
        return 0;
    }

    vector<vector<int>> C(n_a, vector<int>(m_b, 0));
    for (int i = 0; i < n_a; ++i) {
        for (int j = 0; j < m_b; ++j) {
            for (int k = 0; k < m_a; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << n_a << " " << m_b << endl;

    for (int i = 0; i < n_a; ++i) {
        for (int j = 0; j < m_b; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}