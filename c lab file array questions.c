#include <stdio.h>
int main() {
  //Q1
    int arr1d[5];
    printf("--- 1D Array ---:\n");
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr1d[i]);
    }
    printf("The elements of the 1D array are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1d[i]);
    }
    printf("\n\n");
    printf("--- 2D Array ---:\n");
    int arr2d[2][3]; 
    printf("Enter 6 integers for a 2D Array:\n");
    for(i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr2d[i][j]);
        }
    }
    printf("The elements of the 2D array are:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr2d[i][j]);
        }
        printf("\n"); 
    }
  //Q2
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    float sum = arr[0];
    for(i = 1; i < n; i++) {
        sum += arr[i];
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    float average = sum / n;
    printf("\n--- Results ---\n");
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    printf("Sum of elements: %.2f\n", sum);
    printf("Average of elements: %.2f\n", average);

  //Q3
    int n, i, j, temp, key, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nArray sorted in ascending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nEnter the element you want to search for: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d (Position %d).\n", key, i, i + 1);
            found = 1;
            break; 
        }
    }
    if(!found) {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
