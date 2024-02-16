#include<stdio.h>
int main(){
int x1,x2,a,b,c;
printf("enter a,b,c for ax^2+bx+c:");
scanf("%d%d%d",&a,&b,&c);
if(b*b-4*a*c>=0){
    x1=((-b)+sqrt(b*b-4*a*c))/2*a;
    x2=((-b)-sqrt(b*b-4*a*c))/2*a;
    printf("the two roots are:x1=%d,x2=%d",x1,x2);
}
else {printf("imaginary roots");};
return 0;
}
