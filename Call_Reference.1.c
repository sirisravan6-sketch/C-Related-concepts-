#include <stdio.h>
    void swap(int* x,int* y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
        return;
    }
int main() {
    int a=36,b=74;
    printf("The value of a and b are %d and %d\n",a,b);
    swap(&a,&b);
     printf("The value of a and b are %d and %d\n",a,b);
    return 0;
}