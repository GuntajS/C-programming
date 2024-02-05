#include <stdio.h>

float add(float x,float y){
    float result = x+y ;
    return result; 
}

float subtract(float x,float y){
    float result = x - y;
    return result; 
}

float multiply(float x,float y){
    float result = x * y;
    return result; 
}

float division(float x,float y){
    float result = x / y;
    return result; 
}

int main(){
    float a=2.3,b=4.5;
    float adding = add(a,b);
    printf("The numbers 2.3 + 4.5 = %0.2f\n",adding);
    float sub = subtract(9.5,8);
    printf("The numbers 9.5 - 8 = %.2f\n",sub);
    float multiplying = multiply(4.5,4.5);
    printf("The numbers 4.5 x 4.5 = %0.2f\n",multiplying);
    float dividing = division(100,10);
    printf("The numbers 100 / 10 = %0.2f\n",dividing);
    return 0;
}
