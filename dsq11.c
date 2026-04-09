// Given an integer array of size n, find all elements that appear more than ⌊n/3⌋ times.


#include <stdio.h>

void findMajority(int arr[], int n) {
    int candidate1 = 0, candidate2 = 1; // different initial values
    int count1 = 0, count2 = 0;

    // Step 1: Find candidates
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) {
            count1++;
        }
        else if (arr[i] == candidate2) {
            count2++;
        }
        else if (count1 == 0) {
            candidate1 = arr[i];
            count1 = 1;
        }
        else if (count2 == 0) {
            candidate2 = arr[i];
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify candidates
    count1 = count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) count1++;
        else if (arr[i] == candidate2) count2++;
    }

    // Step 3: Print result
    int found = 0;
    if (count1 > n/3) {
        printf("%d ", candidate1);
        found = 1;
    }
    if (count2 > n/3) {
        printf("%d ", candidate2);
        found = 1;
    }

    if (!found) {
        printf("No such element");
    }
}

int main() {
    int arr[] = {1,1,1,3,3,2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMajority(arr, n);

    return 0;
}
