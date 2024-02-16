#include<stdio.h>
int main(){
int s=0;
int n,num;
printf("enter a number:");
scanf("%d",&n);
num=n;
while (n>0){
    int d=n%10;
    int f=1;
    while (d>0){
        f=f*d;
        d--;
    }
    s=s+f;
    n=n/10;
}
printf("%d",s);
if (s==num){
    printf("strong number");}
else if(s!=num){
    printf("not a strong number");
}
return 0;
}
