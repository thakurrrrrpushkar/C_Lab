//E1
#include <stdio.h>
int main()
{
  printf("Hello World!");
  return 0;
}
//E2
#include <stdio.h>
int main()
{
  int a, b, sum, multiplication, division, subtraction;
  printf("Enter 1st integer: ");
  scanf("%d", &a);
  printf("Enter 2nd integer: ");
  scanf("%d", &b);
  sum = a + b;
  multiplication = a * b;
  division = a / b;
  subtraction = a - b;
  printf("Sum: %d\n", sum);
  printf("Multiplication: %d\n", multiplication);
  printf("Division: %d\n", division);
  printf("Subtraction: %d\n", subtraction);
  return 0;
}
//E3
#include <stdio.h>
#define PI 3.14159
int main()
{
  float radius, area, perimeter;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area = PI * radius * radius;
  perimeter = 2 * PI * radius;
  printf("Area of the circle: %.2f sq cm.\n", area);
  printf("Perimeter of the circle: %.2f cm.\n", perimeter);
  return 0;
}
//E4A
#include <stdio.h>
int main()
{
  int a, b, temp; //3rd variable here
  printf("Enter 1st integer: ");
  scanf("%d", &a);
  printf("Enter 2nd integer: ");
  scanf("%d", &b);
  temp = a;
  a = b;
  b = temp;
  printf("After swapping, first number: %d", a);
  printf("After swapping, second number: %d", b);
  return 0;
}
//E4B
#include <stdio.h>
int main()
{
  int a, b; //no 3rd variable here
  printf("Enter 1st integer: ");
  scanf("%d", &a);
  printf("Enter 2nd integer: ");
  scanf("%d", &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swapping, first number: %d", a);
  printf("After swapping, second number: %d", b);
  return 0;
}
//E5
#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  printf("You entered: %d\n", num);
  return 0;
}
//E6
#include <stdio.h>
int main()
{
  char str[50];
  printf("Enter a string: ");
  fgets(str, sizeof(50), stdin);
  printf("You entered: ");
  puts(str);
  char name;
  printf("Enter a character: ");
  name = getchart();
  printf("You entered: %c\n", name);
  return 0;
}
//E7
#include <stdio.h>
int main()
{
  float m1, m2, m3, m4, m5, total, percentage;
  printf("Enter marks for five subjects: ");
  scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
  total = m1 + m2 + m3+ m4 + m5;
  percentage = total/5;
  printf("Total marks: %d\n", total);
  printf("Percentage: %.2f%\n", percentage);
  return 0;
}
//E8
#include <stdio.h>
int main()
{
  float salary, shopping, final_salary, final_bill;
  printf("Enter current salary: ");
  scanf("%f", &salary);
  printf("Enter shopping bill amount: ");
  scanf("%f", &shopping);
  final_salary = salary + (salary * 0.20);
  final_bill = shopping - (shopping * 0.17);
  printf("Salary after 20%% bonus: %.2f\n", final_salary);
  printf("Bill after 17%% discount: %.2f\n", final_bill);
  return 0;
}
//E9
#include <stdio.h>
int main()
{
  int num = 7;
  float f_num = 5.5;
  float implicit_res;
  int explicit_res;
  implicit_res = num + f_num;
  explicit_res = (int)f_num;
  printf("Implicit conversion result (float + int) = %.2f\n", implicit_res)
  printf("Explicit conversion result (float cast to int) = %d\n", explicit_res);
  return 0;
}
//E10
#include <stdio.h>
int main()
{
  int n1, n2, n3;
  float avg;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  avg = (float)(n1 + n2 + n3)/3.0;
  printf("Average: %.2f\n", avg);
  return 0;
}
//E11
#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ")
  scanf("%d", &num);
  if (num > 0)
  {
    printf("%d is positive. \n", num);
  }
  else if (num < 0)
  {
    printf("%d is negative. \n", num);
  }
  else
  {
    printf("The number is zero.\n");
  }
  return 0;
}
//E12
#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  if (num % 2 == 0)
  {
    printf("%d is even.\n", num);
  }
  else
  {
    printf("%d is odd.\n", num);
  }
  return 0;
}
//E13
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a >= b && a >= c)
  {
    printf("%d is the largest number.\n", a);
  }
  else if (b >= a && b >= c)
  {
    printf("%d is the largest number.\n", b);
  }
  else
  {
    printf("%d is the largest number.\n", c);
  }
  return 0;
}
//E14
#include <stdio.h>
int main()
{
  int marks;
  printf("Enter your marks (out of 100): ");
  scanf("%d", &marks);
  if (marks >= 90)
  {
    printf("Grade A");
  }
  else if (marks >= 80)
  {
    printf("Grade B");
  }
  else if (marks >= 70)
  {
    printf("Grade C");
  }
  else if (marks >- 60)
  {
    printf("Grade D");
  }
  else
  {
    printf("Grade F (Fail)");
  }
  return 0;
}
//E15
#include <stdio.h>
int main() {
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Error! Invalid operator.\n");
    }
    return 0;
}
//E16
#include <stdio.h>
int main() 
{
    printf("Numbers from 1 to 10:\n");
    for (int i = 1; i <= 10; i++)
      {
        printf("%d ", i);
      }
    printf("\n");
    return 0;
}
//E17
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
//E18
#include <stdio.h>
int main() 
{
    int n, sum = 0;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        sum += i; 
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
//E19
#include <stdio.h>
int main() 
{
    int n;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
    else 
    {
        for (int i = 1; i <= n; i++) 
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
//E20
#include <stdio.h>
int main() 
{
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
    return 0;
    }
//E21
#include <stdio.h>
int main()
{
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
    return 0;
  }
  //E22
  #include <stdio.h>
  int main()
{
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
//E23
#include <stdio.h>
// Function declarations
int addTwo(int a, int b);
int multiplyThree(int a, int b, int c);
int main() 
{
    int x = 5, y = 10;
    int n1 = 2, n2 = 3, n3 = 4;
    printf("Sum of %d and %d = %d\n", x, y, addTwo(x, y));
    printf("Product of %d, %d, and %d = %d\n", n1, n2, n3, multiplyThree(n1, n2, n3));
    return 0;
}
// Function definitions
int addTwo(int a, int b) 
{
    return a + b;
}
int multiplyThree(int a, int b, int c) 
{
    return a * b * c;
}
//E24
#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    printf("Before Swap (By Value): x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After Swap (By Value): x = %d, y = %d (Values unchanged)\n\n", x, y);
    printf("Before Swap (By Reference): x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After Swap (By Reference): x = %d, y = %d (Values swapped)\n", x, y);
    return 0;
}
//E25
#include <stdio.h>
int sumNatural(int n) 
{
    if (n != 0)
        return n + sumNatural(n - 1); 
    else
        return 0; 
}
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));
    return 0;
}
//E26
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[50] = "Hello";
    char str2[] = " World";
    char str3[50];
    printf("Length of str1: %lu\n", strlen(str1));
    strcpy(str3, str1);
    printf("After copying, str3: %s\n", str3);
    strcat(str1, str2);
    printf("After concatenation, str1: %s\n", str1);
    int result = strcmp("Apple", "Banana");
    if (result == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal. (Comparison result: %d)\n", result);
    return 0;
}
//E27
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
    return 0;
}
//E28
#include <stdio.h>
int main() 
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2], mult[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Sum of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \t", mult[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//E29
#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;
    printf("Addresses:\n");
    printf("ptr1 points to address: %p\n", (void*)ptr1);
    printf("ptr2 points to address: %p\n\n", (void*)ptr2);
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(ptr1, ptr2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
//E30
#include <stdio.h>
struct Student 
{
    char name[50];
    int rollNo;
    float marks;
};
int main() 
{
    struct Student s1;
    printf("Enter student name: ");
    scanf(" %[^\n]%*c", s1.name); 
    printf("Enter roll number: ");
    scanf("%d", &s1.rollNo);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNo);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
