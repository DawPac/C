#include <stdio.h>

int main()
{
int a;
int b;
int c;
int d;
double srednia;
puts ("Podaj pierwszą liczbe");
scanf("%d",&a);
puts ("Podaj drugą liczbe");
scanf("%d",&b);
puts ("Podaj trzecią liczbe");
scanf("%d",&c);
puts ("Podaj czwartą liczbe");
scanf("%d",&d);
srednia = (a + b +c + d) /2.0;
puts("Srednia twoich liczb to:");
printf("\n \t %.2f \t \n \n ",srednia);

return 0;
}