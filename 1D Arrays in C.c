#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0, a[1000],i;
    scanf("%d",&n);
    for (i=0;i<n;i+=1){
        scanf("%d\t",&a[i]);
        sum=sum+a[i];
    }
    
    
    printf("%d",sum);  
    return 0;
}
