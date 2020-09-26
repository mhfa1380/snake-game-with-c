#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>//delay
#include <unistd.h>//yadam nmiyad
#include <dos.h>//bip sound
#include <windows.h>//
///
//Beep(500, 200);//EAT
//Beep(800, 80);//TIME
////
int meel2=0,meel1=0;
///////////////////////
int eat_x=2,eat_y=2,bomb_x1=8,bomb_y1=9,bomb_x2=28,bomb_y2=15,bomb_x3=18,bomb_y3=19,timer_x=8,timer_y=9,eat2=150,score=0,tool=5, sorat=1,sorat2=0,y=10,x=30,rang=32,tim=0;
int arr_x[400]= {30},arr_y[400]= {10};
char jahat='r';
int cls=0;
int crlev=4;
//////////////// 2250 lines
void input();
void first_load();
void delay();
void gameover();
int level3();
int level1();
int level2();
int timer2();
int rang2();
int bomb();
int eat();
int menu();
int chap_mar();
int Logo();
int stop();
int res();
void input()
{
    if(_kbhit())
    {

        switch(_getch())
        {
        case 75: //chap
            if( jahat!='r')
            {
                jahat='l';
            }

            break;

        case 77: //rast
            if( jahat!='l')
            {
                jahat='r';
            }

            break;

        case 72: //bala
            if( jahat!='d')
            {
                jahat='u';
            }

            break;

        case 80: //paeen
            if( jahat!='u')
            {
                jahat='d';
            }

            break;

        case 32: //sorat
            if (sorat==0)
            {
                sorat2=sorat;
            }

            sorat=140;
            break;

        case 27: //stop
            Beep(750, 200);
            res();
            break;

        case 13: //stop
            Beep(750, 200);
            res();
            break;

        case 'a': //chap
            jahat='l';
            break;

        case 'd': //rast
            jahat='r';
            break;

        case 'w': //bala
            jahat='u';
            break;

        case 's': //paeen
            jahat='d';
            break;

        case 'A': //chap
            jahat='l';
            break;

        case 'D': //rast
            jahat='r';
            break;

        case 'W': //bala
            jahat='u';
            break;

        case 'S': //paeen
            jahat='d';
            break;

        }
    }


    for (register j = 0; j<tool; j++)
    {
        arr_x[j]=arr_x[j+1];
        arr_y[j]=arr_y[j+1];
    }
    arr_x[tool]=x;
    arr_y[tool]=y;

}
void first_load()
{
    for(int i = 0; i<=64; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 0, i, ' ');
        delay(4);
    }
    for(int i = 0; i<=24; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 64, ' ');
        delay(10);
    }
    for(int i = 64; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 24, i, ' ');
        delay(4);
    }
    for(int i = 24; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 0, ' ');
        delay(10);
    }
    //////////////////////////////////////
    for(int i = 68; i<=83; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 2, i, ' ');
        delay(10);
    }
    for(int i = 2; i<=6; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 83, ' ');
        delay(10);
    }
    for(int i = 83; i>=68; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 6, i, ' ');
        delay(10);
    }
    for(int i = 6; i>=2; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i,68, ' ');
        delay(10);
    }
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m", 10,68, "Help : ");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m", 9,75,  "| Arrow keys : Move");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m", 10,75, "| Space : Move Faster");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",11,75,  "| Esc or Enter : Pause");

    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",14,78, "|W|");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",16,84, "|D|");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",16,72, "|A|");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",16,78, "|S|");
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void gameover(int lev)
{
    system("@cls||clear");

    int al=0;
    int test=4;
    while(1)
    {
        while (al==0)
        {

            {

                char printe[] = {"\n Game Over ! \n "} ;
                for (int i = 0; i<=16; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }
            }
            {
                char printe[] = {"\n 1)Try Again ? "} ;
                for (int i = 0; i<=16; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }
            }

            {
                jahat='r';
                char printe[] = {"\n 2)Main Menu ? \n "} ;
                for (int i = 0; i<=20; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }
            }
            al++;
        }
        test=_getch();
        if (test=='1'&&lev==2)
        {
            score=0;
            eat2=100;
            Beep(750, 200);
            level2();
            jahat='r';
            return 0;
        }
        if (test=='1'&&lev==1)
        {
            for (int j = 0; j<70; j++)
            {
                arr_x[j]=0;
                arr_y[j]=0;
            }

            arr_x[3]=30;
            arr_y[3]=10;
            score=0;
            Beep(750, 200);
            level1();
            jahat='r';
            return 0;
        }
        if (test=='1'&&lev==3)
        {
            for (int j = 0; j<70; j++)
            {
                arr_x[j]=0;
                arr_y[j]=0;
            }

            arr_x[3]=30;
            arr_y[3]=10;
            score=0;
            Beep(750, 200);
            cls=1;
            level3();
            jahat='r';
            return 0;
        }
        if (test=='2')
        {
            cls=1;
            return 0;

        }
        system("@cls||clear");
        printf("\n Game Over ! \n\n 1)Try Again ?\n 2)Main Menu ? \n ");
        Beep(750, 200);

    }
}
int level3()  //bomb
{
    sorat=1;
    score=0;
    jahat='r';
    cls=0;
    tool=5;
    sorat2=sorat;
    crlev=3;
    sorat2=sorat;
    rang=32;
    eat2=100;
    system("@cls||clear");
    srand(time(0));
    first_load();
    printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",rang+11,20,68, 'F');
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",20,69, " : Food");
    printf("\033[3;41;97m\033[%d;%dH%c\033[0m",22,68, 'B');
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",22,69, " : Boomb");
    y=10,x=30;
    int close = 1;
    printf("\033[%d;%dH%s\n", 3, 70, "score : ");
    for (int j = 0; j<70; j++)
    {
        arr_x[j]=0;
        arr_y[j]=0;
    }

    arr_x[3]=30;
    arr_y[3]=10;
    eat();
    bomb();
    while (close==1)
    {
        chap_mar();
        input();
        for(register i = 2; i<=(tool-2); i++)
        {
            if (x==arr_x[i]&&y==arr_y[i])
            {
                eat2=0;
                break;
            }
        }
        if (eat2==0)
        {
            sorat=1;

            sorat2=sorat;
            for(int j=1; j<(tool-1); j++)
            {

                printf("\033[%d;%dH%c\n", arr_y[0], arr_x[0], ' ');
                printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", 31,arr_y[j], arr_x[j], '-');
                printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", 31,arr_y[tool-1], arr_x[tool-1], ' ');
                printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", 31,arr_y[tool], arr_x[tool], '+');

            }


            Beep(800, 1000);
            delay(1000);
            eat2=100;
            tool=5;
            gameover(3);

            return 0;
        }

        if(eat2==100)
        {

            bomb();
        }
        if(eat2==75)
        {
            bomb();
        }
        if(eat2==50)
        {
            bomb();
        }
        if(eat2==25)
        {

            bomb();
        }

        eat2--;
        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 5, 70, "Time :       ");
        if (eat2<100)
        {
            printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
        }
        else
        {
            printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
        }

        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 3, 70, "score : ");
        printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 3, 78, (score));
        if (cls==1)
        {
            level3();
            return 0;
        }
        if (cls==2)
        {

            return 0;
        }
        if (eat_x==x && eat_y==y)
        {

            Beep(300, 200);
            eat2=100;
            sorat=sorat2;
            if (sorat2!=140)
            {

                sorat+=2;
                sorat2=sorat;

            }

            score++;

            tool+=2;

            printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", rang,y, x, 'O');
            printf("\033[3;40;31m\033[%d;%dH%d\033[0m\n", 3, 78, (score));


            if (eat2<100)
            {
                printf("\033[3;40;31m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
            }
            else
            {
                printf("\033[3;40;31m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
            }

            delay(200);
            printf("\033[3;40;30m\033[%d;%dH%c\033[0m\n", y, x, ' ');
            arr_x[tool]=x;
            arr_y[tool]=y;
            rang2();
            eat();
            if (rang==36)
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",42,20,68, 'F');

            }
            else
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",rang+11,20,68, 'F');
            }

        }
        if (bomb_x1==x && bomb_y1==y)
        {
            sorat=1;
            sorat2=sorat;
            for(int j=1; j<(tool-1); j++)
            {

                printf("\033[%d;%dH%c\n", arr_y[0], arr_x[0], ' ');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[j], arr_x[j], '-');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[tool-1], arr_x[tool-1], ' ');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[tool], arr_x[tool], '+');

            }
            Beep(800, 900);
            delay(3000);
            eat2=100;
            tool=5;
            gameover(3);

            return 0;


        }
        if (bomb_x2==x && bomb_y2==y)
        {
            sorat=1;
            sorat2=sorat;
            for(int j=1; j<(tool-1); j++)
            {

                printf("\033[%d;%dH%c\n", arr_y[0], arr_x[0], ' ');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[j], arr_x[j], '-');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[tool-1], arr_x[tool-1], ' ');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[tool], arr_x[tool], '+');

            }
            Beep(800, 900);
            delay(3000);
            eat2=100;
            tool=5;
            gameover(3);

            return 0;


        }
        if (bomb_x3==x && bomb_y3==y)
        {
            sorat=1;
            sorat2=sorat;
            for(int j=1; j<(tool-1); j++)
            {

                printf("\033[%d;%dH%c\n", arr_y[0], arr_x[0], ' ');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[j], arr_x[j], '-');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[tool-1], arr_x[tool-1], ' ');
                printf("\033[3;40;31m\033[%d;%dH%c\033[0m\n", arr_y[tool], arr_x[tool], '+');

            }
            Beep(800, 900);
            delay(3000);
            eat2=100;
            tool=5;
            gameover(3);

            return 0;


        }
/////////////////////////////


        if (sorat>=110)
        {
            for(register j = 22; j>=2; j--)
            {
                printf("\033[3;41;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }
            printf("\033[3;41;93m\033[%d;%dH%s\033[0m", (sorat/6), 106, "|");
        }
        if (sorat>80&&sorat<110)
        {
            for(register j = 16; j>=2; j--)
            {
                printf("\033[3;43;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }
            printf("\033[3;43;93m\033[%d;%dH%s\033[0m", (sorat/6), 106, "|");
        }
        if (sorat<=80)
        {
            for(register j = (sorat/6); j>=2; j--)
            {
                printf("\033[3;42;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }

        }
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 1, 106, '_');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 23, 106, '^');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 24, 106, 'S');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 25, 106, 'p');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 26, 106, 'e');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, 106, 'e');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 28, 106, 'd');
        for(register j = 22; j>=(sorat/6)+1; j--)
        {
            printf("\033[3;40;93m\033[%d;%dH%s\033[0m", j,106, " \n");
        }
        //////////////////////

        if (jahat == 'u'&&y>0)//boro bala
        {
            y--;
            delay((190)-sorat);
            sorat=sorat2;
        }

        if (jahat == 'd' && y<25)//boro paeen
        {
            y++;
            delay((190)-sorat);
            sorat=sorat2;
        }
        if (jahat == 'l'&&x>0)//boro chap
        {
            x--;

            delay((140)-sorat);
            sorat=sorat2;
        }

        if (jahat == 'r'&&x<65)//boro rast
        {
            x++;

            delay((140)-sorat);
            sorat=sorat2;
        }
        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 27, 50, "| : Time");
        if (eat2==7)
        {
            Beep(800, 80);
            eat2--;
        }
        if (eat2==6)
        {
            Beep(800, 50);

        }
        if (eat2==5)
        {
            Beep(800, 50);

        }
        if (eat2==4)
        {
            Beep(800, 50);

        }
        if (eat2==3)
        {
            Beep(800, 50);

        }
        if (eat2==2)
        {
            Beep(800, 50);

        }
        if (eat2<=25)
        {
            for(register j = 49; j>=13; j--)
            {
                printf("\033[3;41;93m\033[%d;%dH%s\033[0m", 27, j, "<");
            }
            printf("\033[3;41;93m\033[%d;%dH%s\033[0m", 27, (eat2/2), "<");
        }
        if (eat2>25&&eat2<55)
        {
            for(register j = 49; j>=28; j--)
            {
                printf("\033[3;43;93m\033[%d;%dH%s\033[0m", 27, j, "<");
            }
            printf("\033[3;43;93m\033[%d;%dH%s\033[0m", 27, (eat2/2), "<");
        }
        if (eat2>=55)
        {
            printf("\033[3;42;93m\033[%d;%dH%s\033[0m", 27, (eat2/2), "<");
        }

        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, 0, '|');
        for(register j = (eat2/2)-1; j>=2; j--)
        {
            printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, j, ' ');
        }

        ////////////////////

    }


    return 0;
}
int level1()  //time
{
    rang=32;
    score=0;
    cls=0;
    jahat='r';
    tool=5;
    crlev=1;
    sorat=1;
    sorat2=sorat;

    eat2=200;
    system("@cls||clear");
    srand(time(0));
    first_load();
    printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",rang+11,20,68, 'F');
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",20,69, " : Food");
    printf("\033[3;41;97m\033[%d;%dH%c\033[0m",22,68, 'T');
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",22,69, " : Reset Timer");
    y=10,x=30;
    int close = 1;

    for (int j = 0; j<70; j++)
    {
        arr_x[j]=0;
        arr_y[j]=0;
    }

    arr_x[3]=30;
    arr_y[3]=10;
    eat();
    printf("\033[%d;%dH%d\n", 3, 78, (score));
    while (close==1)
    {

        chap_mar();
        input();
        for(register i = 2; i<=(tool-2); i++)
        {
            if (x==arr_x[i]&&y==arr_y[i])
            {
                eat2=0;
                break;
            }
        }
        if (eat2==0)
        {
            sorat=1;

            sorat2=sorat;
            for(int j=1; j<tool-1; j++)
            {
                printf("\033[%d;%dH%c\n", arr_y[0], arr_x[0], ' ');
                printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", 31,arr_y[j], arr_x[j], '-');
                printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", 31,arr_y[tool-1], arr_x[tool-1], ' ');
                printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", 31,arr_y[tool], arr_x[tool], 'O');

            }


            Beep(800, 1000);
            delay(1000);
            eat2=200;
            tool=5;
            gameover(1);

            return 0;
        }
        if(eat2==200&&(tim%2)==0)
        {
            tim++;
            timer2();
        }
        if(eat2==150)
        {
            eat();
            printf("\033[3;40;93m\033[%d;%dH%c\033[0m", (timer_y), (timer_x), ' ');
            timer_x=0;
            timer_y=0;

        }
        if(eat2==100&&(tim%2)!=0)
        {
            tim++;
            timer2();
        }
        if(eat2==50)
        {
            eat();
            printf("\033[3;40;93m\033[%d;%dH%c\033[0m", (timer_y), (timer_x), ' ');
            timer_x=0;
            timer_y=0;

        }
        if(eat2==35)
        {
            tim++;
            timer2();
        }
        if(eat2==0)
        {
            eat();
            printf("\033[3;40;93m\033[%d;%dH%c\033[0m", (timer_y), (timer_x), ' ');
            timer_x=0;
            timer_y=0;

        }

        eat2--;
        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 5, 70, "Time :       ");
        if (eat2<100)
        {
            printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
        }
        else
        {
            printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
        }

        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 3, 70, "score : ");
        printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 3, 78, (score));

        if (cls==1)
        {
            level1();
            return 0;
        }
        if (cls==2)
        {

            return 0;
        }
        if (eat_x==x && eat_y==y)
        {
            sorat=sorat2;
            if (sorat2!=140)
            {

                sorat+=2;
                sorat2=sorat;

            }
            Beep(300, 200);
            eat2+=10;

            score++;



            tool+=2;

            printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", rang,y, x, 'O');
            printf("\033[3;40;31m\033[%d;%dH%d\033[0m\n", 3, 78, (score));


            if (eat2<100)
            {
                printf("\033[3;40;31m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
            }
            else
            {
                printf("\033[3;40;31m\033[%d;%dH%d\033[0m\n", 5, 77, eat2);
            }

            delay(200);
            printf("\033[3;40;30m\033[%d;%dH%c\033[0m\n", arr_y[tool], arr_x[tool], ' ');
            rang2();
            eat();
            if (rang==36)
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",42,20,68, 'F');

            }
            else
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",rang+11,20,68, 'F');
            }

        }
//////////
        if (sorat>=110)
        {
            for(register j = 22; j>=2; j--)
            {
                printf("\033[3;41;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }
            printf("\033[3;41;93m\033[%d;%dH%s\033[0m", (sorat/6), 106, "|");
        }
        if (sorat>80&&sorat<110)
        {
            for(register j = 16; j>=2; j--)
            {
                printf("\033[3;43;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }
            printf("\033[3;43;93m\033[%d;%dH%s\033[0m", (sorat/6), 106, "|");
        }
        if (sorat<=80)
        {
            for(register j = (sorat/6); j>=2; j--)
            {
                printf("\033[3;42;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }

        }
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 1, 106, '_');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 23, 106, '^');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 24, 106, 'S');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 25, 106, 'p');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 26, 106, 'e');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, 106, 'e');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 28, 106, 'd');
        for(register j = 22; j>=(sorat/6)+1; j--)
        {
            printf("\033[3;40;93m\033[%d;%dH%s\033[0m", j,106, " \n");
        }

/////////
        if (timer_x==x && timer_y==y)
        {
            sorat=sorat2;
            if (sorat2!=140)
            {

                sorat+=2;
                sorat2=sorat;

            }

            timer_x=200;
            timer_y=100;
            Beep(500, 200);
            eat2=200;
        }

        if (jahat == 'u'&&y>0)//boro bala
        {
            y--;
            delay((190)-sorat);
            sorat=sorat2;
        }

        if (jahat == 'd' && y<25)//boro paeen
        {
            y++;
            delay((190)-sorat);
            sorat=sorat2;
        }
        if (jahat == 'l'&&x>0)//boro chap
        {
            x--;

            delay((140)-sorat);
            sorat=sorat2;
        }

        if (jahat == 'r'&&x<65)//boro rast
        {
            x++;

            delay((140)-sorat);
            sorat=sorat2;
        }
        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 27, 50, "| : Time");
        if (eat2==7)
        {
            Beep(800, 50);
        }
        if (eat2==6)
        {
            Beep(800, 50);
        }
        if (eat2==5)
        {
            Beep(800, 50);
        }
        if (eat2==4)
        {
            Beep(800, 50);
        }
        if (eat2==3)
        {
            Beep(800, 50);
        }
        if (eat2==2)
        {
            Beep(800, 50);
        }
        if (eat2<=50)
        {
            for(register j = 49; j>=13; j--)
            {
                printf("\033[3;41;93m\033[%d;%dH%s\033[0m", 27, j, "<");
            }
            printf("\033[3;41;93m\033[%d;%dH%s\033[0m", 27, (eat2/4), "<");
        }
        if (eat2>50&&eat2<110)
        {
            for(register j = 49; j>=28; j--)
            {
                printf("\033[3;43;93m\033[%d;%dH%s\033[0m", 27, j, "<");
            }
            printf("\033[3;43;93m\033[%d;%dH%s\033[0m", 27, (eat2/4), "<");
        }
        if (eat2>=110)
        {
            printf("\033[3;42;93m\033[%d;%dH%s\033[0m", 27, (eat2/4), "<");
        }

        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, 0, '|');
///////////


        for(register j = (eat2/4)-1; j>=2; j--)
        {
            printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, j, ' ');
        }
    }
    return 0;
}
int level2()  //divar
{
    sorat=1;
    score=0;
    jahat='r';
    cls=0;
    tool=5;
    sorat2=sorat;
    rang=32;
    crlev=2;
    system("@cls||clear");
    srand(time(0));
    first_load();
    for(int i = 60; i>=4; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 11, i, ' ');
        delay(4);
    }
    printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",rang+11,20,68, 'F');
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",20,69, " : Food");
    printf("\033[3;107;97m\033[%d;%dH%s\033[0m",22,68, " ");
    printf("\033[3;40;97m\033[%d;%dH%s\033[0m",22,69, " : Wall");
    y=10,x=30;
    for (int j = 0; j<70; j++)
    {
        arr_x[j]=0;
        arr_y[j]=0;
    }

    arr_x[3]=30;
    arr_y[3]=10;
    int close = 1;
    eat();
    while (close==1)
    {
        chap_mar();
        input();
        for(register i = 2; i<=(tool-2); i++)
        {
            if (x==arr_x[i]&&y==arr_y[i])
            {
                close=0;
                break;
            }
        }

        if (cls==1)
        {
            level2();
            return 0;
        }
        if (cls==2)
        {

            return 0;
        }
        printf("\033[3;40;97m\033[%d;%dH%s\033[0m\n", 4, 70, "score : ");
        if (eat_x==x && eat_y==y)
        {
            Beep(300, 200);



            sorat=sorat2;
            if (sorat2!=140)
            {

                sorat+=4;
                sorat2=sorat;

            }
            score++;
            tool+=2;
            printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", rang,y, x, 'O');
            printf("\033[3;40;97m\033[%d;%dH%d\033[0m\n", 4, 78, (score));
            delay(200);
            printf("\033[3;40;30m\033[%d;%dH%c\033[0m\n", y, x, ' ');
            arr_x[tool]=x;
            arr_y[tool]=y;
            rang2();
            eat();
            if (rang==36)
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",42,20,68, 'F');

            }
            else
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m",rang+11,20,68, 'F');
            }

        }
        if (sorat>=110)
        {
            for(register j = 22; j>=2; j--)
            {
                printf("\033[3;41;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }
            printf("\033[3;41;93m\033[%d;%dH%s\033[0m", (sorat/6), 106, "|");
        }
        if (sorat>80&&sorat<110)
        {
            for(register j = 16; j>=2; j--)
            {
                printf("\033[3;43;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }
            printf("\033[3;43;93m\033[%d;%dH%s\033[0m", (sorat/6), 106, "|");
        }
        if (sorat<=80)
        {
            for(register j = (sorat/6); j>=2; j--)
            {
                printf("\033[3;42;93m\033[%d;%dH%s\033[0m", j, 106, "|");
            }

        }
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 1, 106, '_');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 23, 106, '^');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 24, 106, 'S');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 25, 106, 'p');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 26, 106, 'e');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 27, 106, 'e');
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", 28, 106, 'd');
        for(register j = 22; j>=(sorat/6)+1; j--)
        {
            printf("\033[3;40;93m\033[%d;%dH%s\033[0m", j,106, " \n");
        }
        //////////////////////

        if (x==1||x==64||y==24||y==1||(x<=60&&x>=4&&y==11))
        {
            close=0;
            break;
        }
        if (jahat == 'u'&&y>0)//boro bala
        {
            y--;
            delay((190)-sorat);
            sorat=sorat2;
        }

        if (jahat == 'd' && y<25)//boro paeen
        {
            y++;
            delay((190)-sorat);
            sorat=sorat2;
        }
        if (jahat == 'l'&&x>0)//boro chap
        {
            x--;

            delay((140)-sorat);
            sorat=sorat2;
        }

        if (jahat == 'r'&&x<65)//boro rast
        {
            x++;

            delay((140)-sorat);
            sorat=sorat2;
        }

    }
    Beep(800, 1000);

    delay(1000);
    gameover(2);
    return 0;

}
int timer2()
{
    printf("\033[3;40;97m\033[%d;%dH%c\033[0m", (timer_y), (timer_x), ' ');
    timer_x = ((rand()%60)+2);
    timer_y = ((rand()%21)+2);
    for(int j=0; j<tool; j++)
    {
        if(arr_x[j]==timer_x&&arr_y[j]==timer_y)
        {
            timer_x = ((rand()%60)+2);
            timer_y = ((rand()%21)+2);
            j=0;
        }
    }
    while (timer_x==eat_x&&timer_x==eat_y)
    {
        timer_x = ((rand()%60)+2);
        timer_y = ((rand()%21)+2);
    }
    printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (timer_y), (timer_x), 'T');
}
int rang2()
{
    if (rang==32)
    {
        rang=33;
        return 0 ;
    }
    if (rang==33)
    {
        rang=34;
        return 0 ;
    }
    if (rang==34)
    {
        rang=35;
        return 0 ;
    }
    if (rang==35)
    {
        rang=36;
        return 0 ;
    }
    if (rang==36)
    {
        rang=32;
        return 0 ;
    }
}
int bomb()
{
    printf("\033[%d;%dH%c\n", (bomb_y1), (bomb_x1), ' ');
    printf("\033[%d;%dH%c\n", (bomb_y2), (bomb_x2), ' ');
    printf("\033[%d;%dH%c\n", (bomb_y3), (bomb_x3), ' ');
    bomb_x1 = ((rand()%60)+2);
    bomb_y1 = ((rand()%21)+2);
    bomb_x2 = ((rand()%60)+2);
    bomb_y2 = ((rand()%21)+2);
    bomb_x3 = ((rand()%60)+2);
    bomb_y3 = ((rand()%21)+2);


    while (bomb_x1==eat_x&&bomb_y1==eat_y||bomb_x1==x+1||bomb_y1==y+1||bomb_x1==x-1||bomb_y1==y-1||bomb_x1==x+2||bomb_y1==y+2||bomb_x1==x-2||bomb_y1==y-2||bomb_x1==x+3||bomb_y1==y+3||bomb_x1==x-3||bomb_y1==y-3)
    {
        bomb_x1 = ((rand()%60)+2);
        bomb_y1 = ((rand()%21)+2);

    }
    while (bomb_x2==eat_x&&bomb_y2==eat_y||bomb_x2==x+1||bomb_y2==y+1||bomb_x2==x-1||bomb_y2==y-1||bomb_x2==x+2||bomb_y2==y+2||bomb_x2==x-2||bomb_y2==y-2||bomb_x2==x+3||bomb_y2==y+3||bomb_x2==x-3||bomb_y2==y-3)
    {

        bomb_x2 = ((rand()%60)+2);
        bomb_y2 = ((rand()%21)+2);

    }
    while (bomb_x3==eat_x&&bomb_y3==eat_y||bomb_x3==x+1||bomb_y3==y+1||bomb_x3==x-1||bomb_y3==y-1||bomb_x3==x+2||bomb_y3==y+2||bomb_x3==x-2||bomb_y3==y-2||bomb_x3==x+3||bomb_y3==y+3||bomb_x3==x-3||bomb_y3==y-3)
    {

        bomb_x3 = ((rand()%60)+2);
        bomb_y3 = ((rand()%21)+2);
    }
    for(int j=0; j<tool; j++)
    {
        if(arr_x[j]==bomb_x1&&arr_y[j]==bomb_y1)
        {
            bomb_x1 = ((rand()%60)+2);
            bomb_y1 = ((rand()%21)+2);
            j=0;
        }
        if(arr_x[j]==bomb_x2&&arr_y[j]==bomb_y2)
        {
            bomb_x2 = ((rand()%60)+2);
            bomb_y2 = ((rand()%21)+2);
            j=0;
        }
        if(arr_x[j]==bomb_x3&&arr_y[j]==bomb_y3)
        {
            bomb_x3 = ((rand()%60)+2);
            bomb_y3 = ((rand()%21)+2);
            j=0;
        }
    }
    printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y1), (bomb_x1), 'B');
    printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y2), (bomb_x2), 'B');
    printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y3), (bomb_x3), 'B');
}
int eat()
{

    printf("\033[%d;%dH%c\n", (eat_y), (eat_x), ' ');
    eat_x = ((rand()%60)+2);
    eat_y = ((rand()%21)+2);
    for(int j=0; j<tool; j++)
    {
        if(arr_x[j]==eat_x&&arr_y[j]==eat_y)
        {
            eat_x = ((rand()%60)+2);
            eat_y = ((rand()%21)+2);
            j=0;
        }
    }
    while(eat_x<=60&&eat_x>=4&&eat_y==11)
    {
        eat_y = ((rand()%21)+2);
    }
    while (bomb_x1==eat_x&&bomb_y1==eat_y||bomb_x2==eat_x&&bomb_y2==eat_y||bomb_x3==eat_x&&bomb_y3==eat_y)
    {
        eat_x = ((rand()%60)+2);
        eat_y = ((rand()%21)+2);
    }
    if (rang==36)
    {
        printf("\033[3;%d;97m\033[%d;%dH%c\033[0m", 42,(eat_y), (eat_x), 'F');
    }
    else
    {
        printf("\033[3;%d;97m\033[%d;%dH%c\033[0m", (rang+11),(eat_y), (eat_x), 'F');
    }

}
int about()
{
    system("@cls||clear");
    for(register i = 0; i<100; i++)
    {
        for(int j = 0; j<230; j++)
        {
            printf("\033[3;104;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        }
    }
    /////////////////////////////
    int s1=35,s2=37,s3=42,s4=44,s5=49,s6=51,s7=56,s8=58,s9=88;
    for (int j = 89; j>=0; j--)
    {
        s1--;
        s2--;
        s3--;
        s4--;
        s5--;
        s6--;
        s7--;
        s8--;
        s9--;

        if (s1<=34 && s1>=4)
        {
            printf("\033[3;104;97m\033[%d;%dH%s\033[0m", s1-3, 55, "                         ");
            printf("\033[3;104;30m\033[%d;%dH%s\033[0m", s1-4, 57, "Programers");
        }

        if (s2<=34 && s2>=4)
        {
            printf("\033[3;104;97m\033[%d;%dH%s\033[0m", s2-4, 50, "Mohammad Hossein Fadavi");
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s2-3, 35, "                                                   ");

        }

        if (s3<=30 && s3>=0)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s3+1, 55, "                                                   ");
            printf("\033[3;104;30m\033[%d;%dH%s\033[0m", s3, 57, "Professor");
        }
        if (s4<=30 && s4>=0)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s4+1, 45, "                                                   ");
            printf("\033[3;104;97m\033[%d;%dH%s\033[0m", s4, 57, "Dr.Bastam");
        }
        if (s5<=30 && s5>=0)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s5+1, 35, "                                                   ");
            printf("\033[3;104;30m\033[%d;%dH%s\033[0m", s5, 53, "Teacher assistant");
        }
        if (s6<=30 && s6>=0)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s6+1, 35, "                                                   ");
            printf("\033[3;104;97m\033[%d;%dH%s\033[0m", s6, 55, "Miss.Ghoreyshi");
        }
        if (s7<=30 && s7>=0)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s7+1, 55, "                                                   ");
            printf("\033[3;104;30m\033[%d;%dH%s\033[0m", s7, 58, "student of");
        }
        if (s8<=30 && s8>=0)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s8+1, 35, "                                                   ");
            printf("\033[3;104;97m\033[%d;%dH%s\033[0m", s8, 50, "UNIVERSITY OF MAZANDARAN");
        }
        if (s9<=30 && s9>=15)
        {
            printf("\033[3;104;93m\033[%d;%dH%s\033[0m", s9+1, 35, "                                                        ");
            printf("\033[3;104;97m\033[%d;%dH%s\033[0m", s9, 43, "Thanks for choosing Snake Game.");
        }
        printf("\033[3;104;93m\033[%d;%dH%s\033[0m", 0, 25, "                                                                     ");
        printf("\033[3;104;93m\033[%d;%dH%s\033[0m", 1, 25, "                                                                     ");
        printf("\033[3;104;93m\033[%d;%dH%s\033[0m", 2, 25, "                                                                     ");
        //Thank you very much for choosing us.
        delay(150);
    }

    for(register i = 0; i<100; i++)
    {
        for(int j = 0; j<230; j++)
        {
            printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        }
    }


    system("@cls||clear");
    {
        char printe[] = {"\n\n 1)see about again? \n 2)go to main menu? \n\n        "} ;
        printf("\r");

        for (int i = 0; i<=(48); i++)
        {
            printf("%c \b",printe[i]);
            Beep(50, 50);
        }
        int menu2=0;
        int te=0;

        while(te==0)
        {
            system("@cls||clear");
            printf("\n\n 1)see about again? \n 2)go to main menu? \n\n ");
            menu2=_getch();
            if (menu2=='1')
            {
                Beep(750, 200);
                about();
                return 0;
                te==1;
            }
            if (menu2=='2')
            {
                Beep(750, 200);
                te==1;
                return 0;
            }
            Beep(750, 200);
        }


    }

}
int menu()
{
    system("@cls||clear");
    int khoroj=1;
    while (khoroj==1)
    {
        while(meel2==0)
        {


            system("@cls||clear");

            {
                char printe[] = {"\n Menu: \n "} ;
                for (int i = 0; i<=9; i++)
                {
                    printf("%c",printe[i]);

                    delay(50);
                }
            }

            {

                char printe[] = {"     |1) Play \n"} ;
                for (int i = 0; i<=15; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }

            }


            {

                char printe[] = {"     |2) About \n"} ;
                for (int i = 0; i<=16; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }

            }
            {

                char printe[] = {"     |3) Update \n"} ;
                for (int i = 0; i<=17; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }

            }

            {

                char printe[] = {"     |4) Exit \n"} ;
                for (int i = 0; i<=15; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }

            }

            {

                char printe[] = {"\n Which one ?\n"} ;
                for (int i = 0; i<=15; i++)
                {
                    printf("%c",printe[i]);
                    Beep(50, 50);
                }
            }
            meel2=1;
        }
        system("@cls||clear");
        printf("\n Menu: \n");
        printf("      |1) Play \n");
        printf("      |2) About \n");
        printf("      |3) Update \n");
        printf("      |4) Exit \n");
        printf("\n Which one ? \n");
        int menu=5,x=1;
        menu= _getch();
        Beep(750, 200);
        int me=0;
        while(x==1)
        {

            if (menu == '1')
            {
                Beep(750, 200);
                int bare=0;
                while(meel1==0)
                {

                    system("@cls||clear");
                    {
                        char printe[] = {"\n Game Mode: \n\n"} ;
                        for (int i = 0; i<=15; i++)
                        {
                            printf("%c",printe[i]);

                            delay(80);
                        }
                    }

                    {

                        char printe[] = {"     |1) No wall \n"} ;
                        for (int i = 0; i<=18; i++)
                        {
                            printf("%c",printe[i]);
                            Beep(50, 50);
                        }

                    }
                    {

                        char printe[] = {"     |2) Boombs \n"} ;
                        for (int i = 0; i<=17; i++)
                        {
                            printf("%c",printe[i]);
                            Beep(50, 50);
                        }

                    }
                    {

                        char printe[] = {"     |3) Time \n"} ;
                        for (int i = 0; i<=15; i++)
                        {
                            printf("%c",printe[i]);
                            Beep(50, 50);
                        }

                    }
                    {

                        char printe[] = {"     |4) Main Munu \n\n"} ;
                        for (int i = 0; i<=22; i++)
                        {
                            printf("%c",printe[i]);
                            Beep(50, 50);
                        }

                    }
                    meel1=1;
                }
                system("@cls||clear");
                printf("\n Game Mode: \n\n");
                printf("      |1) No wall \n");
                printf("      |2) Boombs \n");
                printf("      |3) Time \n");
                printf("      |4) Main Munu \n\n");
                while(bare==0)
                {
                    {
                        printf("\r                   \r");
                        char printe[] = {" Which One ? "} ;
                        for (int i = 0; i<=12; i++)
                        {
                            printf("%c",printe[i]);
                            Beep(50, 50);
                        }

                    }
                    me=_getch();
                    Beep(750, 200);
                    if(me=='1')
                    {
                        level2();
                        bare=1;
                    }
                    if(me=='2')
                    {
                        level3();
                        bare=1;
                    }
                    if(me=='3')
                    {
                        level1();
                        bare=1;
                    }
                    if(me=='4')
                    {
                        bare=1;
                        break;
                    }

                    Beep(750, 200);
                }
            }

            if (menu == '2')
            {
                Beep(750, 200);
                about();
                break;
            }
            if (menu == '3')
            {
                Beep(750, 200);
                system ("Updater.exe");

                break;
            }
            if (menu == '4')
            {
                Beep(750, 200);
                khoroj=0;
                break;
            }
            system("@cls||clear");
            printf("\n Menu: \n");
            printf("      |1) Play \n");
            printf("      |2) About \n");
            printf("      |3) Update \n");
            printf("      |4) Exit \n");
            printf("\n Which one ? \n");
            menu=_getch();
            Beep(750, 200);
        }


    }
}
int chap_mar()
{
    input();
    if (y==0)
    {
        y=24;

        arr_y[tool]=y;
    }
    if (y==25)
    {
        y=1;
        arr_y[tool]=y;
    }
    if (x==0)
    {
        x=64;
        arr_x[tool]=x;

    }
    if (x==65)
    {
        x=1;
        arr_x[tool]=x;

    }
    for(register i = 0; i<=64; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 0, i, ' ');

    }
    for(register i = 0; i<=24; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 64, ' ');

    }
    for(register i = 64; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 24, i, ' ');

    }
    for(register i = 24; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 0, ' ');

    }






    for(register j=1; j<(tool-1); j++)
    {


        printf("\033[%d;%dH%c\n", arr_y[0], arr_x[0], ' ');
        printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", rang,arr_y[j], arr_x[j], '-');
        printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n",rang,arr_y[tool-1], arr_x[tool-1], ' ');
        printf("\033[3;40;%dm\033[%d;%dH%c\033[0m\n", rang,arr_y[tool], arr_x[tool], 'o');

    }

}
int Logo()
{

    for(int i = 0; i<63; i++)
    {
        for(int j = 0; j<230; j++)
        {
            printf("\033[3;44;30m\033[%d;%dH%c\033[0m", i, j, ' ');
        }
    }
////    S
    for(int i = 28; i>=22; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 10, i, ' ');
        delay(30);
    }
    for(int i = 10; i<=14; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 22, ' ');
        delay(30);
    }
    for(int i = 22; i<=28; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 14, i, ' ');
        delay(30);
    }
    for(int i = 14; i<=18; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 28, ' ');
        delay(30);
    }
    for(int i = 28; i>=22; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 18, i, ' ');
        delay(30);
    }
/////// N

    for(int i = 18; i>=10; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 32, ' ');
        delay(30);
    }

    for(int i = 10, j=32; i<=18; i++,j++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        delay(30);
    }
    for(int i = 18; i>=10; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 40, ' ');
        delay(30);
    }

/////// A
    for(int i = 18, j=44; i>=10; j++,i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        delay(30);
    }
    for(int i = 10, j=52; i<=18; j++,i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        delay(30);
    }
    for(int i = 48; i<=56; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 14, i, ' ');
        delay(30);
    }

////// K
    for(int i = 18; i>=10; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 64, ' ');
        delay(30);
    }
    for(int i = 14, j=64; i>=10; j++,i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        delay(30);
    }
    for(int i = 14, j=64; i<=18; j++,i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, j, ' ');
        delay(30);
    }

/// E
    for(int i = 80; i>=72; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 10, i, ' ');
        delay(30);
    }
    for(int i = 10; i<=18; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 72, ' ');
        delay(30);
    }
    for(int i = 72; i<=80; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 18, i, ' ');
        delay(30);
    }
    for(int i = 72; i<=80; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 14, i, ' ');
        delay(30);
    }

    delay(1500);
}
int stop()
{
    for(int i = 0; i<=64; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 0, i, ' ');

    }
    for(int i = 0; i<=24; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i, 64, ' ');

    }
    for(int i = 64; i>=0; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 24, i, ' ');

    }
    for(int i = 24; i>=0; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i, 0, ' ');

    }
    //////////////////////////////////////
    for(int i = 68; i<=83; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 2, i, ' ');

    }
    for(int i = 2; i<=6; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i, 83, ' ');

    }
    for(int i = 83; i>=68; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 6, i, ' ');

    }
    for(int i = 6; i>=2; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i,68, ' ');

    }
    //////////////////////////////////
    if(crlev==2)
        for(int i = 60; i>=4; i--)
        {
            printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 11, i, ' ');

        }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 26, ' ');

    }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 38, ' ');

    }

//_getch();

    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, 26, ' ');

    }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, 38, ' ');

    }

/////////////////


    for(int i = 8; i<=16; i++)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, 30, ' ');

    }
    for(int i = 8, j=30; i<=12; i++,j++)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, j, ' ');

    }
    for(int i = 16, j=30; i>=12; j++,i--)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, j, ' ');

    }
    if (rang==36)
    {
        printf("\033[3;%d;97m\033[%d;%dH%c\033[0m", 42,(eat_y), (eat_x), 'F');
    }
    else
    {
        printf("\033[3;%d;97m\033[%d;%dH%c\033[0m", (rang+11),(eat_y), (eat_x), 'F');
    }
    if (crlev==3)
    {
        printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y1), (bomb_x1), 'B');
        printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y2), (bomb_x2), 'B');
        printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y3), (bomb_x3), 'B');
    }
    if(crlev==2)
        for(int i = 60; i>=4; i--)
        {
            printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 11, i, ' ');

        }

//////
    for(int i = 0; i<=64; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 0, i, ' ');

    }
    for(int i = 0; i<=24; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 64, ' ');

    }
    for(int i = 64; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 24, i, ' ');

    }
    for(int i = 24; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 0, ' ');

    }
    //////////////////////////////////////
    for(int i = 68; i<=83; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 2, i, ' ');

    }
    for(int i = 2; i<=6; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 83, ' ');

    }
    for(int i = 83; i>=68; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 6, i, ' ');

    }
    for(int i = 6; i>=2; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i,68, ' ');

    }
}
int res()
{
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 3, 4, "                     ");
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 4, 4, "                         ");
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 5, 4, "                         ");
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 6, 4, "                         ");

    for(int i = 0; i<=64; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 0, i, ' ');

    }
    for(int i = 0; i<=24; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i, 64, ' ');

    }
    for(int i = 64; i>=0; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 24, i, ' ');

    }
    for(int i = 24; i>=0; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i, 0, ' ');

    }
    //////////////////////////////////////
    for(int i = 68; i<=83; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 2, i, ' ');

    }
    for(int i = 2; i<=6; i++)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i, 83, ' ');

    }
    for(int i = 83; i>=68; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 6, i, ' ');

    }
    for(int i = 6; i>=2; i--)
    {
        printf("\033[3;100;93m\033[%d;%dH%c\033[0m", i,68, ' ');

    }
    //////////////////////////////////
    if(crlev==2)
        for(int i = 60; i>=4; i--)
        {
            printf("\033[3;100;93m\033[%d;%dH%c\033[0m", 11, i, ' ');

        }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 26, ' ');

    }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 38, ' ');

    }
///////////////////////////////////////////////////////res
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 3, 4, "|1) New Game  ?");
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 4, 4, "|2) Continue  ?");
    printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 5, 4, "|3) Main Menu ?");
    char men='4';
    while(1)
    {
        men= _getch();

        if (men=='1')
        {
            Beep(750, 200);
            cls=1;
            return 0;
        }
        if (men=='2'||men!='1'&&men!='3'&&men!='2')
        {
            Beep(750, 200);
            printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 3, 4, "               ");
            printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 4, 4, "               ");
            printf("\033[3;40;93m\033[%d;%dH%s\033[0m", 5, 4, "               ");
            if (rang==36)
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m", 42,(eat_y), (eat_x), 'F');
            }
            else
            {
                printf("\033[3;%d;97m\033[%d;%dH%c\033[0m", (rang+11),(eat_y), (eat_x), 'F');
            }
            if (crlev==3)
            {
                printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y1), (bomb_x1), 'B');
                printf("\033[3;41;97m\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y2), (bomb_x2), 'B');
                printf("\033[3;41;97m\033[%d;%dH%c\033[0m", (bomb_y3), (bomb_x3), 'B');
            }
            if(crlev==2)
                for(int i = 60; i>=4; i--)
                {
                    printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 11, i, ' ');

                }

//////

            break;
        }
        if (men=='3')
        {
            Beep(750, 200);
            cls=2;
            return 0;
        }
        Beep(750, 200);
    }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, 26, ' ');

    }
    for(int i = 9; i<=16; i++)
    {
        printf("\033[3;40;93m\033[%d;%dH%c\033[0m", i, 38, ' ');

    }

/////////////////

    for(int i = 0; i<=64; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 0, i, ' ');

    }
    for(int i = 0; i<=24; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 64, ' ');

    }
    for(int i = 64; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 24, i, ' ');

    }
    for(int i = 24; i>=0; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 0, ' ');

    }
    //////////////////////////////////////
    for(int i = 68; i<=83; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 2, i, ' ');

    }
    for(int i = 2; i<=6; i++)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i, 83, ' ');

    }
    for(int i = 83; i>=68; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", 6, i, ' ');

    }
    for(int i = 6; i>=2; i--)
    {
        printf("\033[3;107;93m\033[%d;%dH%c\033[0m", i,68, ' ');

    }

}
int main()
{

    for (int j = 0; j<70; j++)
    {
        arr_x[j]=0;
        arr_y[j]=0;
    }

    arr_x[3]=30;
    arr_y[3]=10;
    system("@cls||clear");
    //level3();
    int ro=2,z=0;
    while(1)
    {
        for(register i = 0; i<100; i++)
        {
            for(int j = 0; j<230; j++)
            {
                printf("\033[3;104;93m\033[%d;%dH%c\033[0m", i, j, ' ');
            }
        }

        for(register i = 0; i<60; i++)
        {
            for(register j = 0; j<230; j++)
            {
                //printf("\033[3;104;93m\033[%d;%dH%c\033[0m", i, j, ' ');
                printf("\033[3;104;97m\033[%d;%dH%s\033[0m",12, 2, "Loading");



                if(i<=(25*ro))
                {

                    printf("\033[3;104;97m\033[%d;%dH%d %%\033[0m", 12, i+12, z);
                    printf("\033[3;107;37m\033[%d;%dH%c\033[0m",12, (i+11), ' ');
                }

            }
            if(i<=50)
            {
                z++;
            }

        }
        ro+=2;
        for(register i = 0; i<63; i++)
        {
            for(register j = 0; j<230; j++)
            {
                //printf("\033[3;44;30m\033[%d;%dH%c\033[0m", i, j, ' ');
                printf("\033[3;104;97m\033[%d;%dH%s\033[0m", 12, 2, "Loading");

                if(j<=50)
                {

                    printf("\033[3;107;30m\033[%d;%dH%c\033[0m",12, (j+11), ' ');
                }



                if(i<=(25*ro)-50)
                {
                    printf("\033[3;104;97m\033[%d;%dH%d %%\033[0m", 12, (i+61), z);
                    printf("\033[3;107;30m\033[%d;%dH%c\033[0m",12, (i+60), ' ');
                }
            }
            if(i<=48)
            {
                z++;
            }
        }


        if (ro==4)
        {
            break;
        }

    }

    for(register i = 0; i<60; i++)
    {
        for(register j = 0; j<230; j++)
        {
            printf("\033[3;44;93m\033[%d;%dH%c\033[0m", i, j, ' ');

        }
    }
    Logo();
    for(int i = 0; i<63; i++)
    {
        for(int j = 0; j<230; j++)
        {
            printf("\033[3;40;30m\033[%d;%dH%c\033[0m", i, j, ' ');
        }
    }

    system("@cls||clear");


    printf("\a");
    delay(1000);
    menu();

    system("@cls||clear");


    while(1)
    {

        system("@cls||clear");
        char printe2[] = {"\n Are you sure you want to quit? (Y/N) \n "} ;
        for (int j = 0; j<=40; j++)
        {
            printf("%c",printe2[j]);
            Beep(50, 50);

        }


        char cheack;
        cheack = _getch();
        if (cheack == 'y' || cheack == 'Y')
        {
            Beep(750, 200);
            delay(300);
            system("@cls||clear");
            printf("\n ");
            char printe[] = {"Bye Bye !"} ;
            for (int i = 0; i<=8; i++)
            {
                printf("%c",printe[i]);
                Beep(50, 50);
                delay(120);
            }
            printf("\n\n\n ");
            printf("\a");
            break;
        }

        if (cheack == 'n' || cheack == 'N')
        {
            Beep(750, 200);
            menu();

        }
        Beep(750, 200);
    }

    int cheack;
    cheack = _getch();

}
