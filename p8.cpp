#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element #" << i << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = i+1; j < a.size(); j++) {
            if (a[i] == a[j]) {
                a.erase(a.begin() + j);
                j--;
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}