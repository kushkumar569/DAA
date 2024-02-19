#include<Stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fptr;
    fptr = fopen("file100000.txt", "r");
    int arr[100000];
    int number;
    int j,i,temp,k;
    int a=0;
    while (a<100000 && fscanf(fptr, "%d", &arr[a]) == 1) {
        a++;
    }

  for(j=0;j<100000;j++)
  {     
     int issorted=1;
     for (i = 0; i < 100000-j; i++)
     {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            issorted=0;
        }      
     }
          if(issorted)
     {
        break;
     }

  }
     printf("after sorting\n\n\n");
      for(k=0;k<100000;k++)
     {
         printf("%d\n",arr[k]);
     }
     
     return 0;
}
