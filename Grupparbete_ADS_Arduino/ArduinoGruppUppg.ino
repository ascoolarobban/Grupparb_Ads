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

unsigned long current_time;
int minutes;
int hours;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, LED = 13;
int previouseWinner = 0;
int r;
int Li = 16;
int Lii = 0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  lcd.begin(16, 2);
  pinMode(LED,OUTPUT);
  randomSeed(analogRead(A0));
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
    else if (winning.name == 6)
    {
      RunOneOfYrrol();
    }

}

void RunOneOfYrrol()
{
  char str[] = "      T-rod!";
  char str1[] = "For dig som tankt klart";
  digitalWrite(LED,HIGH);
  lcd.setCursor(0,0);
  lcd.print(str);
  for (int loopiloop = 0; loopiloop < 56; loopiloop++)
  {
    lcd.setCursor(0,1);
    lcd.print(Scroll_LCD_Left(str1));
    delay(200);
  }
  digitalWrite(LED,LOW);
  lcd.clear();
}

void RunOneOfIot()
{
  char str[] = "      IoT20";
  char str1[] = "Blip Blop Blip Blink Hej";
  lcd.setCursor(0,0);
  lcd.print(str);
  for (int loopiloop = 0; loopiloop < 57; loopiloop++)
  {
    lcd.display();
    delay(150);
    lcd.noDisplay();
    lcd.setCursor(0,1);
    lcd.print(Scroll_LCD_Left(str1));
    delay(150);
  }
  lcd.clear();
}


void RunOneOfSvarteP()
{

  if (minutes % 2 == 0)
  {
  lcd.setCursor(0,0);
  lcd.print("Svarte Petter SB");
  char str[] = "Lat Petter bygga at dig";
  for (int loopiloop = 0; loopiloop < 55; loopiloop++)
    {
      
      lcd.setCursor(0,1);
      lcd.print(Scroll_LCD_Left(str));
      delay(200);
    }
  }
    else
  {
    char str1[] = " Bygga  svart?";
    char str2[] = "  Ring Petter";
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);
    delay(4000);
  }
   lcd.clear(); 
}
void RunOneOfFarmor()
{
  int index = random(0, 2);

  if (index == 0)
  {
    lcd.setCursor(0,0);
    char str[] = "Kop paj hos Farmor Anka";
    lcd.print(str);
    
    for (int loopiloop = 0; loopiloop < 57; loopiloop++)
    {
      lcd.setCursor(0,1);
      lcd.print(Scroll_LCD_Left(str));
      delay(200);
    }
    lcd.clear();
  }
  else if(index == 1)
  {
    char str[] = "    Skynda!";
    char str1[] = "  innan Marten";
    char str2[] = "atit alla pajer!";
    lcd.setCursor(0,0);
    lcd.print(str);
    delay(1500);
    lcd.setCursor(0,0);
    lcd.print(str1);
    lcd.setCursor(0,1);
    lcd.print(str2);
    delay(3000);
    lcd.clear();
  }
}
void RunOneOfLangben()
{
  if (hours > 6 && hours <17)
    {
      char str1[] = " Mysterier?";
      char str2[] = "Ring Longleg";
      lcd.setCursor(0,0);
      lcd.print(str1);
      lcd.setCursor(0,1);
      lcd.print(str2);
      delay(4000);
      lcd.clear();
    }
  else
   {
      char str1[] = "    Longleg";
      char str2[] = "  fixar biffen";
      lcd.setCursor(0,0);
      lcd.print(str1);
      lcd.setCursor(0,1);
      lcd.print(str2);
      delay(4000);
      lcd.clear();
   }
}
void RunOneOfHarry()
{
 int index = random(0, 3);
 
  if (index == 0)
  {
    char str[] = "Kop bil hos Harry!";
    lcd.setCursor(0,0);
    for (int loopiloop = 0; loopiloop < 40; loopiloop++)
    {
      lcd.print(Scroll_LCD_Left(str));
      delay(200);
    }
      lcd.clear();
    }
  else if(index == 1)
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
  
  }
  else if (index == 2)
  {
    char str[] = "Hederlige Harry";
    char str1[] = "En god bilaffar!";
    lcd.setCursor(0,0);
    lcd.print(str);
    lcd.setCursor(0,1);
    lcd.print(str1);
    delay(3000);
  }
  lcd.clear();
}


void loop()
{
    current_time = millis();
    minutes = current_time / 60000;
    hours = current_time / 3600000;
    
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

    ADS a6;
    a6.name = 6;
    a6.tokens = 6000;
    a6.start = 20506;
    a6.stop = 26507;
    
    ADS customers[6];
        customers[0] = a;
        customers[1] = a2;
        customers[2] = a3;
        customers[3] = a4;
        customers[4] = a5;
        customers[5] = a6;
        int summatokens = 0;
    
    int *p = &a5.tokens;
    *p = 1500;
        
    for (int i = 0; i < 6; i++)
    {
      summatokens += customers[i].tokens;
    }
        r = random(26507);

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
    else if (r >= a6.start && r <a6.stop)
    {
        winning = a6;
    }

    if (previouseWinner != winning.name)
    {
        previouseWinner = winning.name;
        HandleWinning(winning);
    }
    else
    {
        ;
    }
}
String Scroll_LCD_Left(String StrDisplay)
{
  String result;
  String StrProcess = "                " + StrDisplay + "                ";
  result = StrProcess.substring(Li,Lii);
  Li++;
  Lii++;
  if (Li>StrProcess.length()){
    Li=16;
    Lii=0;
  }
  return result;
}

void Scroll_LCD_Left()
{
  Li = 16;
  Lii = 0;
}
