#include<stdio.h>
int main()
{
  int a[]={4,8,4,2,9,9,6,2,9};
  int b[9];
  int c[10];
  for(int i=0;i<10;i++)
    c[i]=0;
    
  for(int i=0;i<9;i++)
    c[a[i]]=c[a[i]]+1;

  for(int i=1;i<10;i++)
    c[i]=c[i]+c[i-1];

  for(int i=8;i>=0;i--){
    b[c[a[i]]-1]=a[i];
	c[a[i]]=c[a[i]]-1;
  }

  for(int i=0;i<9;i++)
    printf("%d ",b[i]);
  
}
