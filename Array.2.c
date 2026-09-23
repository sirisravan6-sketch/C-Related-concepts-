#include <stdio.h>
     
int main() { 
    int marks[2][5] = {{10,20,30,40,50},{60,70,80,90,0}};
 for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){
        printf("%d ",marks[i][j]);
    }
    printf("\n");
 }
return 0;
}