#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include <conio.h>
#include <windows.h>
#include <string.h>



int main()
{

system("mode con lines=30 cols=80");
int j=0;

    startgame();
    sleep(1);
    int i=0;


    for(i=0;i<81;i++)
    {
        data[i]=0;
        lib[i]=0;
        check[i]=0;
        interdit[i]=1;
        old3[0]=1;
        old[0]=1;
//pour ne pas avoir Ko dees le premier coup
    }
          debut:
            system("@cls||clear");
            system("COLOR F2");
            start();
            //color(11,0);
            printf("\n\n     Enter your choice here please ! >>>  ");
           // color(8,0);
            scanf("%d",&choice);
    while(choice==1 ||choice==2 )
    {


            switch(choice)
            {
                case 1 :
                    {
                                system("@cls||clear");

                                plays();
                                printf("\n\n   Enter your choice here please ! >>>  ");
                                scanf("%d",&choice2);
                                switch(choice2)
                                {
                                    case 1: {
                                            system("color 9");
                                            system("@cls||clear");

                                            joueur_joueur();
                                            break;
                                    }
                                    case 2: {
                                            system("@cls||clear");

                                            srand(time(NULL));
                                            who_plays_first=rand()%2;
                                            for(int u=0;u<15;u++)
                                            {
                                                Sleep(200);
                                                system("@cls||clear");
                                                if(u%2==0)
                                                {
                                                    randome_player_first();
                                                    printf("\n\n\n");
                                                }

                                                if(u%2==1)
                                                {
                                                    randome_player_first2();
                                                    printf("\n\n\n");
                                                }
                                            }
                                            if(who_plays_first==0)
                                            {
                                                system("@cls||clear");
                                                randome_player_first2();
                                                printf("\n\n\n VOUS AVEZ BLANC, VOUS JOUERZ DEUXIÈME  \n");
                                                printf("\n\n\n\n APPUYEZ SUR ENTRER POUR CONTINUER  \n");
                                                getch();
                                                system("@cls||clear");
                                            }
                                            if(who_plays_first==1)
                                            {
                                                system("@cls||clear");
                                                randome_player_first();
                                                printf("\n\n        VOUS ÊTES NOIR, VOUS JOUERZ EN PREMIER  \n");
                                                printf("\n\n\n\n              APPUYEZ SUR ENTRER POUR CONTINUER  \n");
                                                getch();
                                                system("@cls||clear");
                                            }
                                            srand(time(NULL));
                                            joueur_vs_machine();
                                            break;
                                    }
                                    case 3:{
                                        goto debut;
                                    }

                                }

                            break;
                    }
                case 2:{
                    exit (EXIT_SUCCESS);
                    break;
                }


            }

    }
    if(choice!=1 && choice!=2){
       system("@cls||clear");
       printf("choice incorect ");
       sleep(2);
       goto debut;

    }

}



