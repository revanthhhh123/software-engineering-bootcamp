#include<stdio.h>
// void hello();
// void fr();
// void wish();
// void area();
// int sun(int n);
int factorial(int n)
{   if (n == n) {
        return 1;
    }
    int fact = 1;
    int fact1= fact + factorial(n + 1);
    return fact1;
}
int main()
{
//     hello();
//     fr();
//     return 0;
// }
// void hello()
// {
//     printf("Hello World\n");
// }
// void fr()
// {
//     printf("This is a C program.\n");
// }
// char a;
// scanf("%c", &a);
// wish();

// void wish()
// {     char a;
//     if ( a == 'i') {
//         printf("Hello, Indian!\n");
//     }
//     else{
//         printf("bonjour!\n");
//     }
// }
// area();
// }
// void area()
// {
//     char a; float  b,c;
//     scanf("%c %f %f", &a, &b, &c);
//     if (a == 'r') {
//         printf("Area of rectangle: %f\n", c*b);
//     }
//     else if (a == 's') {
//         printf("Area of square: %f\n", b*b);
//     }
//     else if (a == 't') {
//         printf("Area of triangle: %f\n", 0.5*c*b);
//     }
//     else{
//         printf("Invalid input!\n");
//     }
// int n;
// scanf("%d", &n);
// printf("%d", sun(n));
// }
// int sun(int n){
    
//     if (n == 0) {
        
//         return 0;
//     }
//     else{  
//         return n + sun(n - 1);
//     }
// }
int n;
scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}