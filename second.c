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
	printf("enter the waiting time for each process \n");
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		scanf("%d",&waiting_time[i]);
	}
	printf("process busrt_time waiting_time");
	for(i=0;i<n;i++)
	{
		printf("\n %3d  %10d %10d",i+1,burst_time[i],waiting_time[i]);
	}
}
