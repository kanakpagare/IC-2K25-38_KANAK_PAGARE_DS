#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = 6;

    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }

        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Minimum element = " << minimum << endl;
    cout << "Maximum element = " << maximum << endl;

    return 0;
}
