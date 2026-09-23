#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5};
     printf("The address of first element is %p\n",&arr[0]);
    printf("The address of second element is %p\n",arr);
    printf("The address of third element is %p\n",&arr[1]);
    printf("The address of fourth element is %p\n",arr+1);
    printf("The address of fifth element is %p\n",&arr[4]);
     printf("The value address of first element is %d\n",*(&arr[0]));
    printf("The valueaddress of second element is %d\n",*(arr));
    printf("The valueaddress of third element is %d\n",*(&arr[1]));
    printf("The valueaddress of fourth element is %d\n",*(arr+2));
    return 0;
}