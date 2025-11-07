#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    vector<vector<int> > matrix(n, vector<int>(n));
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<int> rowSum(n, 0), colSum(n, 0);
    int diag1 = 0, diag2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
            if (i == j) diag1 += matrix[i][j];
            if (i + j == n - 1) diag2 += matrix[i][j];
        }
    }

    bool hor = true;
    for (int i = 1; i < n; i++) {
        if (rowSum[i] != rowSum[0]) {
            hor = false;
            break;
        }
    }

    bool ver = true;
    for (int i = 1; i < n; i++) {
        if (colSum[i] != colSum[0]) {
            ver = false;
            break;
        }
    }

    bool diags = (diag1 == diag2) && (diag1 == rowSum[0]);

    if (hor && ver && diags)
        cout << "Magic\n";
    else
        cout << "Not magic\n";

    return 0;
}
