#include<stdio.h>
#include<string.h>

// void a(){
//     int i = 1;
//     char j[4];
//     sprintf(j, "%d", i);
//     strcat(j, "+");
//  printf("%s", j)
// }

// int main(){
//     a()
// }

void patternOne(){
    int i = 1;
    char row [20] = "";

    while(i <= 9){
        int j = 1;
        row[0]='\0';

        while(j <= i){
            char a[50] = "";
            sprintf(a,"%d", i);
            strcat(row, a);
            strcat(row, " ");
            j++;
        }
        printf("%s\n", row);
        i++;
    }
}

int main(){
    patternOne();
}