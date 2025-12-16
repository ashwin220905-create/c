#include<stdio.h>
int main(){
	char food[20] ;
	int opt,qty,price;	
	
	
		while(1){
			printf("****online food ordering****\n");
			printf("1.pizza - ?150\n");
			printf("2.burger - ?80\n");
			printf("3.fried rice - ?120\n");
			printf("4.chicken roll - ?100\n");
			printf("5.genrate bill and exit\n");
			printf("enter your choice:");
			scanf("%d",&opt);
			
			switch(opt){
				case 1:
					printf("enter qty:");
					scanf("%d",&qty);
					price += qty*150;
					printf("item added\n");
						break;
				
				case 2:
					printf("enter qty:");
					scanf("%d",&qty);
					price += qty*80;
					printf("item added\n");
				break;
				
				case 3:
					printf("enter qty:");
					scanf("%d",&qty);
					price += qty*120;
					printf("item added\n");
					break;
					
				case 4:
					printf("enter qty:");
					scanf("%d",&qty);
					price += qty*100;
					printf("item added\n");
					break;	
					
				case 5:
	            printf("%d",price);
	            return 0;
				
				default :
				printf("invalid!!");	
				break;  		
		
					}
			}
	
return 0;
	}
	
