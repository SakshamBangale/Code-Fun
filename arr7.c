// Copy Data to Another File

#include <stdio.h>

int main() {
    int num;
    FILE *fp1, *fp2;

    fp1 = fopen("data.txt", "r");
    fp2 = fopen("copy.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file");
        return 1;
    }

    while (fscanf(fp1, "%d", &num) != EOF) {
        fprintf(fp2, "%d ", num);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully");

    return 0;
}
