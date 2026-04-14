// Append Data

#include <stdio.h>

int main() {
    int arr[3] = {60, 70, 80};
    FILE *fp;
    int i;

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);
    printf("Data appended successfully");

    return 0;
}
