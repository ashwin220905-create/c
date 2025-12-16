#include<stdio.h>
int main(){
	int n,count=0;
	printf("enter no:");
	scanf("%d",&n);
    int temp=n;
while(temp!=0){
     temp/=10;
     count++;
}		
printf("%d",count);
}
