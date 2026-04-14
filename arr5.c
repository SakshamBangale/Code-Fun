// Count Elements

#include <stdio.h>

int main() {
    int num, count = 0;
    FILE *fp;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Total elements = %d", count);

    return 0;
}
