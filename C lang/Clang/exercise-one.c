#include <stdio.h>

int marks(){
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks >= 90){
        printf("grade: A\n");
    }
    else if(marks >= 75){
        printf("grade: B\n");
    }
    else if(marks >= 55){
        printf("grade: C\n");
    }
    else if(marks >= 35){
        printf("grade: D\n");
    }
    else{
        printf("Grade: F");
    }

    return 0;
}
int main(){
    marks();
}