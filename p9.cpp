#include <iostream>
using namespace std;
#include <vector>

int main () {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int> > matrix(rows, vector<int>(cols, 0));
    vector<vector<int> > matrix2(rows, vector<int>(cols, 0));
    vector<vector<int> > matrix3(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at (" << i+1 << ", " << j+1 << "): ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at (" << i+1 << ", " << j+1 << "): ";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix3[i][j] = matrix2[i][j]+matrix[i][j];
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
}