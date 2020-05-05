#include <stdio.h>
#include "gameplay.h"
#include "grapgics.h"
#include "testData.h"
int main() {
    while (1) {


        printf("Menu:\n1.Game\n2.Exit game\n3 Read information.\nChose options:");
        int answer = input_int_with_range(1,3,"");

        switch(answer) {
            case 1 : {
                game();
                break;

            }
            case 2:{
                printf(" \nWe hope you enjoyed the game ");
                exit(0);
            }
            case 3:{
                system("cls");
                printf("This are textures:");
                printf("\n1)X - Wrecked ship \n2)~ - Water surface\nO - Wounded ship\n# - The water surface in which hit");
                break;
            }
            default:
                printf("You have selected a non-existent option.\n");
                break;
        }

    }
}
