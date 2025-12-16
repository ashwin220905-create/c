#include<stdio.h>
int main(){
	char food[20] ;
	int opt,qty,price;	
	
	
		while(1){
			printf("****ticket booking****\n");
			printf("1.chennai ? banglore(? 500 per seat)\n");
			printf("2.chennai ? coaimbatore(? 400 per seat)\n");
			printf("3.chennai ? madurai(? 150 per seat)\n");
			printf("4.genrate bill and exit\n");
			printf("enter your choice:");
			scanf("%d",&opt);
			
			switch(opt){
				case 1:
					printf("enter no of seats:");
					scanf("%d",&qty);
					price = qty*500;
					printf("tickets booked successfully\n");
						break;
				
				case 2:
					printf("enter enter no of seats:");
					scanf("%d",&qty);
					price = qty*400;
					printf("tickets booked successfully\n");
				break;
				
				case 3:
					printf("enter no of seats:");
					scanf("%d",&qty);
					price = qty*150;
					printf("tickets booked successfully\n");
					break;
					

				case 4:
	            printf("%d",price);
	            return 0;
				
				default :
				printf("invalid!!");	
				break;  		
		
					}
			}
	
return 0;
	}
