/*------ʹ���ⲿ����-------*/
#include<stdio.h>

void critic(void); 
int units = 0;				//�ⲿ���� 

int main(void){
	extern int units;		//��ѡ���ظ����� 
	
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("You must have looked it up!\n");
		
	return 0; 
} 

void critic(void){
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &units);
	
}
