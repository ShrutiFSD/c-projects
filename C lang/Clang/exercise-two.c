// #include <stdio.h>

// int main()
// {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {

//         char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

//         if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
//             printf("%c is a vowel.\n", ch);
//         else
//             printf("%c is a consonant.\n", ch);
//     }
//     else
//     {
//         printf("%c is not an alphabet.\n", ch);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter a letter: ");
//     scanf("%c", &ch);


//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//         printf("It is a vowel.\n");
//     }
//     else {
//         printf("It is a consonant.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter a letter: ");
//     scanf("%c", &ch);

//     // Using ternary operator
//     (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//         ? printf("It is a vowel.\n")
//         : printf("It is a consonant.\n");

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char ch;

//     printf("Enter a letter: ");
//     scanf ("%c",&ch);

//     (ch == "a" || ch =="e"|| ch =="i"|| ch =="o"|| ch =="u"||
//     ch =="A"|| ch =="E"|| ch =="I"|| ch =="0"|| ch =="U")

//     ?printf("It is a vowel.\n")
//     : printf("It is a consonant.\n");

//     return 0;
// }

#include <stdio.h>

int ternaryOp() {
    int temp;

//     printf("Enter temperature in Celsius: ");
//     scanf("%d", &temp);

//     // Using ternary operator
//     (temp >= 30) 
//         ? printf("It's Hot!\n")
//         : (temp >= 20 && temp < 30)
//             ? printf("It's Warm.\n")
//             : printf("It's Cold.\n");

//     return 0;
// }

printf("Enter a Temperature: ");
    // int temp;
    scanf("%d", &temp);
    (temp > 40) ? printf("Very Hot") :
    (temp > 30) ? printf("Hot") :
    (temp > 20) ? printf("Warm") :
    (temp > 10) ? printf("Cool") :
    (temp > 0) ? printf("Cold") :
     printf("Very Cold");
     return 0;

    
}

int main(){
    ternaryOp();

}
 



