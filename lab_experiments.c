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
//E20
