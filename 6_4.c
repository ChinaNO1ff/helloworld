#include<stdio.h>

int main(void){
	int array[6] = {1, 3, 5, 7, 9};		//����Ϊ 6 ������� 5 ����
	int temp1, temp2;
	int number, i, j;
	
	printf("ԭ������ : \n");
	for (i = 0; i < 5; i++)
		printf("%d	", array[i]);
	printf("\n");
	printf("��������Ҫ��������ݣ�");
	scanf("%d", &number);
	if (number > array[4])
		array[5] = number;
	else
		for (i = 0; i < 4; i++)
			if (array[i] > number){		//��������е���������Ҫ�����������������������ƶ� 
				temp1 = array[i];		//�������ȡ��ԭ������λ�� 
				array[i] = number;
				for (j = i + 1; j < 6; j++){	//�������������ƶ� 
					temp2 = array[j];
					array[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
	printf("�����飺\n");
	for (i = 0; i < 6; i++)
		printf("%d	", array[i]);
	printf("\n");
	
	return 0;
} 
