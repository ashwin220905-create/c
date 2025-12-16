#include<stdio.h>
int main(){
	int a,b;
	   char sym;
    printf("enter sym:");
    scanf("%c",&sym);
	 printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
 
	switch(sym){
		case 'a':
		printf("add:%d\n",a+b);
		break;
		case 'b':
			printf("sub:%d\n",a-b);
			break;
			case 'c':
				printf("mul:%d\n",a*b);
				break;
				case 'd':
					printf("div:%d\n",a/b);
					break;
				case 'e':
						printf("mod:%d\n",a%b);
						break;
			default:
		printf("invalid");
	break;
	}
	
	return 0;
}
