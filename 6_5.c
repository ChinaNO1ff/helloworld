#include<stdio.h>

int main(void){
	int array[5];
	int i, temp;
	
	printf("���������������");
	for (i = 0; i < 5; i++)
		scanf("%d", &array[i]);
	printf("ԭ����Ϊ��\n");
	for (i = 0; i < 5; i++)
		printf("%d	", array[i]);
	printf("\n");
	for (i = 0; i < 5 / 2; i++){		//��Ϊ��β����������ֻ��ѭ�������鳤�ȵ�һ�� 
	 	temp = array[i];
	 	array[i] = array[5 - i - 1];
	 	array[5 - i - 1] = temp;
	 }
	printf("��������飺\n");
	for (i = 0; i < 5; i++)
	 	printf("%d	", array[i]);
	printf("\n");
	
	return 0;
} 
