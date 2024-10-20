#include <stdio.h>
int main()
{
    int fahrenheit;
    printf("fahrenheit to celcius");
    scanf("%d",&fahrenheit);
    float celcius=(fahrenheit -32 ) *5.0/9.0; 
    printf("value of celcius is %.2f",celcius);
    return 0;
}
