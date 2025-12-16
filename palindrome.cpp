#include<stdio.h>
int main(){
	char n,rn;
	printf("enter no:");
	scanf("%s",&n);
while(n>0){
	rn=rn*10+n%10;
        n=n/10;
}		
printf("%s",rn);
}
