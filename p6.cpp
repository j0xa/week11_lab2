#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    bool sorted=true;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        if (a[i]<=a[i+1]) {
            sorted=true;
        }
        else {
            sorted=false;
        }
    }
    if (sorted) {
        cout << "SORTED";
    }
    else {
        cout << "UNSORTED";
    }
    return 0;
}