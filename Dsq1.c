// Write a menu driven program in C for implementing the below functionality of arrays 1. Create an array 2. Display the array in Forward Direction 3. Insert into an array 4. Delete from an array 5. Search in an array 6. Display the array in Backward Direction 7.Exit


#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice, i, pos, val, found;

    for(int a =0 ;a<7 ;a++) {   
        printf("\n--- MENU ---\n");
        printf("1. Create Array\n");
        printf("2. Display Forward\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Display Backward\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                
                printf("Enter elements:\n");
                
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                
                break;

            case 2:
                printf("Array: ");
                
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                
                printf("\n");
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);

                for(i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = val;
                n++;
                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                for(i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                n--;
                break;

            case 5:
                printf("Enter value to search: ");
                scanf("%d", &val);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == val) {
                        printf("Found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Not found\n");
                }
                break;

            case 6:
                printf("Array Backward Direction : ");
                for(i = n - 1; i >= 0; i--) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 7:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
