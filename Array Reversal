#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[1000],i,j,temp;
    scanf("%d", &num);

    for(i = 0; i < num; i++)
        scanf("%d",&arr[i]);
    
    j=num-1;
    i=0;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i=i+1;
        j=j-1;
    }
    for(i = 0; i < num; i++)
        printf("%d ",arr[i]);
    
    
    return 0;
}
