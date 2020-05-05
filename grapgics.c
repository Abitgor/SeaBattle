
#include "grapgics.h"

void drow_top_row(char *name1,char *name2){
    printf("\n   %s",name1);
    for(int i =0;i<(65-strlen(name1));i++)
        printf(" ");
    printf("%s",name2);
    printf("\n   ");
    int d=0;
    for(int i = 1; i<(40);i++) {
        if((i+2)%4==0){
            printf("%d",d);
            d++;
        } else printf(" ");

    }
    for(int i =0;i<25;i++)
    printf(" ");
    d=0;
    for(int i = 1; i<(40);i++) {
        if((i+2)%4==0){
            printf("%d",d);
            d++;
        } else printf(" ");

    }
    printf("\n");
    printf("  \311");
    for(int i = 1; i<(40);i++) {
        if(i%4!=0)printf("\315");
        if(i%4==0)printf("\313");
    }
    printf("\273");
    for(int i =0;i<21;i++)
        printf(" ");
    printf("  \311");
    for(int i = 1; i<(40);i++) {
        if(i%4!=0)printf("\315");
        if(i%4==0)printf("\313");
    }
    printf("\273");
}

void drow_bottom_row(){

    printf("\n");
    printf("  \310");
    for(int i = 1; i<(40);i++) {
        if((i%4!=0)) printf("\315");
        if((i%4==0))printf("\312");
    }
    printf("\274");
    for(int i =0;i<21;i++)
        printf(" ");
    printf("  \310");
    for(int i = 1; i<(40);i++) {
        if((i%4!=0)) printf("\315");
        if((i%4==0))printf("\312");
    }
    printf("\274");
}

void drow_midle_row(){
    printf("\n");
    printf("  \314");
    for(int i = 1; i<(40);i++) {
        if((i%4!=0)) printf("\315");
        if((i%4==0))printf("\316");
    }
    printf("\271");
    for(int i =0;i<21;i++)
        printf(" ");
    printf("  \314");
    for(int i = 1; i<(40);i++) {
        if((i%4!=0)) printf("\315");
        if((i%4==0))printf("\316");
    }
    printf("\271");
}

void struct_table(int array[10][10],int array1[10][10],char *name1,char *name2){
    drow_top_row(name1,name2);
    char set[10]="ABCDEFGHIJ";
    char graphics[6]="#XO~> ";
    for(int i=0;i<10;i++) {
        printf("\n");
        for (int j = 0; j < 10; ++j) {
          if(j==0) printf("%c \272 %c ",set[i],graphics[ array[i][j]+3]);
          else printf("\272 %c ", graphics[ array[i][j]+3]);
        }
        printf("\272");

        for(int i =0;i<21;i++)
            printf(" ");
        for (int j = 0; j < 10; ++j) {
            if(j==0) printf("%c \272 %c ",set[i],graphics[ array1[i][j]+3]);
            else printf("\272 %c ", graphics[ array1[i][j]+3]);
        }
        printf("\272");
        if(i<9) drow_midle_row();
    }

    drow_bottom_row();

}



void drowset_top_row(){
    printf("\n   ");
    int d=0;
    for(int i = 1; i<(40);i++) {
        if((i+2)%4==0){
            printf("%d",d);
            d++;
        } else printf(" ");

    }
    printf("\n");
    printf("  \311");
    for(int i = 1; i<(40);i++) {
        if(i%4!=0)printf("\315");
        if(i%4==0)printf("\313");
    }
    printf("\273");
}

void drowset_bottom_row(){

    printf("\n");
    printf("  \310");
    for(int i = 1; i<(40);i++) {
        if((i%4!=0)) printf("\315");
        if((i%4==0))printf("\312");
    }
    printf("\274");

}

void drowset_midle_row(){
    printf("\n");
    printf("  \314");
    for(int i = 1; i<(40);i++) {
        if((i%4!=0)) printf("\315");
        if((i%4==0))printf("\316");
    }
    printf("\271");

}

void set_table(int array[10][10]){
    drowset_top_row();
    char set[10]="ABCDEFGHIJ";
    char graphics[6]="#XO~>~";
    for(int i=0;i<10;i++) {
        printf("\n");
        for (int j = 0; j < 10; ++j) {
            if(j==0) printf("%c \272 %c ",set[i],graphics[ array[i][j]+3]);
            else printf("\272 %c ", graphics[ array[i][j]+3]);
        }
        printf("\272");


        if(i<9) drowset_midle_row();
    }

    drowset_bottom_row();

}