#include<stdio.h>
int main(){
	int a,b;
	
	 printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    char sym[10];
    printf("enter sym:");
    scanf("%c",&sym);
	switch(sym){
		case "a":
		printf("add:%d\n",a+b);
		break;
		case "s":
			printf("sub:%d\n",a-b);
			break;
			case "m":
				printf("mul:%d\n",a*b);
				break;
				case "d":
					printf("div:%d\n",a/b);
					break;
					case"r":
						printf("mod:%d\n",a%b);
						break;
						default:
							printf("invalid");
							break;
	}
	
	return 0;
}
