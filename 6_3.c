#include<stdio.h>

int main(void){
	int array[3][3];
	int i, j, sum = 0;
	
	printf("�������ݣ�\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &array[i][j]);
	for (i = 0; i < 3; i++)
		sum += array[i][i];
	printf("�Խ���֮��Ϊ��%d\n", sum);
	
	return 0;
}
