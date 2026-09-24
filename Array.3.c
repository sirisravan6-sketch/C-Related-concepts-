#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    printf("The value of first element is %d\n",arr[0]);
    printf("The value of second element is %d\n",arr[1]);
    printf("The value of third element is %d\n",arr[2]);
    printf("The value of fourth element is %d\n",arr[3]);
    printf("The value of fifth element is %d\n",arr[4]);
    printf("The address of first element is %d\n",&arr[0]);
    printf("The address of second element is %d\n",&arr[1]);
    printf("The address of third element is %d\n",&arr[2]);
    printf("The address of fourth element is %d\n",&arr[3]);
    printf("The address of fifth element is %d\n",&arr[4]);
    return 0;
}