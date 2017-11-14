#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   long int a,b,val,n,q,i;
   long int *arr;
scanf("%ld %ld",&n,&q);
    arr=malloc((n+1)*sizeof(long int));
    for(int i=1;i<=n;i++)
        {
        arr[i]=0;
    }
    for(i=0;i<q;i++)
        {
        scanf("%ld %ld %ld",&a,&b,&val);
        //a=a-1;
        
        arr[a]+=val;
        arr[b+1]-=val;
    }
    long int sum=0;
    long int max=0;
    for(i=1;i<=n;i++)
        {
        sum=sum+arr[i];
        if(sum>max)max=sum;
    }
    printf("%ld\n",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

