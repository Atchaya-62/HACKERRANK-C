#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a,b[100],c[100];
    scanf("%c",&a);
    scanf("%s",&b);
    scanf("\n");
    scanf("%[^\n]%*c",&c);
    printf("%c\n",a);
    printf("%s\n",b);
    printf("%s\n",c); 
    return 0;
}
