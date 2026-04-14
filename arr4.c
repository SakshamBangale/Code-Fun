// Calculate Sum from File

#include <stdio.h>

int main() {
    int num, sum = 0;
    FILE *fp;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
    }

    fclose(fp);

    printf("Sum of elements = %d", sum);

    return 0;
}
