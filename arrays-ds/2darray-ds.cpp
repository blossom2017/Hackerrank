#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    int i,j;
    int sum;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
        
    int max=-63;
    for(int i=0;i<=3;i++)
        {
        for(int j=0;j<=3;j++)
            {
            //printf("\n");
            //printf("%d %d %d %d %d %d %d\n",arr[i][j],arr[i][j+1],arr[i][j+2],arr[i+1][j+1],arr[i+2][j],arr[i+2][j+1],arr[i+2][j+2]);
           sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>max)max=sum;
            //printf("%d\n",max);
        }
        
    }
    printf("%d",max);
    return 0;
}

