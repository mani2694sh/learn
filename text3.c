#include <stdio.h>
#include <stdlib.h>

void add(int a, int b){
    printf("Addition is %d\n",a+b);
}

void subtract(int a, int b){
    printf("Subtraction is %d\n",a-b);
}

void multiply(int a, int b){
    printf("Multiplication is %d\n",a*b);
}

int main(){
    void (*fun_ptr_arr[])(int,int) = {add,subtract,multiply};// create a arr of function pointer which store address of all function in that array
    unsigned int ch,a=15, b=10;
    printf("Enter 0,1,2\n");
    scanf("%d",&ch);
    if(ch>2) return 0;
    (*fun_ptr_arr[ch])(a,b);
    return 0;
}
// Function Pointer 
// How to use function pointer 
// why we use function pointer instead of direct function call

//this is just to perform diff command
