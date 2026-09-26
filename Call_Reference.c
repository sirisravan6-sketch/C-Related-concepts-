#include <stdio.h>
    void changevalue(int* address){
        *address=345;
    }
int main() {
    int a=36;
    printf("The value of a is %d\n",a);
    changevalue(&a);
     printf("The value of a is %d",a);
    return 0;
}