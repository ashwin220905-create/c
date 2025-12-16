#include<stdio.h>
int main(){
int i,mul,n;
printf("enter no:");
scanf("%d",&n);
for(i=1;i<=10;i++){
	mul=i*n;
printf("%d*%d=%d\n",i,n,mul);
}
}
