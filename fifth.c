#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
	int n,i,j,position,temp;
	float temp2;
	printf("enter number of processes");
	scanf("%d",&n);
	int processes[n];
	int burst_time[n];
	int waiting_time[n];
	float priority[n];
	
	for(i=0;i<n;i++)
	{
		processes[i]=i+1;
	}
	printf("enter the burst time for each process \n");
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		scanf("%d",&burst_time[i]);
	}
	
	//sorting according to shortest job
	for(i=0;i<n;i++)
      {
            position=i;
            for(j=i+1;j<n;j++)
            {
                  if(burst_time[j]<burst_time[position])
                  {
                        position=j;
                  }
            }
            temp=burst_time[i];
            burst_time[i]=burst_time[position];
            burst_time[position]=temp;
            temp=processes[i];
            processes[i]=processes[position];
            processes[position]=temp;
            
      } 

	waiting_time[0]=0;
	for(i=1;i<n;i++)
	{
		waiting_time[i]=0;
		for(j=0;j<i;j++)
		{
		waiting_time[i]=waiting_time[i] + burst_time[j];
	    }
	}
	printf("process busrt_time waiting_time");
	for(i=0;i<n;i++)
	{
		printf("\n %3d  %10d %10d",processes[i],burst_time[i],waiting_time[i]);
	}
	for(i=0;i<n;i++)
	{
		priority[i]=1+(waiting_time[i]/burst_time[i]);
		printf("\n");
		printf("%f",priority[i]);
	}
	
	
	//sorting using priority
	for(i=0;i<n;i++)
      {
            position=i;
            for(j=i+1;j<n;j++)
            {
                  if(priority[j]<priority[position])
                  {
                        position=j;
                  }
            }
            temp2=priority[i];
            priority[i]=priority[position];
            priority[position]=temp2;
            temp=burst_time[i];
            burst_time[i]=burst_time[position];
            burst_time[position]=temp;
            temp=processes[i];
            processes[i]=processes[position];
            processes[position]=temp;
      } 
	
	printf("\nprocess busrt_time waiting_time priority");
	for(i=0;i<n;i++)
	{
		printf("\n %3d  %10d %10d %10f",processes[i],burst_time[i],waiting_time[i],priority[i]);
	}
	
}
