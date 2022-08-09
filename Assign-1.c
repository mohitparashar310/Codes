#include <stdio.h>
float area(int);
int main() {
    int r;
    float A;
    printf("Enter radius of circle :");
    scanf("%d",&r);
    A=area(r);
    printf("Area of circle is %f",A);
    return 0;
}
float area(int r){
    float a;
    a=2*3.14*r;
    return a;
    
}