//
// Created by Oleksandr on 27.04.2020.
//


#include "gameplay.h"
struct GAMERS{
    char name[100];
    int dots[10][10];
    int fourship[2][4];
    int threeship[4][3];
    int twoship[6][2];
    int oneship[8];
}players[2];

void input_dot(int *dot);
void destroiship();
void registrations(int player);
void ship4(int player);
void ship3(int player,int number);
void ship2(int player,int number);
void set_ships(int player);
void destroiwatter(int z,int t);
void reformat(int player,int x,int y);

void ship4(int player){
    printf("\nEnter first extreme point: ");
    int dots1[2][2];
    input_dot(dots1[0]);
    printf("\nEnter second extreme point: ");
    input_dot(dots1[1]);
    int def0 = dots1[0][0]-dots1[1][0];
    int def1 = dots1[0][1]-dots1[1][1];
    if((def1==3||def1==-3)&&def0==0){
        if(def1==-3){
            int buf;
            buf =dots1[0][0];
            dots1[0][0]=dots1[1][0];
            dots1[1][0]=buf;
        }
        for (int u = 0; u < 4; ++u)if (players[player].dots[dots1[0][0]][dots1[0][1]+u] ==1){
                printf("Enter anouther point.");
                ship4(player);
            }
        int x=0,y=0;

        if(dots1[0][0]==0){
            y=-1;
        }
        if(dots1[0][0]==9){
            y=1;
        }
        if(dots1[0][1]==0){
            x=-1;
        }
        if(dots1[0][1]==9){
            x=1;
        }
        if(x==0&&y==0)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+2]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]+2]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                         &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){

                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==0&&y==1)if (players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]+2]==0
                          &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                          &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                          &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0

                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==-1&&y==1)if(
                    players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[0][0]-1][dots1[0][1]+2]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==1&&y==1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+2]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==0&&y==-1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]+2]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                          &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==-1&&y==-1)if(
                    players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]+2]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==1&&y==-1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]+2]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0

                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==-1&&y==0)if(
                    players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[0][0]-1][dots1[0][1]+2]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]+2]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }
        if(x==1&&y==0)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+2]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]+2]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0

                    ){
                for (int u=0;u<4;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].fourship[0][u]=dots1[0][0];
                    players[player].fourship[1][u]=dots1[0][1]+u;
                }

            }

    } else
    if((def0==3||def0==-3)&&def1==0) {
        if (def0 == -3) {
            int buf;
            buf = dots1[0][1];
            dots1[0][1] = dots1[1][1];
            dots1[1][1] = buf;
        }
        for (int u = 0; u < 4; ++u)if (players[player].dots[dots1[0][0]+u][dots1[0][1]] ==1){
                printf("Enter anouther point.");
                ship4(player);
            }
        int x = 0, y = 0;

        if (dots1[0][0] == 0) {
            y = -1;
        }
        if (dots1[0][0] == 9) {
            y = 1;
        }
        if (dots1[0][1] == 0) {
            x = -1;
        }
        if (dots1[0][1] == 9) {
            x = 1;
        }
        if (x == 0 && y == 0)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0] + 2][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] + 2][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == 0 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0] + 2][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 2][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0

                    ){
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+ u][dots1[0][1] ] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x ==-1 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0] + 2][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == 1 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 2][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0

                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == 0 && y == -1)if (
                    players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                    && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                    && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                    && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                    && players[player].dots[dots1[0][0] + 2][dots1[0][1] - 1] == 0
                    && players[player].dots[dots1[0][0] + 2][dots1[0][1] + 1] == 0
                    && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                    && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == -1 && y == -1)if (players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                   && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                   && players[player].dots[dots1[0][0] + 2][dots1[0][1] + 1] == 0
                                   && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                                   && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                                   && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == 1 && y == -1)if (players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                  && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                  && players[player].dots[dots1[0][0] + 2][dots1[0][1] - 1] == 0
                                  && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == -1 && y == 0)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                  && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[0][0] + 2][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }
        if (x == 1 && y == 0)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 2][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                                 && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                                 && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 4; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].fourship[0][u]=dots1[0][0]+u;
                    players[player].fourship[1][u]=dots1[0][1];
                }

            }



    }
    if(players[player].dots[dots1[0][0]][dots1[0][1]] == 0){
        printf("Enter another point");
        ship4(player);
    }

}
void ship3(int player,int number){
    printf("\nEnter first extreme point: ");
    int dots1[2][2];
    input_dot(dots1[0]);
    printf("\nEnter second extreme point: ");
    input_dot(dots1[1]);
    int def0 = dots1[0][0]-dots1[1][0];
    int def1 = dots1[0][1]-dots1[1][1];
    if((def1==2||def1==-2)&&def0==0){
        if(def1==-2){
            int buf;
            buf =dots1[0][0];
            dots1[0][0]=dots1[1][0];
            dots1[1][0]=buf;
        }

        for (int u = 0; u < 3; ++u)if (players[player].dots[dots1[0][0]][dots1[0][1]+u] ==1){

                printf("Enter another point");
                ship3(player,number);
            }
        int x=0,y=0;

        if(dots1[0][0]==0){
            y=-1;
        }
        if(dots1[0][0]==9){
            y=1;
        }
        if(dots1[0][1]==0){
            x=-1;
        }
        if(dots1[0][1]==9){
            x=1;
        }
        if(x==0&&y==0)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                         &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==0&&y==1)if (players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                          &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                          &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                          &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0

                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==-1&&y==1)if(
                    players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==1&&y==1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==0&&y==-1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                          &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==-1&&y==-1)if(
                    players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==1&&y==-1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0

                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==-1&&y==0)if(
                    players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }
        if(x==1&&y==0)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]+1]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0

                    ){
                for (int u=0;u<3;++u){
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                    players[player].threeship[number][u]=dots1[0][0];
                    players[player].threeship[number+1][u]=dots1[0][1]+u;
                }

            }

    } else
    if((def0==2||def0==-2)&&def1==0) {
        if (def0 == -2) {
            int buf;
            buf = dots1[0][1];
            dots1[0][1] = dots1[1][1];
            dots1[1][1] = buf;
        }

        for (int u = 0; u < 3; ++u)if (players[player].dots[dots1[0][0]+u][dots1[0][1]] ==1){

                printf("Enter another point");
                ship3(player,number);
            }
        int x = 0, y = 0;

        if (dots1[0][0] == 0) {
            y = -1;
        }
        if (dots1[0][0] == 9) {
            y = 1;
        }
        if (dots1[0][1] == 0) {
            x = -1;
        }
        if (dots1[0][1] == 9) {
            x = 1;
        }
        if (x == 0 && y == 0)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                }

            }
        if (x == 0 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0

                    ){
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+ u][dots1[0][1] ] = 1;
                }

            }
        if (x ==-1 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }
        if (x == 1 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0

                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }
        if (x == 0 && y == -1)if (
                    players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                    && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                    && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                    && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                    && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                    && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }
        if (x == -1 && y == -1)if (players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                   && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                   && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                                   && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                                   && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }
        if (x == 1 && y == -1)if (players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                  && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                  && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }
        if (x == -1 && y == 0)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                  && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                                  && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                                  && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }
        if (x == 1 && y == 0)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                                 && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                                 && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                                 && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                                 && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 3; ++u){
                    players[player].threeship[number][u]=dots1[0][0]+u;
                    players[player].threeship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
                }

            }



    }
    if(players[player].dots[dots1[0][0]][dots1[0][1]]==0) {

        printf("Enter another point");
        ship3(player,number);
    }


}
void ship2(int player,int number){
    printf("\nEnter first extreme point: ");
    int dots1[2][2];
    input_dot(dots1[0]);
    printf("\nEnter second extreme point: ");
    input_dot(dots1[1]);

    int def0 = dots1[0][0]-dots1[1][0];
    int def1 = dots1[0][1]-dots1[1][1];
    if((def1==1||def1==-1)&&def0==0){
        if(def1==-1){
            int buf;
            buf =dots1[0][0];
            dots1[0][0]=dots1[1][0];
            dots1[1][0]=buf;
        }
        for (int u=0;u<2;++u)if(players[player].dots[dots1[0][0]][dots1[0][1] + u] == 1) {
                printf("Enter another point");
                ship2(player,number);
            }

        int x=0,y=0;

        if(dots1[0][0]==0){
            y=-1;
        }
        if(dots1[0][0]==9){
            y=1;
        }
        if(dots1[0][1]==0){
            x=-1;
        }
        if(dots1[0][1]==9){
            x=1;
        }
        if(x==0&&y==0)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                         &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==0&&y==1)if (players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                          &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                          &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                          &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0

                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==-1&&y==1)if(
                    players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==1&&y==1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==0&&y==-1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                          &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==-1&&y==-1)if(
                    players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==1&&y==-1)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                          &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                          &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0

                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==-1&&y==0)if(
                    players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                    &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0
                    &&players[player].dots[dots1[1][0]+1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]-1][dots1[1][1]+1]==0
                    &&players[player].dots[dots1[1][0]][dots1[1][1]+1]==0
                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }
        if(x==1&&y==0)if(players[player].dots[dots1[0][0]][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]-1]==0
                         &&players[player].dots[dots1[0][0]-1][dots1[0][1]]==0
                         &&players[player].dots[dots1[0][0]+1][dots1[0][1]]==0
                         &&players[player].dots[dots1[1][0]+1][dots1[1][1]]==0
                         &&players[player].dots[dots1[1][0]-1][dots1[1][1]]==0

                    ){
                for (int u=0;u<2;++u){
                    players[player].twoship[number][u]=dots1[0][0];
                    players[player].twoship[number+1][u]=dots1[0][1]+u;
                    players[player].dots[dots1[0][0]][dots1[0][1]+u]=1;
                }

            }

    } else
    if((def0==1||def0==-1)&&def1==0) {
        if (def0 == -1) {
            int buf;
            buf = dots1[0][1];
            dots1[0][1] = dots1[1][1];
            dots1[1][1] = buf;
        }
        int x = 0, y = 0;
        for (int u = 0; u < 2; ++u)
            if (players[player].dots[dots1[0][0] + u][dots1[0][1]] == 1) {
                printf("Enter another point");
                ship2(player,number);
            }
        if (dots1[0][0] == 0) {
            y = -1;
        }
        if (dots1[0][0] == 9) {
            y = 1;
        }
        if (dots1[0][1] == 0) {
            x = -1;
        }
        if (dots1[0][1] == 9) {
            x = 1;
        }
        if (x == 0 && y == 0)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == 0 && y == 1)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0

                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == -1 && y == 1)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == 1 && y == 1)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0

                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == 0 && y == -1)
            if (
                    players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                    && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                    && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                    && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                    && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == -1 && y == -1)
            if (players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == 1 && y == -1)
            if (players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == -1 && y == 0)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] + 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }
        if (x == 1 && y == 0)
            if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[1][0]][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1] - 1] == 0
                && players[player].dots[dots1[1][0] + 1][dots1[1][1]] == 0
                    ) {
                for (int u = 0; u < 2; ++u){
                    players[player].twoship[number][u]=dots1[0][0]+u;
                    players[player].twoship[number+1][u]=dots1[0][1];
                    players[player].dots[dots1[0][0] + u][dots1[0][1]] = 1;
                }

            }

    }


    if(players[player].dots[dots1[0][0]][dots1[0][1]]==0)
    {
        printf("Enter another point");
        ship2(player,number);
    }


}
void ship1(int player,int number){
    printf("\nEnter point: ");
    int dots1[1][2];
    input_dot(dots1[0]);
    if(players[player].dots[dots1[0][0]][dots1[0][1]]==1){
        printf("Enter another point");
        ship1(player,number);
    }

    int x = 0, y = 0;

    if (dots1[0][0] == 0) {
        y = -1;
    }
    if (dots1[0][0] == 9) {
        y = 1;
    }
    if (dots1[0][1] == 0) {
        x = -1;
    }
    if (dots1[0][1] == 9) {
        x = 1;
    }
    if (x == 0 && y == 0)
        if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
            && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
            && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
            && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
            && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
            && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
            && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
            && players[player].dots[dots1[0][0] + 1][dots1[0][1]] == 0
                ) {
            for (int u = 0; u < 1; ++u){
                players[player].oneship[number]=dots1[0][0];
                players[player].oneship[number+1]=dots1[0][1];
                players[player].dots[dots1[0][0]+u][dots1[0][1]] = 1;
            }

        }
    if (x == 0 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                             && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                             && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                             && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                             && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0

                ){
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1] ] = 1;

        }
    if (x ==-1 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                             && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                             && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                ) {
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;

        }
    if (x == 1 && y == 1)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                             && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                             && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0

                ) {
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;

        }
    if (x == 0 && y == -1)if (
                players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                && players[player].dots[dots1[0][0] + 1][dots1[0][1]] == 0
                ) {
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;

        }
    if (x == -1 && y == -1)if (players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                               && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                               && players[player].dots[dots1[0][0] + 1][dots1[0][1]] == 0
                ) {
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;

        }
    if (x == 1 && y == -1)if (players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                              && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                              && players[player].dots[dots1[0][0] + 1][dots1[0][1]] == 0
                ) {
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;

        }
    if (x == -1 && y == 0)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                              && players[player].dots[dots1[0][0] - 1][dots1[0][1] + 1] == 0
                              && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                              && players[player].dots[dots1[0][0]][dots1[0][1] + 1] == 0
                              && players[player].dots[dots1[0][0] + 1][dots1[0][1] + 1] == 0
                              && players[player].dots[dots1[0][0] + 1][dots1[0][1]] == 0
                ) {
            players[player].oneship[number]=dots1[0][0];
            players[player].oneship[number+1]=dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;

        }
    if (x == 1 && y == 0)if (players[player].dots[dots1[0][0] - 1][dots1[0][1]] == 0
                             && players[player].dots[dots1[0][0] - 1][dots1[0][1] - 1] == 0
                             && players[player].dots[dots1[0][0]][dots1[0][1] - 1] == 0
                             && players[player].dots[dots1[0][0] + 1][dots1[0][1] - 1] == 0
                             && players[player].dots[dots1[0][0] + 1][dots1[0][1]] == 0
                ) {
            players[player].oneship[number] = dots1[0][0];
            players[player].oneship[number + 1] = dots1[0][1];
            players[player].dots[dots1[0][0]][dots1[0][1]] = 1;
        }
    if(players[player].dots[dots1[0][0]][dots1[0][1]]==0)
    {
        printf("Enter another point");
        ship1(player,number);
    }




}
void input_dot(int *dot){
    char coord[100];
    printf("\nEnter coord of point(example A8):");
    fflush(stdin);
    gets(coord);
    int flags[3]={0,1,1};

    if(strlen(coord)!=2){
        flags[0]=1;
    }
    char set[10]="ABCDEFGHIJ";
    for (int i = 0; i <10 ; ++i) {
        if(upper(coord[0])==set[i]){
            flags[1]=0;
            dot[0]=i;
            break;
        }
    }
    char set1[10]="0123456789";
    for (int i = 0; i <10 ; ++i) {
        if(coord[1]==set1[i]){
            flags[2]=0;
            dot[1]=i;
            break;
        }
    }
    if(flags[0]==1||flags[1]==1||flags[2]==1){
        printf("This point does not exist.");
        input_dot(dot);
    }
}

void set_ships(int player)
{
        set_table(players[player].dots);
        printf("\nPlace the four deck ship");
        ship4(player);
        system("cls");
        set_table(players[player].dots);
    for (int i = 0; i < 2; ++i) {
        printf("\nPlace %d the three deck ship",i+1);
        ship3(player,i*2);
        system("cls");
        set_table(players[player].dots);
    }
    for (int i = 0; i < 3; ++i) {
        printf("\nPlace %d the two deck ship",i+1);
        ship2(player,i*2);
       system("cls");
        set_table(players[player].dots);
    }
    for (int i = 0; i < 4; ++i) {
        printf("\nPlace %d the one deck ship",i+1);
        ship1(player,i*2);
        if(i<3)system("cls");
        set_table(players[player].dots);
    }
}
void destroiship() {
    int count4[2] = {0, 0};
    for (int i = 0; i < 4; ++i) {

        if (players[0].dots[players[0].fourship[0][i]][players[0].fourship[1][i]] == -1) {
            count4[0]++;
        }
        if (players[1].dots[players[1].fourship[0][i]][players[1].fourship[1][i]] == -1) {
            count4[1]++;
        }
    }
    if (count4[0] == 4)
        for (int i = 0; i < 4; ++i)
            players[0].dots[players[0].fourship[0][i]][players[0].fourship[1][i]] = -2;
    if (count4[1] == 4)
        for (int i = 0; i < 4; ++i)
            players[1].dots[players[1].fourship[0][i]][players[1].fourship[1][i]] = -2;
    int count3[4] = {0, 0, 0, 0};
    for (int j = 0; j < 2; ++j) {

        for (int i = 0; i < 3; ++i) {
            if (players[0].dots[players[0].threeship[j*2][i]][players[0].threeship[j*2 + 1][i]] == -1) {
                count3[j*2]++;
            }
            if (players[1].dots[players[1].threeship[j*2][i]][players[1].threeship[j*2 + 1][i]] == -1) {
                count3[j*2 + 1]++;
            }
        }
        if (count3[j*2] == 3)
            for (int i = 0; i < 3; ++i) {
                players[0].dots[players[0].threeship[j*2][i]][players[0].threeship[j*2 + 1][i]] = -2;
            }
        if (count3[j*2 + 1] == 3)
            for (int i = 0; i < 3; ++i)
                players[1].dots[players[1].threeship[j*2][i]][players[1].threeship[j*2 + 1][i]] = -2;

    }
    int count2[6] = {0, 0, 0, 0, 0, 0};
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 2; ++i) {
            if (players[0].dots[players[0].twoship[j*2][i]][players[0].twoship[j*2+ 1][i]] == -1) {
                count2[j*2]++;
            }
            if (players[1].dots[players[1].twoship[j*2][i]][players[1].twoship[j*2 + 1][i]] == -1) {
                count2[j*2 + 1]++;
            }
        }
        if (count2[j*2] == 2)
            for (int i = 0; i < 2; ++i)
                players[0].dots[players[0].twoship[j*2][i]][players[0].twoship[j*2 + 1][i]] = -2;
        if (count2[j*2 + 1] == 2)
            for (int i = 0; i <2; ++i)
                players[1].dots[players[1].twoship[j*2][i]][players[1].twoship[j*2 + 1][i]] = -2;

    }
    int count1[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    for (int j = 0; j < 4; ++j) {
        if (players[0].dots[players[0].oneship[j*2]][players[0].oneship[j*2 + 1]] == -1) {
            count1[j*2]++;
        }
        if (players[1].dots[players[1].oneship[j*2]][players[1].oneship[j*2 + 1]] == -1) {
            count1[j*2 + 1]++;
        }

        if (count1[j*2] == 1)
                players[0].dots[players[0].oneship[j*2]][players[0].oneship[j*2 + 1]] = -2;
        if (count1[j*2 + 1] == 1)
                players[1].dots[players[1].oneship[j*2]][players[1].oneship[j*2 + 1]] = -2;

    }
    for (int k = 0; k <10 ; ++k) {
        for (int i = 0; i <10 ; ++i) {
            destroiwatter(k,i);
        }
    }
}
void registrations(int player){
    fflush(stdin);
    printf("\nEnter name of %d player:",player+1);
    gets(players[player].name);
}
int check_for_win(int player){
    if(player==1){
        player=0;
    }else player=1;
    for (int i = 0; i <10; ++i) {
        for (int j = 0; j <10 ; ++j) {
            if(players[player].dots[i][j]==2){
                return 0;
            }
        }
    }
    return 1;
}
void reformat(int player,int x,int y){
    int dot[2]={x,y};
    if(players[player].dots[dot[0]][dot[1]] ==0){
        players[player].dots[dot[0]][dot[1]] =-3;
    }
}
void destroiwatter(int z,int t){
    printf("\nEnter point: ");
   int  dots1[2]={z,t};
    int x = 0, y = 0;

    if (dots1[0] == 0) {
        y = -1;
    }
    if (dots1[0] == 9) {
        y = 1;
    }
    if (dots1[1] == 0) {
        x = -1;
    }
    if (dots1[1] == 9) {
        x = 1;
    }for(int player=0;player<2;player++)
        if (players[player].dots[dots1[0]][dots1[1]] == -2) {
        if (x == 0 && y == 0) {
            reformat(player,dots1[0]-1,dots1[1]);
            reformat(player,dots1[0]-1,dots1[1]-1);
            reformat(player,dots1[0]-1,dots1[1]+1);
            reformat(player,dots1[0],dots1[1]-1);
            reformat(player,dots1[0],dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]-1);
            reformat(player,dots1[0]+1,dots1[1]);
        }


        if (x == 0 && y == 1) {
            reformat(player,dots1[0]-1,dots1[1]);
            reformat(player,dots1[0]-1,dots1[1]-1);
            reformat(player,dots1[0]-1,dots1[1]+1);
            reformat(player,dots1[0],dots1[1]-1);
            reformat(player,dots1[0],dots1[1]+1);




        }
        if (x == -1 && y == 1)
          {
            reformat(player,dots1[0]-1,dots1[1]);
              reformat(player,dots1[0]-1,dots1[1]+1);
              reformat(player,dots1[0],dots1[1]+1);


            }
        if (x == 1 && y == 1){
            reformat(player,dots1[0]-1,dots1[1]);
            reformat(player,dots1[0]-1,dots1[1]-1);
            reformat(player,dots1[0],dots1[1]-1);


            }
        if (x == 0 && y == -1){

            reformat(player,dots1[0],dots1[1]-1);
            reformat(player,dots1[0],dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]-1);
            reformat(player,dots1[0]+1,dots1[1]);


            }
        if (x == -1 && y == -1){


            reformat(player,dots1[0],dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]+1);

            reformat(player,dots1[0]+1,dots1[1]);


            }
        if (x == 1 && y == -1){
            reformat(player,dots1[0],dots1[1]-1);
            reformat(player,dots1[0]+1,dots1[1]-1);
            reformat(player,dots1[0]+1,dots1[1]);



            }
        if (x == -1 && y == 0)
        {
            reformat(player,dots1[0]-1,dots1[1]);
            reformat(player,dots1[0]-1,dots1[1]+1);
            reformat(player,dots1[0],dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]+1);
            reformat(player,dots1[0]+1,dots1[1]);

            }
        if (x == 1 && y == 0){
            reformat(player,dots1[0]-1,dots1[1]);
            reformat(player,dots1[0]-1,dots1[1]-1);
            reformat(player,dots1[0],dots1[1]-1);
            reformat(player,dots1[0]+1,dots1[1]-1);
            reformat(player,dots1[0]+1,dots1[1]);


            }

    }
}
int turn(int player){
    system("cls");
    struct_table(players[0].dots,players[1].dots,players[0].name,players[1].name);
    int shot[2];
    input_dot(shot);
    if(player==1){
        player=0;
    }else player=1;
    if(players[player].dots[shot[0]][shot[1]]!=0&&players[player].dots[shot[0]][shot[1]]!=2){
        printf("You have shot here before!!!");
    }
    if(players[player].dots[shot[0]][shot[1]]==0){
        players[player].dots[shot[0]][shot[1]]=-3;
        return 0;
    } else if (players[player].dots[shot[0]][shot[1]]==2){
        players[player].dots[shot[0]][shot[1]]=-1;
        destroiship();
        return 1;
    } else if(check_for_win(0)==0&&check_for_win(1)==0){
        if(player==1){
            player=0;
        }else player=1;
      turn(player);
    }
}
void game(){

    registrations(0);
    registrations(1);

    for (int i = 0; i <10; ++i) {
        for (int j = 0; j <10 ; ++j) {
            players[0].dots[i][j]=0;
            players[1].dots[i][j]=0;
        }
    }
    system("cls");
    printf("%s, please put your ships",players[0].name);
    set_ships(0);
    for (int i = 0; i <10; ++i) {
        for (int j = 0; j <10 ; ++j) {
             if(players[0].dots[i][j]==1)players[0].dots[i][j]=2;
        }
    }
    system("cls");
    printf("%s, please put your ships",players[1].name);
    set_ships(1);
    system("cls");
    for (int i = 0; i <10; ++i) {
        for (int j = 0; j <10 ; ++j) {
            if(players[1].dots[i][j]==1)players[1].dots[i][j]=2;
        }
    }
    int turner=0;

    while (check_for_win(0)==0&&check_for_win(1)==0){
        while (turn(turner));
        if(turner==0)turner=1; else turner=0;
    }
    if(check_for_win(0)==1){
        set_table(players[0].dots);
        printf("\n%s - win!!!",players[0].name);
    } else {
        printf("\n%s - win!!!", players[1].name);
    }

}