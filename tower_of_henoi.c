#include<stdio.h>
#include<time.h>
void toh(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==1){
		printf("\n move disk %d from %c to rod %c",n,from_rod,to_rod);
		return;
	}
	toh(n-1,from_rod,aux_rod,to_rod);
	printf("\n move disk %d from %c to rod %c",n,from_rod,to_rod);
	toh(n-1,aux_rod,to_rod,from_rod);
}


 int main()
 {
 	int n;
 	printf("Enter the number of disk:-");
 	scanf("%d",&n);
 	clock_t start_time =clock();
 	toh(n,'A','B','c');
 	clock_t end_time =clock();
 	double execution_time=(double)(end_time-start_time)/CLOCKS_PER_SEC;
 	printf("\n time taken with %d disk: %4f",n,execution_time);
 	return 0;
 }
