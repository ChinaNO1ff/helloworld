#include<stdio.h>
#include<math.h>

void greater(float, float);	//disc������ʱִ�еĺ��� 
void equal(float, float);	//disc������ʱִ�еĺ���
void small(float, float);	//discС����ʱִ�еĺ���
double a, b, c, disc, x1, x2, p, q;	//����ȫ�ֱ�����ͨ�������޸�ֵ 

int main(void){
	
	printf("����a��b��c��");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	printf("��Ϊ��");
	if (disc > 0){
		greater(a, b);
		printf("x1 = %lf, x2 = %lf\n", x1, x2);
	}
	else if (disc == 0){
		equal(a, b);
		printf("x1 = %lf, x2 = %lf", x1, x2);
	}
	else {
		small(a, b);
		printf("x1 = %lf + %lfi, x2 = %lf + %lfi\n", p, q, p, q);
	}
	
	return 0;	
}

void greater(float a, float b){
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
}

void equal(float a, float b){
	x1 = x2 = (-b)  / (2 * a);
}

void small(float a, float b){
	p = -b / (2 * a);
	q = sqrt(-disc) / (2 * a);
}
