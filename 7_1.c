#include<stdio.h>

int max(int a, int b);	//���Լ������ 
int min (int a, int b, int max){return a * b / max;}	//��С���������� 

int main(void){
	int a, b, maxNumber, minNumber;
	
	printf("��������������");
	scanf("%d %d", &a, &b);
	maxNumber = max(a, b);
	minNumber = min(a, b, maxNumber);
	printf("���Լ����%d\n", maxNumber);
	printf("��С��������%d\n", minNumber);
	
	return 0;
}

int max(int a, int b){	//շת����� 
	int c = a % b;
	while (c != 0){
		a = b;
		b = c;
		c = a % b;
	}
	
	return b;	
}
