#include<stdio.h>
int main(){
	int n,rn;
	printf("enter no:");
	scanf("%d",&n);
while(n>0){
	rn=rn*10+n%10;
        n=n/10;
}		
printf("%d",rn);
}

