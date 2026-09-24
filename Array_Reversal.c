#include<stdio.h>
void arrRev(int arg[]){
 for (int i = 6; i > 0; i--){
    printf("%d",arg[i]);
 } 
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    arrRev(arr);
    return 0;
}
