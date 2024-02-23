#include<stdio.h>
void fibo(int n,int a,int b)
{

	if(n==0)
	{
		return;
	}
	else
	{
		printf("%d ",a);
		int temp=a;
		a=b;
		b=b+temp;
	    fibo(n-1,a,b);	
	}
}

int main()
{
	fibo(50,1,1);
}
