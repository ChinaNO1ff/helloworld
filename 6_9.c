#include<stdio.h>
#define LENGTH 15							//���鳤��Ϊ15 

int main(void){
	int i, search, start, end, mid,array[LENGTH], find, loop = 1;
	char c;
	
	printf("����Ӵ�С����� 15 ������\n");
	scanf("%d", &array[0]);					//��ȡ��һ����
	for (i = 1; i < LENGTH; i++){
		scanf("%d", &array[i]);
		if (array[i] < array[i - 1]){		//����������� 
			printf("����������������룺");
			scanf("%d", &array[i]);	 
		}
	}
	
	printf("���������Ϊ��");
	for (i = 0; i < LENGTH; i++)			//��ӡ���� 
		printf(" %d", array[i]);
	printf("\n");
	
	while (loop){
		printf("��������Ҫ���ҵ�����");
		scanf("%d", &search);
		find = 0;							//0 ����δ�ҵ�
		start = 0; end = LENGTH - 1;		//��ʼλ�ú���ֹλ�� 
		if (search < array[start] || search > array[end])
			find = 0;						//���������Ҳ���
		while ((!find) && (start <= end)){	//���ַ����� 
			mid = (start + end) / 2;
			if (search == array[mid]){
				printf("�ҵ��� %d �����ڵ� %d ������\n", search, mid + 1);	
				find = 1;
			}
			else if (search < array[mid])
				end = mid - 1;
			else start = mid + 1;
		}
		if (!find)
			printf("�Ҳ����������\n");
		printf("�Ƿ��������������(Y/N)��");
		while(getchar() != '\n');			//����س� 
		scanf("%c", &c);
		if (c == 'n' || c == 'N')
			loop = 0;
	}
	printf("Bye!\n");
	
	return 0;
}
