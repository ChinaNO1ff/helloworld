#include<stdio.h>
#define LENGTH 100

int main(void){
	int i = 0, n = 0;
	char a[LENGTH], b[LENGTH];
	
	printf("�����һ���ַ�����\n");
	gets(a);
	printf("����ڶ����ַ�����\n");
	gets(b);
	while (a[i] == b[i] && a[i] != '\0') i++; //��ȡ����ȵ��Ǹ��ַ� 
	if (a[i] == '\0' && b[i] == '\0')
		printf("���\n");
	else printf("��� %d\n", a[i] - b[i]);
	
	return 0;
} 
