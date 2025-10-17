#include<stdio.h>
int main(){
    // Arithmetic Operator
    int a = 100;
    int b = 200;
    printf("sum of %d and %d :%d \n",a,b, a + b);
    printf("diff of %d and %d :%d \n",a,b, a - b);
    printf("product of %d and %d :%d \n",a,b, a * b);
    printf("quotioent of %d and %d :%d \n",a,b, a / b);
    printf("remainder of %d and %d :%d\n",a,b, a % b);
    


    // Comparison op

    int c = 80;
    int d = 80;
    if(c > d){
        printf("c is greater than d");
    }
    else if(c == d){
        printf("c is equal to d");
    } else{
        printf("d is greater than c");
    }
    
}