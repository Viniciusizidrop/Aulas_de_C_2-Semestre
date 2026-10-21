#include <stdio.h>
int main(){
int a= 5, b=8;
int *p =&a, *q = &b;
*p = *q;
q = p;
printf("%d %d\n", a, b);
}