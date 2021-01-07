#include "data.h"
#include <windows.h>
#include<conio.h>
#include <unistd.h>
int data[81],lib[81],check[81],ami[81],check2[81],interdit[81],old[81],old2[81],old3[81],terr[81],terr2[81],terr3[81];
float player1_score=0,player2_score=6.5;
int player1_territory=0,player2_territory=0,black_stones=0,white_stones=0;
int in=0,player=0;
int territory_found=0;
int hh=0,dd=0,gg=0,bb=0;
int compt=0;
int choice=0,choice2=0;
int who_plays_first=0,machine_must_pass=0;

void gotoxy(short x, short y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void startgame(){
 system("COLOR F2");
 char ch[]="GAME GO";
 int i;
 for(i=0;i<60;i++){
        gotoxy(10+i,6);printf("*");
        gotoxy(10+i,12);printf("*");
        if(i>22 && i<30){
            gotoxy(10+i,9);printf("%c",ch[i-23]);

        }
             usleep(120000);

 }
}

void color(int t,int f)
{
HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,f*16+t);
}

void place(int p,int i,int player)
{

 if(p!=0)
 {
     if(p==1)
     {
        color(11,11);
        printf("bb");
        color(8,0);
        printf("");
     }
     if(p==2)
     {
        color(14,14);
        printf("bb");
        color(8,0);
        printf("");
     }
 }
 else{
        if(terr2[i]==1)
            color(11,0);
        if(terr3[i]==2)
            color(14,0);
        if(terr3[i]==0&&terr2[i]==0)
            color(7,0);

        if(i<=9){
           // color(11,0);
            printf(" %d",i);
            color(8,0);
            }
        else
        {
            printf("%d",i);
            color(8,0);
        }
 color(7,0);
 }
}

void showme()
{

printf("\n\n");


   printf("\n\n\n");
    printf("\t\t "); place(data[0],0,player); printf("  "); place(data[1],1,player); printf("  "); place(data[2],2,player); printf("  "); place(data[3],3,player); printf("  "); place(data[4],4,player); printf("  "); place(data[5],5,player); printf("  "); place(data[6],6,player); printf("  "); place(data[7],7,player); printf("  "); place(data[8],8,player);printf("\t\t");printf("\n\n");
    printf("\t\t  "); place(data[9],9,player); printf("  "); place(data[10],10,player); printf("  "); place(data[11],11,player); printf("  "); place(data[12],12,player); printf("  "); place(data[13],13,player); printf("  "); place(data[14],14,player); printf("  "); place(data[15],15,player); printf("  "); place(data[16],16,player); printf("  "); place(data[17],17,player);printf("\n\n");
    printf("\t\t  "); place(data[18],18,player); printf("  "); place(data[19],19,player); printf("  "); place(data[20],20,player); printf("  "); place(data[21],21,player); printf("  "); place(data[22],22,player); printf("  "); place(data[23],23,player); printf("  "); place(data[24],24,player); printf("  "); place(data[25],25,player); printf("  "); place(data[26],26,player); printf("\n\n");
    printf("\t\t  "); place(data[27],27,player); printf("  "); place(data[28],28,player); printf("  "); place(data[29],29,player); printf("  "); place(data[30],30,player); printf("  "); place(data[31],31,player); printf("  "); place(data[32],32,player); printf("  "); place(data[33],33,player); printf("  "); place(data[34],34,player); printf("  "); place(data[35],35,player);  printf("\n\n");
    printf("\t\t  "); place(data[36],36,player); printf("  "); place(data[37],37,player); printf("  "); place(data[38],38,player); printf("  "); place(data[39],39,player); printf("  "); place(data[40],40,player); printf("  "); place(data[41],41,player); printf("  "); place(data[42],42,player); printf("  "); place(data[43],43,player); printf("  "); place(data[44],44,player); printf("\n\n");
    printf("\t\t  "); place(data[45],45,player); printf("  "); place(data[46],46,player); printf("  "); place(data[47],47,player); printf("  "); place(data[48],48,player); printf("  "); place(data[49],49,player); printf("  "); place(data[50],50,player); printf("  "); place(data[51],51,player); printf("  "); place(data[52],52,player); printf("  "); place(data[53],53,player); printf("\n\n");
    printf("\t\t  "); place(data[54],54,player); printf("  "); place(data[55],55,player); printf("  "); place(data[56],56,player); printf("  "); place(data[57],57,player); printf("  "); place(data[58],58,player); printf("  "); place(data[59],59,player); printf("  "); place(data[60],60,player); printf("  "); place(data[61],61,player); printf("  "); place(data[62],62,player); printf("\n\n");
    printf("\t\t  "); place(data[63],63,player); printf("  "); place(data[64],64,player); printf("  "); place(data[65],65,player); printf("  "); place(data[66],66,player); printf("  "); place(data[67],67,player); printf("  "); place(data[68],68,player); printf("  "); place(data[69],69,player); printf("  "); place(data[70],70,player); printf("  "); place(data[71],71,player); printf("\n\n");
    printf("\t\t  "); place(data[72],72,player); printf("  "); place(data[73],73,player); printf("  "); place(data[74],74,player); printf("  "); place(data[75],75,player); printf("  "); place(data[76],76,player); printf("  "); place(data[77],77,player); printf("  "); place(data[78],78,player); printf("  "); place(data[79],79,player); printf("  "); place(data[80],80,player);printf("\n\n");



}


void start()
{
system("color 74");
 char ch[]="MENU PRINCIPALE";
 int i;
 for(i=0;i<60;i++){
        gotoxy(10+i,1);printf("*");
        gotoxy(10+i,5);printf("*");
        if(i>24 && i<40){
            gotoxy(10+i,3);printf("%c",ch[i-25]);

        }
             usleep(100000);

 }

gotoxy(10,10);printf("|    1 >   P L A Y      |");
             usleep(120000);
gotoxy(10,13);printf("|    2 >   E X I T      |");
             usleep(120000);
}
void plays()
{
    system("color 74");
 char ch[]="TYPE DE JEUX";
 int i;
 for(i=0;i<60;i++){
        gotoxy(10+i,1);printf("*");
        gotoxy(10+i,5);printf("*");
        if(i>24 && i<40){
            gotoxy(10+i,3);printf("%c",ch[i-25]);

        }
             usleep(100000);

 }

gotoxy(10,10);printf("|    1 >    1 vs 1      |\n");
gotoxy(10,13);printf("|    2 >  1 VS MACHINE  |\n");
gotoxy(10,16);printf("|    3 >   B A C K      |\n");
}

void winner1(){


color(11,0);




printf("\n\n\n\t\t\t\t\t\t\t\t   YOU ARE THE WINNER WITH %.1f  POINTS \n",-(player1_score+player1_territory+black_stones-player2_score-player2_territory-white_stones));
color(8,0);
printf("\n\n\n\t\t\t\t\t\t\t\t          PRESS ENTER TO CONTINUE  \n");

}

void winner2()
{


color(11,0);


printf("\n\n\n\t\t\t\t\t\t\t\t   YOU ARE THE WINNER WITH %.1f  POINTS \n",(player1_score+player1_territory+black_stones-player2_score-player2_territory-white_stones));
color(8,0);
printf("\n\n\n\t\t\t\t\t\t\t\t          PRESS ENTER TO CONTINUE  \n");

}


void randome_player_first(){

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");


printf("\n\n        \t\t\t\t\t\t\t\t      .");
color(14,14);
printf("aaaa");

color(8,0);
printf(" ");

color(11,11);
printf("    ");

color(8,0);
printf("      ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\t\t\t\t\t\t\t\t\t      .");
color(14,14);
printf("aaaa");

color(8,0);
printf(" ");

color(11,11);
printf("    ");

color(8,0);
printf("      ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

}


void randome_player_first2(){

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");


printf("\n\n        \t\t\t\t\t\t\t\t      .");
color(14,14);
printf("aaaa");

color(8,0);
printf(" ");

color(8,0);
printf("     ");

color(14,14);
printf("    ");

color(8,0);
printf(" ");

color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\t\t\t\t\t\t\t\t\t      .");
color(14,14);
printf("aaaa");

color(8,0);
printf(" ");

color(8,0);
printf("     ");

color(14,14);
printf("    ");

color(8,0);
printf(" ");

color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

//////////////////

printf("\n\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

printf("\n\t\t\t\t\t\t\t\t\t\t   .");
color(14,14);
printf("    ");
color(8,0);
printf(" ");
color(11,11);
printf("aaaa");
color(8,0);
printf(". ");

}
