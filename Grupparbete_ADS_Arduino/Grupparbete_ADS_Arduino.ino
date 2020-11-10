#include <LiquidCrystal.h>
#include <time.h>
typedef struct
{
    int name;
    int allAds;
    int tokens;
    int start;
    int stop;
    
}ADS;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  srand(3);
  //randomSeed(analogRead(A0));
}

void HandleWinning(ADS winning)
{

    if (winning.name == 1)
    {
        RunOneOfIot();
        
    }
    else if (winning.name == 2)
    {
        RunOneOfSvarteP();

    }
    else if (winning.name == 3)
    {
        RunOneOfFarmor();

    }
    else if (winning.name == 4)
    {
        RunOneOfLangben();

    }
    else if (winning.name == 5)
    {
        RunOneOfHarry();

    }

}



void RunOneOfIot()
{
    
    lcd.print("nae");
    delay(3000);
}


void RunOneOfSvarteP()
{
  long time  = millis() * 60000;
  if (time %2 == 0)
  {
     lcd.setCursor(0,0);
  char str[] = "Lat Petter bygga at dig";
  lcd.print(str);
  for (int loopiloop = 0; loopiloop < 3; loopiloop++)
  {
    for (int positionCounter = 0; positionCounter < 35; positionCounter++) 
    {
    lcd.scrollDisplayLeft();
    delay(200);
    }
  }
  lcd.clear(); 
  }
  else
  {
    char str1[] = "Bygga svart?";
    char str2[] = "Ring Petter";
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);
    delay(1000);
    lcd.clear();
  }
    
}
void RunOneOfFarmor()
{
  int index = random(0, 2);

  if (index == 0)
  {
    lcd.setCursor(0,0);
    char str[] = "Kop paj hos Farmor Anka";
    lcd.print(str);
    
    for (int loopiloop = 0; loopiloop < 3; loopiloop++)
    {
    for (int positionCounter = 0; positionCounter < 35; positionCounter++) 
    {
    lcd.scrollDisplayLeft();
    delay(200);
    }
    }
    lcd.clear();
  }
  else if(index == 1)
  {
    char str1[] = "Skynda innan Marten";
    char str2[] = " atit alla pajer!";
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);
    delay(1000);
    lcd.clear();
  }
}
void RunOneOfLangben()
{
   long time = millis();

   if (time > 21600000)
   {
    char str1[] = "   Mysterier?";
    char str2[] = "Ring Långben";
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);
    delay(1000);
    lcd.clear();
   }
   else
   {
    char str1[] = " Longleg";
    char str2[] = "fixar biffen";
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);
    delay(1000);
    lcd.clear();
   }
}
void RunOneOfHarry()
{
 int index = random(0, 3);
 
  if (index == 0)
  {
    lcd.setCursor(0,0);
    char str[] = "Kop bil hos Harry!";
    lcd.print(str);
  
    for (int loopiloop = 0; loopiloop < 3; loopiloop++)
    {
      for (int positionCounter = 0; positionCounter < 35; positionCounter++) 
      {
      lcd.scrollDisplayLeft();
      delay(200);
      }
    }
      lcd.clear();
    }
  else if(index ==1)
  {
    char str1[] = "Hederlige Harrys";
    char str2[] = "      Bilar";
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);

  for(int blinks = 0; blinks < 3; blinks++)
  {
    lcd.noDisplay();
    delay(800);
    lcd.display();
    delay(800);
  }
    lcd.clear();
  }
  else if (index == 2)
  {
    char str1[] = "En god bilaffar!";
    lcd.print(str1);
    delay(1000);
    lcd.clear();
  }
    
}


void loop()
{

    ADS a;
    a.name = 1;
    a.tokens = 1000;
    a.start = 0;
    a.stop = 1000;
    
    ADS a2;
    a2.name = 2;
    a2.tokens = 1500;
    a2.start = 1001;
    a2.stop = 2501;
    
    ADS a3;
    a3.name = 3;
    a3.tokens = 3000;
    a3.start = 5502;
    a3.stop = 8502;
    
    ADS a4;
    a4.name = 4;
    a4.tokens = 4000;
    a4.start = 8503;
    a4.stop = 15504;
    
    ADS a5;
    a5.name = 5;
    a5.tokens = 5000;
    a5.start = 15504;
    a5.stop = 20505;
    
    ADS customers[5];
        customers[0] = a;
        customers[1] = a2;
        customers[2] = a3;
        customers[3] = a4;
        customers[4] = a5;
        int summatokens = 0;
    int *p = &a5.tokens;
    p = 1500;
        
    for (int i = 0; i < 6; i++)
    {
      summatokens += customers[i].tokens;
    }
    
      delay(1000);
        
        int r = rand() % summatokens;

    ADS winning;
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
    else if (r >= a5.start && r <a5.stop)
    {
        winning = a5;
    }

    lcd.print(winning.name);
    delay(2000);
    HandleWinning(winning);
    
        return 0;
}
