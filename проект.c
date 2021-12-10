#include <stdlib.h>
#include <stdio.h>
 
int main()
{
 
    int N,n;
    
    printf("Enter N: ");
    scanf("%d", &n);
    
    N= pow(2, n);
    
    int arr[N][N];
    int i,j;
    
    for(i = 0; i <= N; ++i){
        for(j = 0; j <=N; ++j){
            arr[i][j] = 0;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("\n");
    
    arr[0][1]=arr[1][0]=rand()%2;
    arr[0][3]=arr[3][0]=rand()%2;
    arr[1][2]=arr[2][1]=rand()%2;
    arr[1][4]=arr[1][4]=rand()%2;
    arr[2][5]=arr[5][2]=rand()%2;
    arr[3][4]=arr[4][3]=rand()%2;
    arr[3][6]=arr[6][3]=rand()%2;
    arr[4][5]=arr[5][4]=rand()%2;
    arr[4][7]=arr[7][4]=rand()%2;
    arr[5][8]=arr[8][5]=rand()%2;
    arr[6][7]=arr[7][6]=rand()%2;
    arr[7][8]=arr[8][7]=rand()%2;
    
     for(i = 0; i <= N; ++i){
        for(j = 0; j <=N; ++j){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}
