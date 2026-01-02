//MaxHeap
   #include <stdio.h>

int main()
{
    int heap[10];
    int value,i,n,size=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    
    printf("Enter array values : ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&value);
        heap[size]=value;
        i=size;
        size++;
        
        while(i>0 && heap[(i-1)/2]<heap[i])
        {
            int temp=heap[i];
            heap[i]=heap[(i-1)/2];
            heap[(i-1)/2]=temp;
            i=(i-1)/2;
        }
    }
    printf("Max Heap : ");
    for(int k=0;k<size;k++)
    {
        printf("%d ",heap[k]);
    }
}
