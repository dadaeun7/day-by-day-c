#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int test[5][5] = {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
    };

// start : 행마다 열의 오른쪽, 왼쪽 순서를 바꾸기 위함
// 열 오른쪽 순서: 4 3 2 1 0 / 열 왼쪽 순서: 0 1 2 3 4
// index : 열 오른쪽 순서인 경우
// rotate : 열의 순서가 들어감
    int column = sizeof(test[5]) / sizeof(int);
    int row = sizeof(test) / sizeof(int) / column;
    int start = 0;
    int index = column;
    int rotate = 0;

    for(int i = 0; i < row; i++){

	// true 가 나오면 왼쪽 부터 : false 가 나오면 오른쪽 부터
        start = (i + 1) % 2 ? 1 : index;
        
        for(int j = 0 ; j < column; j++){
	// 열의 순서가 들어가는 rotate 
            rotate = abs(start - (j+1));
            test[i][rotate] = (i * column) + 1 + j; 
        }
    }

// test에 각 교차 달팽이 순서로 넣은 후 출력
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d\t", test[i][j]);
        }
    }
}
