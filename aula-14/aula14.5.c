#include <stdio.h>
int main(){
    int v[5] = {10,20,30,40,50};
    int *p =v;
    printf("%d\n",*(p+2));//30
    printf("%d\n",p[3]);//40
    p++;
    printf("%d\n",*p);//20
}
//D)cada 1 inteiro equivale a 4 bytes