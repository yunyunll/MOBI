#include <stdio.h>

void swap6 (int *px,int *py){
    
    int temp = *px;
    *px = *py;
    *py = temp;
    
}

void add6 (double xr,double xi,double yr,double yi,double *pr,double *pi){
    
    *pr = xr + yr;
    *pi = xi + yi;
}

int poin6(void) {
    
    int x = 10;
    int y = 20;
    

    swap6(&x,&y);
    
    printf("%d\n",x);
    printf("%d\n",y);
    
    double ar = 1,ai = 1;
    double br = 2,bi = 2;
    double sr = 0;
    double si = 0;
    
    add6(ar,ai,br,bi,&sr,&si);
    
    printf("%f + %fi\n",si,sr);
    
    return 0;
}
