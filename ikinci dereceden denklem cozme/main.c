#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,delta,x1,x2;
    printf("a sayısını girin");
    scanf("%f",&a);
    printf("b sayısını girin");
    scanf("%f",&b);
    printf("c sayısını girin");
    scanf("%f",&c);


    delta= pow(b,2)-4*a*c;

    x1=(-b+ sqrt(delta))/2*a;
    x2=(-b- sqrt(delta))/2*a;

    if(delta > 0)
        printf("denklemin kökleri x1:%f , x2:%f",x1,x2 );

    if(delta == 0)
        printf("denklemin kökü x1=x2:%f",x1);

    if(delta < 0)
        printf("denklemin reel kökü yoktur.");





    return 0;
}
