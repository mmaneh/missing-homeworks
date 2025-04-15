#include <stdio.h>
int main() {
	int num = 0;
	int flag = 0;
	printf("enter num: ");
	scanf("%d", &num);
	while(num){
		
		if(num % 10 == 4 || num % 10 == 7){
		flag = 1;
		}
		num /= 10;		
	}
	if(flag){
		printf("The number is lucky");
	}else{
		printf("The number is not lucky");	
	}

}
