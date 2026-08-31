// Calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main(){
    int length=4, breadth=5;
    int area = length * breadth;
    int perimeter = 2*(length + breadth);
    printf("area: %d, perimeter: %d", area, perimeter);
}