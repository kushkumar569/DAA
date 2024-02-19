#include<Stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20000];
    int i,j=0,k,l;
    int min,m;
    
    FILE * fptr;
    fptr = fopen("file20000.txt", "r");
    int a=0;
    while (a<20000 && fscanf(fptr, "%d", &arr[a]) == 1) {
        a++;
    }
    
 for(l=0;l<20000;l++)
 {   
    min=arr[l];
   for(i=l;i<20000;i++)
   {
    if(arr[i]<min)
    {
       min=arr[i];
       m=i;
    }
    if(min==arr[l])
    {
       m=l;
    }
   }
    arr[m]=arr[l];
    arr[l]=min;

 }
    for(k=0;k<20000;k++)
    {
        printf("%d\t",arr[k]);
    }
}
