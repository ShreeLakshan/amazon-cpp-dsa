#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    int x, Count = 0;
    cout << "Enter a number to count: ";
    cin >> x;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            Count += 1;
        }
    }

    cout << x << " occurs " << Count << " times.";
    return 0;
}
