//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>

int main() {
    float celcius = 21.0;
    float fahrenheit = (celcius * 1.8) + 32;
    printf("fahrenheit = %.2f", fahrenheit);
    return 0;
}