#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    char** str;
    char query[25];
    scanf("%d",&n);
    int i,j;
    str=malloc(n*sizeof(char *));
    for(i=0;i<n;i++)
        {
        str[i]=malloc(25*sizeof(char));
    }
    for(i=0;i<n;i++)
        {
        scanf("%s",str[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
        {
        int count=0;
        scanf("%s",query);
        for(j=0;j<n;j++)
            {
            if(strcmp(query,str[j])==0)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

