#include<stdio.h>
int main(){
	int n,r,sum=0;
	printf("enter no:");
	scanf("%d",&n);
while(n!=0){
	r=n%10;
     sum+=r;
     n/=10;
}		
printf("%d",sum);
}
