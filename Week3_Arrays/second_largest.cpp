#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int high = INT_MIN, s_high = INT_MIN, found = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > high) {
            s_high = high;
            high = arr[i];
            found = 1;
        }
        else if((arr[i] > s_high) && (arr[i] != high)) {
            s_high = arr[i];
            found = 1;
        }
    }

    cout << endl;

    if(!found || n < 2) {
        cout << "Doesn't exist!!!" << endl;
    }

    else {
        cout << "Second highest: " << s_high << "." << endl;
    }
    return 0;
}
