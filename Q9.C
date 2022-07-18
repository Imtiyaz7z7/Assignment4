#include<stdio.h>
int main(){
    for (int i = 1; i <= 10; i++){
        int a = i*i*i;
        printf("%d*%d*%d = %d\n",i,i,i,a);
    }
    return 0;
}