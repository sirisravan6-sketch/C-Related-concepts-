#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,c;
    if (argc >= 4) {
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
        sscanf(argv[3], "%d", &c);
    } else {
        printf("Enter the value of A");
        scanf("%d",&a);
        printf("Enter the value of B");
        scanf("%d",&b);
        printf("Enter the value of C");
        scanf("%d",&c);
    }

    int ab=a+b;
    int bc=b+c;
    int ac=a+c;
    if(ab==10 || bc==10 || ac==10) {
        printf("10\n");
    }
    else if(a>10 || b>10 || c>10){
        printf("5\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}