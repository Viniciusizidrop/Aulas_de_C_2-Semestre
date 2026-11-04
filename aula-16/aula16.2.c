#include <stdio.h>
//Questão 3
void DobraX(int *x){
//     int X = *x;
//    int dobra = X * 2;
//    *x = dobra ;

    *x = *x * 2;
    
}

int main(){
    int n = 7;
    DobraX(&n);
    printf("%d\n", n);
}