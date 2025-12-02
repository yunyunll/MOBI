#include <stdio.h>
#include <stdlib.h> // malloc

// 예제 void로 실행해보기

void arrpoin14_Swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void arrpoin14_Sort(int *arr, int sz, int(*cmp)(int,int)){
    for(int i = 0; i < sz; i++){
        for(int j = i + 1; j < sz; j++){
            // if( arr[i] < arr[j]){
            if(cmp(arr[i],arr[j]) > 0){ // 유연성은 좋지만 데이터가 클 때는 쓰지 않는게 좋다
                arrpoin14_Swap(&arr[i], &arr[j]);
            }
        }
    }
}

int cmp1(int a, int b){return a-b;}
int cmp2(int a, int b){return b-a;}




int arrpoin_14(void) {
    
    int x[10] = {1,2,3,6,3,5,32,5,3,2};
    
    arrpoin14_Sort(x,10,&cmp1);
    for(int i = 0; i < 10; i++){
        printf("%d ", x[i]);
    }
    
    arrpoin14_Sort(x,10,&cmp2);
    for(int i = 0; i < 10; i++){
        printf("%d ", x[i]);
    }
    
    
    return 0; // 자동으로 0을 반환
    
}

