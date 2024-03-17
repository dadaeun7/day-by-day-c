#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flagUseSnailLine(void){

    int test[5][5] = {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
    };

    // flag : 열 순서를 변경해 줄 장치 생성
    // column : 열
    // cn : 마지막 index  
    int column = sizeof(test[5]) / sizeof(int);
    int row = sizeof(test) / sizeof(int) / column;
    int flag = 1;
    int value = 0;
    int cn = row - 1;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            
            if(flag){
                test[i][j] = ++value;
            }else{
                test[i][cn-j] = ++value;
            }
        }
        flag = !flag;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d\t", test[i][j]);
        }
        printf("\n");
    }
}