#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Number of elements: ";
    cin >> n;
    vector<int> a(n);
    int c=0;
    for (int i=0; i<n; i++) {
        cout << "Element " << i << ": ";
        cin>>a[i];
    }
    for (int i=0; i<n-1; i++) {
        if (a[c]<a[i+1]) {
            c=i+1;
        }
    }
    cout << c;
    return 0;
}