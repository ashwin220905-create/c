#include<stdio.h>
int main(){
	int a=2;
	int r=((++a)+5+(a++)+7+a);
	printf("result:%d\n",r);
	int r1=((--a));
	printf("result:%d",r1);
	return 0;
}
