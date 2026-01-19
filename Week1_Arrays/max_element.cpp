#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i = 0, Max, n, input;

    vector<int> arr;

    while(true) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> input;

        arr.push_back(input);

        if(i == 0) {
            Max = arr[0];
        }

        cout << "Do you want to continue(0/1): ";
        cin >> n;

        if(input > Max) {
            Max = input;
        }

        if(n == 0) {
            break;
        }

        i++;

    }

    cout << endl;

    cout << "Maximum Element: " << Max;


    return 0;
}
