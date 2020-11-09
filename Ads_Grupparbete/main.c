//
//  main.c
// Grupparbete_Reklamskylt
//
//  Created by Robin Ellingsen on 2020-11-09.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int name;
    int allAds;
    int tokens;
    int start;
    int stop;
    
}ADS;
void RunOneOfIot()
{
    //funktion
    
}
void RunOneOfSvarteP()
{
    
    
}
void RunOneOfFarmor()
{
    //funktion
    
}
void RunOneOfLångben()
{
    //funktion
    
}
void RunOneOfHarry()
{
    //funktion
    
}
void HandleWinning(ADS winning)
{
    if (winning.name ==1)
    {
        RunOneOfIot();
        
    }
    else if (winning.name ==2)
    {
        RunOneOfSvarteP();

    }
    else if (winning.name ==3)
    {
        RunOneOfFarmor();

    }
    else if (winning.name ==4)
    {
        RunOneOfLångben();

    }
    else if (winning.name ==5)
    {
        RunOneOfHarry();

    }

}




int main()
{
    srand(10000);
    ADS a;
    a.name = 1;
    a.tokens = 1000;
    a.start = 0;
    a.stop = 1000;
    
    ADS a2;
    a2.name =2;
    a2.tokens = 1500;
    a.start = 1001;
    a.stop = 2501;
    
    ADS a3;
    a3.name =3;
    a3.tokens = 3000;
    a.start = 5502;
    a.stop = 8502;
    
    ADS a4;
    a4.name =4;
    a4.tokens = 4000;
    a.start = 8503;
    a.stop = 15504;
    
    ADS a5;
    a5.name =5;
    a5.tokens = 5000;
    a.start = 15504;
    a.stop = 20505;
    
    ADS customers[5];
        customers[0] = a;
        customers[1] = a2;
        customers[2] = a3;
        customers[3] = a4;
        customers[4] = a5;
        int summatokens = 0;
    for (int i = 0; i < 5; i++)
    {
        summatokens += customers[i].tokens;
    }
    ADS winning;
    int r = rand() % summatokens;
    if (r >= a.start && r <a.stop)
    {
        winning = a;
    }
    else if (r >= a2.start && r <a2.stop)
    {
        winning = a2;
    }
    else if (r >= a3.start && r <a3.stop)
    {
        winning = a3;
    }
    else if (r >= a4.start && r <a4.stop)
    {
        winning = a4;
    }
    else {
        winning = a5;
    }
        HandleWinning(winning);
        return 0;
}






