#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    // const double PI =  3.14159265358;
    // double radius, area;
    // int day = 0x15;
    // printf("Enter the radius: ");
    // scanf("%lf", &radius);
    // area = PI * radius * radius;
    // printf("The area is : %.21lf \n21", area);
    // printf("day=%d\n", day);
    // int a, b, c, even;
    // double d;
    // a = 1;
    // b = 2;
    // d = (5 + a ) / (double)b;

    // printf("The value is : %lf \n" , d);
    // printf("the remainder on dividing 10 by 3 is: %d\n", 10 % 3);

    // a = 38;
    // even = (a % 2) == 0;
    // printf("%d is even = %d\n", a , even);
    int a, b, c;
    double d;
    d = 47.9;
    printf("d=%.0lf\n", d);

    c = d + 0.6; //* rounds up if value in d is greater or equal 0.5
    d = 2 / (double)3;
    printf("d=%.5lf\n", d);
    printf("My round of d=%d\n", c);

    b = 5;
    b = b * 2; // * long way
    // printf("b=%.1d\n",b);
    b *= 2; //* shortcut
    printf("b=%d\n", b);
    b += 1;
    printf("b=%d\n", b);
    b++;
    printf("b=%d\n", b);
    c = 5;
    a = b++ + c; //* post increment b is inceremnted after use
    printf("a=%d, b=%d\n", a, b);

    b = 20;
    a = ++b + c; //* post increment b is inceremnted before use
    printf("a=%d, b=%d\n", a, b);
    const char name[50] = "Elmar";
    char inputName[50];
    printf("What is name : ");
    scanf(" %s", inputName);
    printf("Your name is %s\n", inputName);

    if (strcmp(inputName, name) == 0)
    {
        printf("Welcome back\n");
    } 
    else
    {
        printf("Try again\n");
    }
    
    
    return 0;
}