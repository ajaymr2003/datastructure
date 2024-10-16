#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front=-1,rear=-1;
void main()
{
	void insertq(int);
	int deleteq();
	int searchq(int);
	int data,opt,ans;
	do
	{
		printf("\n 1.insertq ");
		printf("\n 2.deleteq");
		printf("\n 3.searchq ");
		printf("\n 4.exit");
		printf("\n Your option is : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: printf("Data: ");
				scanf("%d",&data);
				insertq(data);
				break;
			case 2: data=deleteq();
				printf("Deleted item= %d",data);
				break;
			case 3: printf("Item to be searched: ");
				scanf("%d",&data);
				ans=searchq(data);
				if(ans==1)
					printf("Element found\n");
				else
					printf("element not found\n");
				break;
			case 4:exit(0);
		}
	}
	while(1);
}
void insertq(int data)
{ 
	if(rear==size-1)
		printf("Queue is full\n");
	else
		queue[++rear]=data;
}
int deleteq()
{
	if(front==rear)
	{
		printf("queue is empty \n");
		exit(1);
	}
	else
	return queue[++front];
}
int searchq(int item)
{
	int tfront;
	if(front!=rear)
		{
			tfront=front+1;
	while(tfront!=rear && queue[tfront]!=item)
		++tfront;
	if(queue[tfront]==item)
		return 1;
	else
		return 0;
		}
		else
		{
		printf("Queue is empty ");
		exit(1);
		}
}
		
				
		
