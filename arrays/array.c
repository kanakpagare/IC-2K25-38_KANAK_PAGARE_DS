include <stdio.h>

int main() {
    int arr[5] = {12, 45, 67, 23, 9};
    
    int max = arr[0]; 

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("the largest number : %d\n", max);
    return 0;
}
