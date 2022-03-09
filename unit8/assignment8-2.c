#include <stdio.h>
#define row 8
#define col 10
int main(){
    int input,count = 0,cord[row][col];
    int num[row][col] = { {2,3,5,7,11,13,17,19,29,31}, 
                       {37,41,43,37,61,71,73,79,83,97},
                       {103,107,109,113,131,151,181,191,193,173}, 
                       {163,113,102,107,127,137,257,139,149,369},
                       {212,224,236,248,313,326,339,341,355,368},
                       {2,4, 6, 6,10, 12, 14, 16, 18,20}, 
                       {1,3,5,7,9,11,13,17,19,21},
                       {163,113,102,107,127,137,257,139,149,369}};
    printf(" *** Find a value in array 2 dimension ***\n");
    printf("Enter a value : ");
    scanf("%d", &input);
    for(int i = 0;i < row; i++){
        for(int j = 0; j < col; j++){
                printf("%5d",num[i][j]);
        }   
        printf("\n");
    }
    printf("\n");
    printf("Finding value => %d\n",input);
    for(int i = 0;i < row; i++){
        for(int j = 0; j < col; j++){
            if(input == num[i][j]){
                count++;
                printf("%d. (row,column) => (%d,%d)\n",count,i+1,j+1);
            }
        }   
    }
    if(count == 0){
        printf(" --- !!! NOT FOUND !!! ---");
    }
    return 0;
}