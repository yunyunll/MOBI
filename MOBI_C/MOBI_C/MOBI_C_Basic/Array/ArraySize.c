#include <stdio.h>

int ArraySize(void) {
    
    /* int count = 0;
    scanf("%d\n",&count);
    
    int score[count]; // 동적 메모리 할당에서 배울 예정
     */
    
    int n = 0;
    double d = 0;
    int arr[5] = {1,2,3,4,5};
    
    printf("%ld\n",sizeof(n));
    printf("%ld\n",sizeof(d));
    printf("%ld\n",sizeof(arr));

    printf("%ld\n",sizeof(arr)/sizeof(arr[0]));

    printf("%d\n",n);
    printf("%d\n", arr[0]);
    printf("%p\n", &arr);
    
    
    return 0;
}
