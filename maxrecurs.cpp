#include <iostream>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int max = findMax(arr, n-1);
        if (arr[n-1] > max) {
            return arr[n-1];
        } else {
            return max;
        }
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);

    std::cout << "The largest element is: " << max << std::endl;

    return 0;
}

