#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
     return strcmp(b,a);

}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count[26]={0};
    int dis=0,i;
    for(i=0;a[i]!='\0';i++){
        if(count[a[i]-'a']==0){
        dis++;
        count[a[i]-'a']=1;
    }}
    int countB[26]={0};
    int disB=0;
    for(i=0;b[i]!='\0';i++){
        if(countB[b[i]-'a']==0){
            disB++;
            countB[b[i]-'a']=1;
        }
    }
    if(dis!=disB){
        return(dis-disB);
    }
    else
        return strcmp(a,b);
    
    
}

int sort_by_length(const char* a, const char* b) {
    int la=strlen(a);
    int lb=strlen(b);
    if(la!=lb){
        return(la-lb);
    }
    else
        return strcmp(a,b);

}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i,j;
    for(i=0;i<len-1;i++){
        for(j=0;j<len-1;j++){
            if(cmp_func(arr[j],arr[j+1])>0){
                char* temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
