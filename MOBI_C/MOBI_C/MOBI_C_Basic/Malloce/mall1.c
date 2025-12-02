#include <stdio.h>
#include <stdlib.h>

int mall1(void) {
    
    int n = 0;
    n = 10;
    
    int *k = malloc(4);
    *k = 10;
    free(k);
    
    int x[3] = {1,2,3};
    x[0] = 10;
    
    int *p = malloc(12);
    p[0] = 10;
    p[1] = 20;
    free(p);
    
    int arr1[10];
    double arr2[5];
    
    // int *pi = malloc(40);
    int *pi = malloc(sizeof(int) * 10);
    
    p[0] = 10;
    p[9] = 20;
    
    
    // double *pd = malloc(40);
    double *pd = malloc(sizeof(double) * 5);
    
    p[0] = 10.1;
    p[4] = 10.2;
    
    free(pi);
    free(pd);
    


    return 0;
}
