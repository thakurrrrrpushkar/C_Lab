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
