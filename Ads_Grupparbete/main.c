//
//  main.c
//  STEFAN GENOMGÅNG
//
//  Created by Robin Ellingsen on 2020-11-09.
//inge malloc på arduino
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
//void HandleWinning
//{
    
//}
int main()
{
    ADS a;
    strcpy(a.name, "IoT-20");
    strcpy(a.message, "hejhej");
    a.tokens = 1000; //1501-1600
    a.start = 0;
    a.start = 1000;
    
    ADS a2;
    strcpy(a2.name, "Svarte Petters Svartbyggen");
    strcpy(a2.message, "hejhej");
    a2.tokens = 1500; //1501-1600
    a.start = 1001;
    a.start = 2501;
    
    ADS a3;
    strcpy(a3.name, "Farmor Ankas Pajer AB");
    strcpy(a3.message, "hejhej");
    a3.tokens = 3000; //1501-1600
    a.start = 5502;
    a.start = 8502;
    
    ADS a4;
    strcpy(a4.name, "Långbens detektivbyrå");
    strcpy(a4.message, "hejhej");
    a4.tokens = 4000; //1501-1600
    a.start = 8503;
    a.start = 15504;
    
    ADS a5;
    strcpy(a5.name, "Hederlige Harrys Bilar");
    strcpy(a5.message, "hejhej");
    a5.tokens = 5000; //1501-1600
    a.start = 15504;
    a.start = 20505;
    
    ADS customers[5];
        customers[0] = a;
        customers[1] = a2;
        customers[2] = a3;
        customers[3] = a4;
        customers[4] = a5;
        int summatokens = 0;
    for (int i = 0; i < 4; i++)
            summatokens += customers[i].allAds;
        
        srand(time(NULL));
        int r = rand() % summatokens;

        //Loopa för att se vem som innehar den lotten

        //När vi fått fram vem som har lotten
        int i = 2; //Låt oss säga att det blev 2
        ADS winning = customers[i];
//        HandleWinning(winning);
        
        
        //Huvudmeny(&state);

        return 0;
}




