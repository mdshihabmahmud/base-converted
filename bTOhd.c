#include<stdio.h>
#include<conio.h>

void main()
{
    long int binary_number, hexadecimal_number = 0, i = 1, remainder;
    clrscr();
    printf("Please Enter any Binary Number: ");
    scanf("%ld", &binary_number);
    while (binary_number != 0)
    {
        remainder = binary_number % 10;
        hexadecimal_number = hexadecimal_number + remainder * i;
        i = i * 2;
        binary_number = binary_number / 10;
    }
    printf("Equivalent Hexadecimal Number %lX", hexadecimal_number);
   
getch();
}
