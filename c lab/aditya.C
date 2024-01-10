#include <stdio.h>

int main() {
    float E,m,g,h,v;
    printf("enter the value of m,g,h,v");
    scanf("%f,%f,%f,%f;&m,&g,&h,&v");
    E=m*g*h+(1/2)*m*v*v;
    printf("the mechanical energy=%f",E);

    return 0;
}