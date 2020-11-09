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
#include <time.h>
typedef struct
{
    char name[100];
    char message[100];
    int allAds;
    int tokens;
    int amountAds;
    int start;
    int stop;
    
}ADS;
void RunOneOfIot()
{
    //funktion
    
}
void RunOneOfSvarteP()
{
    //funktion
    
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
    if (!strcmp(winning.name, "IoT-20"))
    {
        RunOneOfIot();
        
    }
    if (!strcmp(winning.name, "Svarte Petters Svartbyggen"))
    {
        RunOneOfSvarteP();

    }
    if (!strcmp(winning.name, "Farmor Ankas Pajer AB"))
    {
        RunOneOfFarmor();

    }
    if (!strcmp(winning.name, "Långbens detektivbyrå"))
    {
        RunOneOfLångben();

    }
    if (!strcmp(winning.name, "Hederlige Harrys Bilar"))
    {
        RunOneOfHarry();

    }

}




int main()
{
    ADS a;
    strcpy(a.name, "IoT-20");
    strcpy(a.message, "hejhej");
    a.tokens = 1000;
    a.start = 0;
    a.stop = 1000;
    
    ADS a2;
    strcpy(a2.name, "Svarte Petters Svartbyggen");
    strcpy(a2.message, "hejhej");
    a2.tokens = 1500;
    a.start = 1001;
    a.stop = 2501;
    
    ADS a3;
    strcpy(a3.name, "Farmor Ankas Pajer AB");
    strcpy(a3.message, "hejhej");
    a3.tokens = 3000;
    a.start = 5502;
    a.stop = 8502;
    
    ADS a4;
    strcpy(a4.name, "Långbens detektivbyrå");
    strcpy(a4.message, "hejhej");
    a4.tokens = 4000;
    a.start = 8503;
    a.stop = 15504;
    
    ADS a5;
    strcpy(a5.name, "Hederlige Harrys Bilar");
    strcpy(a5.message, "hejhej");
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
            summatokens += customers[i].tokens;
        
        srand(time(NULL));
        int r = rand() % summatokens;
    ADS winning;
    if (r >= a.start && r <a.stop)
    {
        winning = a;
    }
    if (r >= a2.start && r <a2.stop)
    {
        winning = a2;
    }
    if (r >= a3.start && r <a3.stop)
    {
        winning = a3;
    }
    if (r >= a4.start && r <a4.stop)
    {
        winning = a4;
    }
    if (r >= a5.start && r <a5.stop)
    {
        winning = a5;
    }

        HandleWinning(winning);
 
        
  
        return 0;
}





