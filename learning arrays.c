#include <stdio.h>
int main()
{
    int age[5];
    printf("Enter 5 input values: ");
    for(int i=0; i<5; i++)
        scanf("%d", &age[i]);
    printf("List elements: \n");
    for(int i=0; i<5; i++)
        printf("%d\n", age[i]);
    // task
    float marks[5];
    float avg, sum = 0.00;
    printf("Enter the marks of five subjects: ");
    for(int i=0; i<5; i++)
        scanf("%f", &marks[i]);
    for(int i = 0; i<5; i++) 
        sum += marks[i];
    avg = sum/5;
    printf("%f is the average of the student.", avg);
    //multidimensional arrays
    int arr[2][3] = {{1,3,5},{2,4,6}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\n", arr[i][j]);
        }
    }
return 0;
}
