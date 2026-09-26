#include <stdio.h>
    void add(int* x,int* y){
        int temp;
        temp=*x-*y;
        *x=*x+*y;
        *y=temp;
        return;
    }
int main() {
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("The value of a and b are %d and %d\n",a,b);
    add(&a,&b);
     printf("The value of a and b are %d and %d\n",a,b);
    return 0;
}