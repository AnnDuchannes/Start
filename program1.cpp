#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

    const int n=21;
    int st[n][n]; //ìàòðèöà
    int i,j; //ñòàíä. ñ÷åò÷èêè
    int m=1, r=16; //ïåðåìåííûå ïîìîãàþùèå â äâèæåíèè ïàêìåíà
    int way; //ïåðåìåííàÿ, îòâå÷àþùàÿ çà íàïðàâëåíèå ïóòè ïàêìåíà
    int ahead1=3, back1=0, t1=6, k1=17; //ïåðåìåííûå äëÿ 1 ïðèçðàêà
    int ahead2=8, back2=0, t2=2, k2=11; //ïåðåìåííûå äëÿ 2 ïðèçðàêà
    int ahead3=3, back3=0, t3=2, k3=5; //ïåðåìåííûå äëÿ 3 ïðèçðàêà
    int ahead4=5, back4=0, t4=16, k4=10; //ïåðåìåííûå äëÿ 4 ïðèçðàêà
    int ahead5=3, back5=0, left5=0, right5=0, t5=16, k5=4; //ïåðåìåííûå äëÿ 4 ïðèçðàêà
    int money=0; //ñ÷åò÷èê ìîíåò

//Ïîñòðîåíèå ëàáèðèíòà
void labirint (void)
{
    int i,j;
    for (j=1; j<=n; j++) st[1][j]=22; /*Çàïîëíåíèå ëàáèðèíòà*/
     
    st[1][16]=2;
        
    for (j=2; j<=19; j++) st[2][j]=0;
        
        st[2][1]=22;
        st[2][8]=22;
        st[2][12]=22;
        st[2][15]=22;
        st[2][20]=22;
        
    for (j=1; j<=n; j++) st[3][j]=22;
        
        st[3][5]=0;
        st[3][9]=0;
        st[3][11]=0;
        st[3][13]=0;
        st[3][19]=0;
        
    for (j=2; j<=19; j++) st[4][j]=0;
        
        st[4][1]=22;
        st[4][4]=22;
        st[4][6]=22;
        st[4][8]=22;
        st[4][10]=22;
        st[4][14]=22;
        st[4][17]=22;
        st[4][20]=22;
        
    for (j=2; j<=19; j++) st[5][j]=0;
    for (j=8; j<=10; j++) st[5][j]=22;
        
        st[5][1]=22;
        
    for (j=12; j<=15; j++) st[5][j]=22;
    for (j=17; j<=18; j++) st[5][j]=22;  
    
        st[5][20]=22;
        
    for (j=2; j<=19; j++) st[6][j]=0;
     
        st[6][1]=22;
    
    for (j=3; j<=6; j++) st[6][j]=22;
    
        st[6][9]=22;
        st[6][12]=22;
        st[6][14]=22;
        st[6][20]=22;
    
    for (j=2; j<=19; j++) st[7][j]=0;
    
        st[7][1]=22;
        st[7][3]=22;
        st[7][12]=22;
        st[7][16]=22;
        st[7][14]=22;
        st[7][18]=22;
        st[7][20]=22;
        
    for (j=2; j<=19; j++) st[8][j]=0;
    for (j=3; j<=5; j++) st[8][j]=22;
    for (j=18; j<=20; j++) st[8][j]=22;
    
        st[8][1]=22;
        st[8][7]=22;
        st[8][9]=22;
        st[8][16]=22;
        st[8][12]=22;
        
    for (j=2; j<=19; j++) st[9][j]=0;
    for (j=9; j<=10; j++) st[9][j]=22;
    for (j=12; j<=14; j++) st[9][j]=22;
    
        st[9][1]=22;
        st[9][5]=22;
        st[9][7]=22;
        st[9][20]=22;
    
    for (j=4; j<=19; j++) st[10][j]=0;
    for (j=1; j<=3; j++) st[10][j]=22;
    for (j=16; j<=18; j++) st[10][j]=22;
    
        st[10][5]=22;
        st[10][7]=22;
        st[10][9]=22;
        st[10][14]=22;
        st[10][20]=22;
    
    for (j=4; j<=19; j++) st[10][j]=0;
    for (j=1; j<=3; j++) st[10][j]=22;
    for (j=16; j<=18; j++) st[10][j]=22;
    
        st[10][5]=22;
        st[10][7]=22;
        st[10][9]=22;
        st[10][14]=22;
        st[10][20]=22;
        
    for (j=2; j<=n; j++) st[11][j]=0;
    for (j=7; j<=9; j++) st[11][j]=22;
    for (j=11; j<=14; j++) st[11][j]=22;
    
        st[11][1]=22;
        st[11][3]=22;
        st[11][16]=22;
        st[11][20]=22;
    
    for (j=2; j<=19; j++) st[12][j]=0;
    
        st[12][1]=22;
        st[12][5]=22;
        st[12][7]=22;
        st[12][9]=22;
        st[12][11]=22;
        st[12][16]=22;
        st[12][20]=22;
    
    for (j=2; j<=19; j++) st[13][j]=0;
    for (j=3; j<=5; j++) st[13][j]=22;
    for (j=13; j<=16; j++) st[13][j]=22;
    
        st[13][1]=22;
        st[13][11]=22;
        st[13][18]=22;
        st[13][20]=22;
    
    for (j=2; j<=19; j++) st[14][j]=0;
    for (j=7; j<=9; j++) st[14][j]=22;
    
        st[14][1]=22;
        st[14][4]=22;
        st[14][13]=22;
        st[14][15]=22;
        st[14][18]=22;
        st[14][20]=22;
    
    for (j=1; j<=n; j++) st[15][j]=22;
    
        st[15][3]=0;
        st[15][6]=0;
        st[15][8]=0;
        st[15][10]=0;
        st[15][14]=0;
        st[15][17]=0;
    
    for (j=2; j<=19; j++) st[16][j]=0;
    
        st[16][1]=22;
        st[16][9]=22;
        st[16][16]=22;
        st[16][20]=22;
        
    for (j=2; j<=19; j++) st[17][j]=0;
    for (j=5; j<=7; j++) st[17][j]=22;
    for (j=16; j<=18; j++) st[17][j]=22;
    
        st[17][1]=22;
        st[17][3]=22;
        st[17][11]=22;
        st[17][14]=22;
        st[17][20]=22;
        
    for (j=2; j<=19; j++) st[18][j]=0;
    for (j=7; j<=11; j++) st[18][j]=22;
    for (j=13; j<=14; j++) st[18][j]=22;
    
        st[18][1]=22;
        st[18][3]=22;
        st[18][18]=22;
        st[18][20]=22;  
    
    for (j=2; j<=19; j++) st[19][j]=0;
    
        st[19][1]=22;
        st[19][5]=22;
        st[19][13]=22;
        st[19][16]=22;
        st[19][20]=22;
    
    for (j=1; j<=20; j++) st[20][j]=22;
    
        st[20][6]=5;
    
    //Íà÷àëüíûå ïîçèöèè ïðèçðàêîâ
    st[6][17]=3;
    st[2][11]=3;
    st[2][5]=3;
    st[16][10]=3;
    st[16][4]=3;
    
    /*Ìîíåòû*/
    st[5][2]=4;
    st[10][8]=4;
    st[2][10]=4;
    st[4][13]=4;
    st[14][14]=4;
    st[15][8]=4;
    st[17][3]=4; 
 
}

//Äâèæåíèå ïàêìåíà
void pacman (void)
{
    scanf("%d", &way);
    switch(way){ /*Âûáîð ïóòè äëÿ ïàêìåíà*/
    case 2: 
        {
        printf("Up.\n");
        if ((st[i+1][j]!=5)&&(st[i+1][j]!=22)||(st[i+1][j]==0)||(st[i+1][j]==4))
            {
                if (st[i][j]==3)
                {
                    getch();
                }
            st[i][j]=0;
            st[i+1][j]=2;
            m=i+1;
            r=j;
            }
        else {break;};
        break;
        }
    case 1: 
        {
        printf("Left.\n");
        if ((st[i][j-1]!=22)||(st[i][j-1]==0)||(st[i][j-1]==4))
            {
                if (st[i][j-1]==3)
                {
                    getch();
                }
            st[i][j]=0;
            st[i][j-1]=2;
            m=i;
            r=j-1;
            }
        else {break;};
        break;
        }
    case 5: 
        {
        printf("Down.\n");
        if ((st[i-1][j]!=22)||(st[i-1][j]==0)||(st[i-1][j]==4))
            {
                if (st[i-1][j]==3)
                {
                    getch();
                }
            st[i][j]=0;
            st[i-1][j]=2;
            m=i-1;
            r=j;
            }
        else {break;};
        break;
        }
    case 3: 
        {
        printf("Right.\n");
        if ((st[i][j+1]!=22)||(st[i][j+1]==0)||(st[i][j+1]==4))
            {
                if (st[i][j]==3)
                {
                    getch();
                }
            st[i][j]=0;
            st[i][j+1]=2;
            m=i;
            r=j+1;
            }
        else {break;};
        break;
        }
    default: puts("Error! Press any key to continue.");
    }    
}

/*Ïðèçðàê íîìåð ðàç*/
void ghost1(void)
{
    if ((ahead1!=0)&&(back1!=3)) 
        {
        st[t1+1][k1]=st[t1][k1];
        st[t1][k1]=0;
        t1=t1+1;
        ahead1=ahead1-1;
        if (ahead1==0) back1=3;
        }
    else
        {
        st[t1-1][k1]=st[t1][k1];
        st[t1][k1]=0;
        t1=t1-1;
        back1=back1-1;
        if (back1==0) ahead1=3;
        }    
}

/*Ïðèçðàê íîìåð äâà*/
void ghost2(void)
{
    if ((ahead2!=0)&&(back2!=8)) 
        {
        st[t2+1][k2]=st[t2][k2];
        st[t2][k2]=0;
        t2=t2+1;
        ahead2=ahead2-1;
        if (ahead2==0) back2=8;
        }
    else
        {
        st[t2-1][k2]=st[t2][k2];
        st[t2][k2]=0;
        t2=t2-1;
        back2=back2-1;
        if (back2==0) ahead2=8;
        }    
}

/*Ïðèçðàê íîìåð òðè*/
void ghost3(void)
{
    if ((ahead3!=0)&&(back3!=3)) 
        {
        st[t3+1][k3]=st[t3][k3];
        st[t3][k3]=0;
        t3=t3+1;
        ahead3=ahead3-1;
        if (ahead3==0) back3=3;
        }
    else
        {
        st[t3-1][k3]=st[t3][k3];
        st[t3][k3]=0;
        t3=t3-1;
        back3=back3-1;
        if (back3==0) ahead3=3;
        }    
}

/*Ïðèçðàê íîìåð ÷åòûðå*/
void ghost4(void)
{
    if ((ahead4!=0)&&(back4!=5)) 
        {
        st[t4][k4+1]=st[t4][k4];
        st[t4][k4]=0;
        k4=k4+1;
        ahead4=ahead4-1;
        if (ahead4==0) back4=5;
        }
    else
        {
        st[t4][k4-1]=st[t4][k4];
        st[t4][k4]=0;
        k4=k4-1;
        back4=back4-1;
        if (back4==0) ahead4=5;
        }    
}

/*Ïðèçðàê íîìåð ïÿòü*/
void ghost5(void)
{
    if ((left5==0)&&(right5==0)&&(ahead5!=0)&&(back5!=3)) 
        {
        st[t5+1][k5]=st[t5][k5];
        st[t5][k5]=0;
        t5=t5+1;
        ahead5=ahead5-1;
        if (ahead5==0) left5=2;
        }
	else
        {
	
       if ((left5==0)&&(right5==0)&&(ahead5!=3)&&(back5!=0)) 
            {
            st[t5-1][k5]=st[t5][k5];
            st[t5][k5]=0;
            t5=t5-1;
            back5=back5-1;
            if (back5==0) right5=2;
            } 
	   else
	       {
            if ((left5!=2)&&(right5!=0)&&(ahead5==0)&&(back5==0)) 
                {
                st[t5][k5+1]=st[t5][k5];
                st[t5][k5]=0;
                k5=k5+1;
                right5=right5-1;
                if (right5==0) ahead5=3;
                }
            else
                {
                if ((left5!=0)&&(right5!=2)&&(ahead5==0)&&(back5==0)) 
                    {
                    st[t5][k5-1]=st[t5][k5];
                    st[t5][k5]=0;
                    k5=k5-1;
                    left5=left5-1;
                    if (left5==0) back5=3;
                    };
                };
            };
        };   
          
}  


//îñíîâíàÿ èãðà
void game(void)
{
    int pacman11;
    system("cls");
    system("color 1F");
      
    labirint();
    
    /*Ïåðâè÷íûé âûâîä ëàáèðèíòà*/
    for (i=1;i<=20;i++)
    { 
        for (j=1;j<=20;j++)
        if (st[i][j]==22) printf("%c",(char)219);
        else 
        {
            if (st[i][j]==2) printf("%c", (char)253);
            else 
            {
                if (st[i][j]==3) printf("%c", (char)6);
                else 
                {
                    if (st[i][j]==4) printf("%c", (char)127);
                    else 
                    {
                        if (st[i][j]==5) printf("%c", (char)176);
                        else 
                        {
                        printf(" ");
                        };
                    };
                };
            };
        };
    printf("\n"); 
    };
    
    do 
        {
        i=m;
        j=r;
        printf("Please, choose the way (5 - up, 1 - left, 2 - down, 3 - right): ");
        
        pacman();
        
        /*Äåíüãè-óñëîâèå*/
        if ((st[5][2]==2)||(st[10][8]==2)||(st[2][10]==2)||(st[4][13]==2)||(st[14][14]==2)||(st[15][8]==2)||(st[17][3]==2))
        money++; 
        if (money==7) st[20][6]=0;
        
        ghost1();
        ghost2(); 
        ghost3();
        ghost4(); 
        ghost5();
    
        system("cls");
        pacman11=0;
        
        /*Ïîâòîðíûé âûâîä ëàáèðèíòà*/
        for (i=1;i<=20;i++)
            { 
            for (j=1;j<=20;j++)
            if (st[i][j]==22) printf("%c",(char)219);
            else 
                {
                if (st[i][j]==2) 
                    {
                    printf("%c", (char)253);
                    pacman11++;
                    }
                else 
                    {
                    if (st[i][j]==0) printf(" ");
                    else 
                        {
                        if (st[i][j]==3) printf("%c", (char)6);
                        else 
                            {
                            if (st[i][j]==4) printf("%c", (char)127);
                            else 
                                {
                                if (st[i][j]==5) printf("%c", (char)176);
                                else {printf(" ");
                                };
                            };
                        };
                    };
                };
            };
            printf("\n"); 
        }
        
        if (pacman11==0)
            {
            printf("Sorry. You lose!\n");
            getch();
            break;
            }
        
        if (st[20][6]==2) 
            {
            printf("Congratulations! You win!\n");
            system("pause");
            }
    
        } 
    while (st[20][6]!=2);    
}

    main()
{
    int menu1;
    int time=0;
    
    while (time!=1)
    {
    system("cls");
    system("color 1F");  
    printf("\t\t MENU \n\n\t1. Play\n\t2. Exit\n\nChoose the number: ");  
    
    scanf("%d", &menu1);
    
    if (menu1==1) 
        {
        system("cls");
        printf("\n\tGoal of the game: collect all Coins, open the Door of the Maze and exit."); 
        getch();               
        game();
        }
    else time=1;
};
    getch();
}
