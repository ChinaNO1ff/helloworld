#include<stdio.h>
#define LENGTH 100

int main(void){
	char s1[LENGTH], s2[LENGTH];
	int i;
	
	printf("����ڶ����ַ�����\n");
	scanf("%s", s2);
	for (i = 0; i < LENGTH; i++)
		s1[i] = s2[i];
	printf("��һ���ַ���Ϊ��\n%s", s1);
	
	return 0;
}
