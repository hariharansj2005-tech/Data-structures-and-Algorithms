//Queue using in Array 

#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int main()
{
    int n,value;
    printf("Enter numberb of elements to insert (max%d) : ",MAX);
    scanf("%d",&n);
    if(n>MAX)
    {
        printf("Queue overflow");
        return 0;
    }
    front=0;
    for(int i=0;i<n;i++)
    { 
        printf("Enter value %d : ",i);
        scanf("%d",&value);
        queue[++rear]=value;
    }
    printf("values in Queue:");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
