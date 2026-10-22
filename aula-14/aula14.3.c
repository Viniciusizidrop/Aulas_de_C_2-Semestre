#include <stdio.h>
int main(){
int a= 5, b=8;
int *p =&a, *q = &b;//
printf("1- *p:%p *q:%p\n",(void*)p,(void*)q);
printf("valor do ponteiro p:%d q:%d\n",*p,*q);//ponteiro P aponta para A e Q para B
printf("a:%d b:%d\n",a, b);

*p = *q;//P recebe o valor que esta sendo armazenado no Q
printf("2- *p:%p *q:%p\n",(void*)p,(void*)q);
printf("valor do ponteiro p:%d q:%d\n",*p,*q);//mudou o P e A para 8
printf("a:%d b:%d\n",a, b);

q = p;//Q recebe o endereço que P esta armazenando
printf("3- *p:%p *q:%p\n",(void*)p,(void*)q);
printf("valor do ponteiro p:%d q:%d\n",*p,*q);//mudou o endereço de Q para o mesmo de P
printf("a:%d b:%d\n", a, b);
}