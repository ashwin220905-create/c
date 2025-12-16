#include<stdio.h>
int main(){
	int a=5,b=15,ptr;
	ptr=a;
	a=b;
	b=ptr;
	printf("a=%d\nb=%d",a,b);
	return 0;
}
