
#include <stdio.h>

int main() {
    int arr[5], i;
    FILE *fp;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    fclose(fp);

    printf("Array read from file:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
