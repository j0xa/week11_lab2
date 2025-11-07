#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    bool unique=false;
    cout << "Enter number of integers: ";
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++) {
        cout <<"Enter integer: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] != a[i]) {
                unique=true;
            }
            else {
                unique=false;
            }

        }
        if (unique==true) {
            b.push_back(a[i]);
        }
        unique=false;
    }
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    return 0;
}