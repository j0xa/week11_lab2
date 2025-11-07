#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while (num>=0) {
        a.push_back(num);
        cout<<"Enter next number: ";
        cin>>num;
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}