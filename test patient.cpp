#include<stdio.h>
#include<string.h>

struct patient{
	int age;
	char name[30];
	char problem[50];
};

int main(){
	struct patient p1;
	int opt,c=0;
	char n[30];
	
	
		while(1){
			printf("****hospital patient record system****\n");
			printf("1.add patient\n");
			printf("2.search by name\n");
			printf("3.display all patients\n");
			printf("4.exit\n");
			printf("enter your choice:");
			scanf("%d",&opt);
			
			switch(opt){
				case 1:
					printf("enter name:");
					scanf("%s",&p1[c].name);
					printf("enter age:");
					scanf("%d",&p1[c].age);
					printf("enter problem:");
					scanf("%s",&p1[c].problem);
						break;
				
				case 2:
				printf("enter name:");
				scanf("%s",&n);
				int i;
				for(i=0;i<c;i++){
				if(strcmp(p1.name,n)==0){
					printf("%s\n",p1[i].name);
					printf("%d\n",p1[i].age);
					printf("%s\n",p1[i].problem);
				}}
				break;
				
				
				case 3:
					printf("patient : %d\n",i+1);
					printf("%s\n",p1[i].name);
					printf("%d\n",p1[i].age);
					printf("%s\n",p1[i].problem);
					break;
					
				case 4:
				      return 0;
				
				default :
				printf("invalid!!");	  		
		
					}
			}
	
		return 0;
	}
