//Write a program to calculate the area and circumference of a circle given its radius
#include<stdio.h>
int main() {
    int radius=5;
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    printf("area: %.2f, circumference: %.2f", area, circumference);
}
