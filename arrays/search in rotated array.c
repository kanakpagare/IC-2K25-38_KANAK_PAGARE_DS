#include <iostream>
using namespace std;

int search(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Target is found
        if (arr[mid] == target) {
            return mid;
        }

        // Left part is sorted
        if (arr[start] <= arr[mid]) {

            // Target is in left part
            if (arr[start] <= target && target < arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        // Right part is sorted
        else {

            // Target is in right part
            if (arr[mid] < target && target <= arr[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int target = 0;

    int ans = search(arr, n, target);

    cout << "target found at index : " << ans << endl;

    return 0;
}
