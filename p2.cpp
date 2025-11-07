#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "enter element number " << i << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i]=a[i]/2;
        }
        else {
            a[i]=a[i]*2;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}