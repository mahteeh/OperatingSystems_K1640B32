#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
	int n,i;
	printf("enter number of processes");
	scanf("%d",&n);
	int processes[n];
	int burst_time[n];
	int waiting_time[n];
	int priority[n];
	
	printf("enter the burst time for each process \n");
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		scanf("%d",&burst_time[i]);
	}
	
}
