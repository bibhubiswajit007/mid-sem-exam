#include<stdio.h>
int main(){
    float r,sarea,vol;
    printf("enter radius of sphere:");
    scanf("%f",&r);
    sarea=4*3.14*r*r;
    vol=(4*3.14*r*r*r)/3;
    printf("\nSurface area:%0.2f \nVolume:%0.2f",sarea,vol);
    return 0;
}
