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
//E4
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
//E5
