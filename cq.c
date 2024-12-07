//circular
#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=0,rear=0;
int que[size];
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
			 case 1:printf("Data: ");
				scanf("%d",&data);
				insertq(data);
				break;
			case 2: data=deleteq();
				printf("Deleted item= %d\n",data);
				
				break;
			case 3: printf("Search data: ");
				scanf("%d",&data);
				ans=searchq(data);
				if(ans==1)
					printf("Data found");
				else
					printf("Data not found");
				break;
			case 4:exit(0);
		}
	}
	while(1);
}
void insertq(int item)
{
	int trear=rear;
	trear=(rear+1)%size;
		if(trear==front)
			printf("Queue is full");
		else
		{	
			rear=trear;
			que[rear]=item;
		}
}
int deleteq()
{
	if(front==rear)
	{
		printf("queue is Empty");
		exit(1);
	}
	else
	{
		front=(front+1)%size;
		return que[front];
	}
}
int searchq(int item)
{
	int tfront=front;
	if(tfront!=rear)
	{
	do
	  tfront=(tfront+1)%size;
	while(tfront!=rear&&que[tfront]!=item);
		if(que[tfront]==item)
			return 1;
		else
		return 0;
		}
		return 0;
}
		
			

