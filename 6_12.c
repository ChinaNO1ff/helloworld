#include<stdio.h>
#define MAX_LENGTH 81

int main(void){
	int i;
	char array[MAX_LENGTH];
	printf("�������룺\n");
	gets(array);
	printf("\n����Ϊ��");
	puts(array);
	i = 0;
	while (array[i] != '\0'){
		if (array[i] >= 'A' && array[i] <= 'Z')
			array[i] = (27 + 64 + 64) - array[i];
		else if (array[i] >= 'a' && array[i] <= 'z') 
			array[i] = (27 + 96 + 96) - array[i];
		i++;
	}
	printf("ԭ��Ϊ��");
	puts(array);
	
	return 0;
}
