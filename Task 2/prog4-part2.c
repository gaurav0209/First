#include <stdio.h>
int calculateDigits(int num)
{
	int sum=0;
	while(num!=0)
	{
		sum+=(num%10);
		num/=10;
	}
	if(sum>=10)
		calculateDigits(sum);
	else
		return sum;
}
int main()
{
	int n,sum;

	printf("Enter any positive integer number: ");
	scanf("%d",&n);

	sum=calculateDigits(n);
	printf("Sum of digits is: %d\n",sum);

	return 0;
}
