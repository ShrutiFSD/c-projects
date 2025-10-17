#include <stdio.h>


int inputOutput(){
    char name[50];
    int age, roll_no;
    float marks;

    // Input section
    printf("=== Student Information Form ===\n\n");

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read name (allows spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your roll number: ");
    scanf("%d", &roll_no);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Output section
    printf("\n=== Student Details ===\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Roll Number: %d\n", roll_no);
    printf("Marks: %.2f\n", marks);

    return 0;

}
int num = 10;

int sum(int number){
    number = number + 10;
    return number;
}
int main() {
    // Declare variables
//   inputOutput();
printf("%d",sum(num));
}