#include <stdio.h>
int main()
{
	// Write a C program to print "Hello World".
	printf("Hello World!\n\n");

	// Write a C program to input two numbers and find their sum, difference, product, and quotient.
	int a, b, sum, dif, prod;
	float quo;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	sum = a + b;
	dif = a - b;
	prod = a * b;
	quo = a / b; 
	printf("Sum          : %d", sum);
	printf("\nDifference : %d", dif);
	printf("\nProduct    : %d", prod);
	printf("\nQuotient   : %f", quo);

	// Write a C program to calculate the area and circumference of a circle.
	const float Pi = 3.14159;
	int radius;
	float circ, ar;
	printf("\n\nEnter the radius of the circle: ");
	scanf("%d", &radius);
	ar = Pi * radius * radius;
	circ = 2 * Pi * radius;
	printf("Circumference of the circle   :  %f", circ);
	printf("\nArea of the circle          :  %f", ar);

	// Write a C program to swap two numbers.
	int A, B, C;
	printf("\n\nEnter two numbers: ");
	scanf("%d %d", &A, &B);
	C = A;
	A = B;
	B = C;
	printf("The interchanged numbers are: %d %d", A, B);

	// Write a C program to demonstrate printf() and scanf().
	char txt[100];
	printf("\n\nEnter some text: ");
	scanf("%s", txt); 
	printf("Your text: %s", txt);
	printf("\nprintf and scanf demonstrated successfully.");

	// Write a C program to demonstrate getchar(), putchar(), puts(), and fgets().
	char ch;
	printf("\n\nType a character: ");
	getchar(); 
	ch = getchar(); 
	printf("You typed: ");
	putchar(ch);    
	putchar('\n');  
	printf("getchar and putchar demonstrated successfully.\n");

	char str[50];
	printf("\nEnter your full name: ");
	getchar(); 
	fgets(str, sizeof(str), stdin); 
	printf("Hello, %s", str);
	char name[] = "Pushkar Thakur";
	puts("Welcome to C programming!"); 
	puts(name);
	printf("fgets and puts demonstrated successfully.\n");

	// Write a C program to read a student's name, roll number, and marks and display them.
	char studentName[50];
	int rollNumber;
	float marks;

	printf("\nEnter Student Name: ");
	fgets(studentName, sizeof(studentName), stdin);
	printf("Enter Roll Number: ");
	scanf("%d", &rollNumber);
	printf("Enter Marks: ");
	scanf("%f", &marks);

	printf("\n--- Student Information ---");
	printf("\nName     : %s", studentName);
	printf("Roll Number: %d\n", rollNumber);
	printf("Marks      : %.2f\n", marks);

	return 0;
}
