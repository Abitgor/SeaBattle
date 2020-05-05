//
// Created by Oleksandr on 27.04.2020.
//

#include "testData.h"
char upper(char text){
    char a[26]="QWERTYUIOPASDFGHJKLZXCVBNM",A[26] = "qwertyuiopasdfghjklzxcvbnm";
    for ( int i =0 ;i<26;i++){
        if(text == A[i])return a[i];
    }
    return text;

}
int input_int(char *text) {
    char input_data[65];
    int number;

    while (1) {
        int err = 1;
        printf("%s",text);
        scanf("%s", input_data);

        if ((!isdigit(input_data[0])) && input_data[0] != '-')
            err = 0;

        for(int i = 1; input_data[i] != '\0'; i++)
            if ((!isdigit(input_data[i]))) {
                err = 0;
                break;
            }

        if (err)
            break;
        else
            printf("Invalid error! Try again: ");
    }

    number = atoi(input_data);
    return number;
}

int input_int_with_range(int x, int  y,char *text) {
    int num = input_int(text);

    while(num < x || num > y) {
        printf("Out of range! Try again: \n");
        fflush(stdin);
        num = input_int(text);
    }

    return num;
}

