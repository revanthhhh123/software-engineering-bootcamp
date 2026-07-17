#include <stdio.h>
// void square(int* num) {
//     *num = (*num) * (*num);
//     printf("Value of num is: %d\n", *num);
// }
// void _square( int n){
//     n=n*n;
//     printf("Value of n is: %d\n", n);
// }
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // int age=22;
    // int* ptr=&age;
    // int _age=*ptr;
    // printf("Age is: %d\n", _age);
    // printf("Address of age is: %p\n", (void*)ptr);
    // printf("Address of _age is: %p\n", (void*)&_age);
    // printf("Value of age is: %d\n", age);
    // printf("Value of _age is: %d\n", _age);
    // char name;
    // name = 'A';
    // char* ptr = &name;
    // char** ptr2 = &ptr;
    // printf("Value of name is: %c\n", name);
    // printf("Address of name is: %p\n", (void*)&name);
    // printf("Value of ptr is: %p\n", (void*)ptr);
    // printf("Address of ptr is: %p\n", (void*)&ptr);
    // printf("Value of ptr2 is: %p\n", (void*)ptr2);
    // printf("Address of ptr2 is: %p\n", (void*)&ptr2);
    // int age=5;
    // int* ptr=&age;
    // int** ptr2=&ptr;
    // printf("Value of age is: %d\n",**ptr2);
    // int n=2;
    
    // _square(n);
    // printf("Value of n is: %d\n", n);
    // square(&n);
    // printf("Value of n is: %d\n", n);
    int a=5;
    int b=10;
    swap(&a,&b);
    printf("Value of a is: %d\n", a);   

    

    return 0;
}