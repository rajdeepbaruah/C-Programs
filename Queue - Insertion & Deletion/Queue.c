#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void insert (int val,int que[],int *rer)
{
	if(*rer<MAX-1)
	 {
    	 *rer=*rer+1;
     	 que[*rer]=val;
  	}
 	else
	 {
	 	printf("Queue is full ! can't be inserted \n");
      	exit(0);
	 }
}

 void dele(int *val,int que[],int *fnt,int rer)
 {
 	if(*fnt==rer)
 	{
   		printf("Empty queue ! can't be deleted!\n");
   		exit(0);
 	}
  	*fnt=*fnt+1;
  	*val=que[*fnt];
}

void main ()
{
	int n,i,val;
	int que[MAX],fnt,rer;
	fnt=rer=-1;
	do
	{
 		do
		{		
  			printf("Enter the element : ");
  			scanf("%d",&val);
  			insert(val,que,&rer);
  			printf("To continue,Enter 1 : ");
  			scanf("%d",&n);
		}
  		while(n==1);
  
  		printf("To delete an element,Enter 1\n");
  		scanf("%d",&n);
  		while(n==1)
			{
 			 dele(&val,que,&fnt,rer);
  			 printf("The value deleted is %d\n",val);
  			 printf("To delete an element,press 1!\n");
  			 scanf("%d",&n);
            }
  		printf("To continue,Enter 1\n");
  		scanf("%d",&n);
	}
  while(n==1);
}
