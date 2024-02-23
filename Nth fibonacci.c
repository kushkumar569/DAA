#include<stdio.h>
int fibo(int n)
{
	if(n<=2)
	{
		return 1;
	}
	return fibo(n-1)+fibo(n-2);
}

int main()
{
	int a=fibo(5);
   printf("%d",a);
   return 0;
}
