// Some basic C programs with printf and scanf functions that I did in my 1st Semester of C Programming Lab
#include<stdio.h>
#include<math.h>
#define pi 3.142857143

int main()
{
	//Program 1
	char x;
	printf("Enter the character in lowercase to get the output in uppercase.\n");
	printf("\nInput character: ");
	scanf("%c", &x);
	char result = (x-32);// Used ASCII 
	printf("Output: %c", result);

	//Program 2
	float r, perimeter, area;
	puts("\n\nPlease enter the radius of the circle. ");
	printf("\nRadius: ");
	scanf("%f", &r);
	perimeter = (2*pi*r);
	area = (pi*r*r);
	printf("Perimeter: %f units , Area: %f sq. units", perimeter, area);

	//int a; long b; short c; float d; double e; char f; unsigned long g;

	//Program 3
	int n; 
	double years, weeks, days;
	printf("\n\nInput no. of days: ");
	scanf("%d", &n);
	years = n/365;
	weeks = n % 365/7;
	days = n % 365 % 7;
	printf("\nNo. of years : %.0lf", years);
	printf("\nNo. of weeks: %.0lf", weeks);
	printf("\nNo. of days: %.0lf", days);

	//Program 4
	float w1, w2, n1, n2, total, avg;
	printf("\n\nWeight - Item x: ");
	scanf("%f", &w1);
	printf("No. of Item x: ");
	scanf("%f", &n1);
	printf("\nWeight - Item y: ");
	scanf("%f", &w2);
	printf("No. of Item y: ");
	scanf("%f", &n2);
	total = (n1*w1+n2*w2);
	avg = (total/2);
	printf("\nTotal Weight: %f Average Weight: %f", total, avg); 

	//Program 5
	double x1, x2, y1, y2, distance;
	puts("\n\nPlease enter the following coordinates to find the distance between two points");
	printf("\nInput x1: ");
	scanf("%lf", &x1);
	printf("Input y1: ");
	scanf("%lf", &y1);printf
	("Input x2: ");
	scanf("%lf", &x2);
	printf("Input y2: ");
	scanf("%lf", &y2);
	distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	printf("Distance between two points: %lf",distance);

	return 0;
}