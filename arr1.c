// Store Array in File
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    FILE *fp;
    int i;

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);
    printf("Array written to file successfully");

    return 0;
}
