//������֤ 
#include<stdio.h>
#include<stdbool.h>

long get_long(void);														//��֤������һ������
bool bad_limits(long begin, long end, long low, long high);					//��֤��Χ���������Ƿ���Ч 
double sum_squares(long a, long b);											//����a~b֮�������ƽ����
 
int main(void){
	const long MIN = -10000000L;											//���ĵ�����
	const long MAX = 10000000L;												//��Χ������
	long start;																//�û�ָ���ķ�Χ��Сֵ
	long stop;																//�û�ָ���ķ�Χ���ֵ
	double answer;
	
	printf("This programer computes the sum of the squares of integetrs in a range.\n"
			"The lower bound should not be less than -10000000 and \n"
			"the upper bound should not be more than 10000000.\n"
			"Enter the limits (enter 0 for both limits to quit) : "
			"lower limit : ");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	
	while (start != 0 || stop != 0){
		if (bad_limits(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else {
			answer = sum_squares(start, stop);
			printf("The sum of the squares of the integers ");
			printf("from %ld to %ld is %g\n",start, stop, answer);
		}
		printf("Enter the limit (enter 0 for both limits to quit) : \n");
		printf("lower limits: ");
		start = get_long();
		printf("upper limit: ");
		stop = get_long();
	}
	printf("Done.\n");
	
	return 0;
}
/*------------------The get long function --------------------*/
long get_long(void){
	long input;
	char ch;
	
	while (scanf("%ld", &input) != 1){
		while ((ch = getchar()) != '\n')
			putchar(ch);													//������������ 
		printf(" is not an integer.\nPlease enter an");
		printf("integer value, such as 25, -178, or 3: ");
	}
	
	return input;
}
/*------------------The get sum function----------------------*/
double sum_squares(long a, long b){
	double total = 0;
	long i;
	
	for (i = a; i <= b; i++)
		total += (double)i * (double)i;
		
	return total;
}
/*------------------The get limits function-------------------*/
bool bad_limits(long begin, long end, long low, long high){
	bool not_good = false;
	
	if (begin > end){
		printf("%ld isn't smaller than %ld.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low){
		printf("Values must be %ld or greater.\n", low);
		not_good = true;
	} 
	if (begin > high || end > high){
		printf("Values must be %ld or less.\n", high);
		not_good = true; 
	}
	
	return not_good;
}