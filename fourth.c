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
	int arrival_time[n];
	int priority[n];
	
	printf("enter the burst time for each process \n");
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		scanf("%d",&burst_time[i]);
	}
	printf("enter the arrival time for each process \n");
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		scanf("%d",&arrival_time[i]);
	}
	
	for(i=0;i<n;i++)
	{
		priority[i]=(1+waiting_time[i])/burst_time[i];
	}
	
	printf("process busrt_time arrival_time");
	waiting_time[0]=0;
	for(i=2;i<n;i++)
	{
		int temp;
		waiting_time[1]=temp;
		if(waiting_time[i]>temp)
		{
			
		}
		printf("\n %3d  %10d %10d",i+1,burst_time[i],waiting_time[i]);
	}
}
