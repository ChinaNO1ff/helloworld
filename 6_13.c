#include<stdio.h>
#define MAX_LENGTH 81

int main(void){
	char s1[MAX_LENGTH];
	char s2[MAX_LENGTH];
	int i = 0, j = 0;
	
	printf("�����һ���ַ�����");
	scanf("%s", s1); 
	printf("����ڶ����ַ�����");
	scanf("%s", s2);
	while (s1[i] != '\0') i++;		//�ҵ�ĩβ
	while (s2[j] != '\0') s1[i++] = s2[j++];	//s1 ĩβ���� s2
	s1[i] = '\0';			//����ĩβ
	puts(s1); 
	
	return 0; 
} 
