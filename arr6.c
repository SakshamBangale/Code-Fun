
// Search Element

#include <stdio.h>

int main() {
    int num, key = 30, found = 0;
    FILE *fp;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        if (num == key) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
