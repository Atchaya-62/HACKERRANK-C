#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j,and=0,or=0,xor=0;
  for (i=1;i<=n;i+=1){
      for (j=i+1;j<=n;j+=1){
          int tempa=i &j;
          int tempo= i | j;
          int tempx= i^j;
          if (tempa>and && tempa<k)
             and=tempa; 
          if (tempo>or && tempo<k)
             or=tempo;          
          if (tempx>xor && tempx<k)
             xor=tempx;                   
      }
  }
printf("%d\n%d\n%d", and,or,xor);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
