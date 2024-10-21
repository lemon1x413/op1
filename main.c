#include <stdio.h>
#include <conio.h>

int roman (unsigned,int,char);
int main()
{
    unsigned a = 0;
    printf("Enter number from 1 to 4999 and press ENTER:");
    scanf("%u", &a);
    if(a > 4999 || a == 0)
    {
        printf("Invalid input! Please enter a number from 1 to 4999");
        getch();
        return 0;
    }
    a = roman(a, 1000, 'M');
    a = roman(a, 500, 'D');
    a = roman(a, 100, 'C');
    a = roman(a, 50, 'L');
    a = roman(a, 10, 'X');
    a = roman(a, 5, 'V');
    a = roman(a, 1, 'I');
    printf("\nPress ENTER to exit\n");
    getch();
    return 0;
}
int roman(unsigned i,int j,char c)
{
    while(i>=j)
        {
        putchar(c);
        i=i-j;
        }
    return (i);
}