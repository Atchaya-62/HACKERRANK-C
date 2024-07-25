#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char num[1000];
    int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,i,a;
    scanf("%s",&num);
    for(i=0;i<strlen(num);i+=1){
        if (num[i]=='0')
            a0 += 1;
        else if (num[i]=='1')
            a1 += 1;
        else if (num[i]=='2')
            a2+=1;
        else if (num[i]=='3')
            a3+=1;
        else if (num[i]=='4')
            a4+=1;
        else if (num[i]=='5')
            a5+=1;
        else if (num[i]=='6')
            a6+=1;
        else if (num[i]=='7')
            a7+=1;
        else if (num[i]=='8')
            a8+=1;
        else if (num[i]=='9')
            a9+=1;
        else 
            a=0;
    }
    printf("%d %d %d %d %d %d %d %d %d %d ",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
    return 0;
}
