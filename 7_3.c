#include<stdio.h>

int isPrime(int);

int main(void){
	int n;
	
	printf("����һ��������");
	scanf("%d", &n);
	if (isPrime(n))
		printf("������");
	else printf("��������");
	
	return 0;
} 

int isPrime(int n){
	int isPrime = 1, i;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0){
			isPrime = 0;
			break;
		}
	return isPrime;
}
