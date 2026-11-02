#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 4};

    int n = arr.size();

    vector<int> freq(n + 1, 0);

    // Count frequency of every element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int repeating = -1;
    int missing = -1;

    // Find repeating and missing number
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) {
            repeating = i;
        }

        if (freq[i] == 0) {
            missing = i;
        }
    }

    cout << "Repeating number = " << repeating << endl;
    cout << "Missing number = " << missing << endl;

    return 0;
}
