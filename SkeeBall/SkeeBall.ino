#include <LiquidCrystal.h>
#include "FastLED.h"
#define NUM_LEDS 84
#define LED_PIN 7
#define COLOR_ORDER GRB

typedef enum DisplayState{  // <-- the use of typedef is optional
  _score,
  _finalscore,
  _newhs,
  _hs
};
CRGB leds[NUM_LEDS];
//LCD pin to Arduino
//const int pin_RS = 8; 
//const int pin_EN = 9; 
//const int pin_d4 = 4; 
//const int pin_d5 = 5; 
//const int pin_d6 = 6; 
//const int pin_d7 = 7; 
//const int pin_BL = 10;
//

int led_matrix[7][10]={//[matrix letters][numbers]
  {1,0,1,1,0,1,1,1,1,1}, //a
  {1,1,1,1,1,0,0,1,1,1}, //b
  {1,1,0,1,1,1,1,1,1,1},  //c
  {1,0,1,1,0,1,1,0,1,1},  //d
  {1,0,1,0,0,0,1,0,1,0},  //e
  {1,0,0,0,1,1,1,0,1,1},  //f
  {0,0,1,1,1,1,1,0,1,1}   //g
  };
  
int letter_matrix[7][26]={//[matrix letters][alpha letters]  a-z

  {1,0,0,0,1,1,1,0,1,0,1,0,1,0,0,1,1,0,1,0,0,0,0,0,0,1}, //a
  {1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,1,1,0,1,1},  //b
  {1,1,0,1,0,0,1,1,0,1,1,0,1,1,1,0,1,0,1,0,1,0,0,1,1,0},  //c
  {1,1,1,1,1,0,1,0,0,1,0,1,0,0,1,0,0,0,1,1,1,1,1,0,1,1},  //d
  {1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,0,0,1,0,1},  //e
  {0,1,0,0,1,1,1,1,0,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,0},  //f
  {1,1,1,1,1,1,0,1,0,0,1,0,1,1,1,1,1,1,0,1,0,0,1,0,1,0} //g
};

#define one 41 //41
#define two 39 //39
#define three 37 //37
#define four  35   //35
#define five  33   //33
#define six 31     //31  
#define seven 27   //27

#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
#define g 6

#define RED 255
#define GREEN 255
#define BLUE 255
           
///DIGITS         1234    a
///                     f   b
///                       g
///                     e   c
///                       d
///                 a 23567890
//                  b 
//                  c
//                  d
//                  e
//                  f
//                  g


int pScore=0;
int BallCounter=0;
int MaxBalls=10;
int Score=0;
int FinalScore=0;
int HighScore=0;
int brightness=20;
int digits[4]={0,0,0,0};
int red,blue,green;
//LiquidCrystal//lcd( pin_RS,  pin_EN,  pin_d4,  pin_d5,  pin_d6,  pin_d7);


void setup() {
  Serial.begin(9600);
////lcd.begin(16, 2);
// 
////lcd.setCursor(0,1);
////lcd.print("Score:");
 pinMode(one, INPUT_PULLUP);
 pinMode(two, INPUT_PULLUP);
 pinMode(three, INPUT_PULLUP);
 pinMode(four, INPUT_PULLUP);
 pinMode(five, INPUT_PULLUP);
 pinMode(six, INPUT_PULLUP);
 pinMode(seven, INPUT_PULLUP);


FastLED.addLeds<WS2812, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(brightness);
}
void loop() {
  
/*
 int x;
 x = analogRead (0);
//lcd.setCursor(10,1);
 if (x < 60) {
  //lcd.print ("Right    ");
 }
 else if (x < 200) {
  //lcd.print ("Up    ");
 }
 else if (x < 400){
  //lcd.print ("Down  ");
 }
 else if (x < 600){
  //lcd.print ("Left  ");
 }
 else if (x < 800){
  //lcd.print ("Select");
 }*/

if (digitalRead(one)==LOW) {
  Serial.println ("one ");
  Score+=10;BallCounter++;
  while (digitalRead(one)==LOW){delay(50);} 
 }
if (digitalRead(two)==LOW) {
   Serial.println ("two ");
   Score+=20;BallCounter++;
   while (digitalRead(two)==LOW){delay(50);} 
 }
 if (digitalRead(three)==LOW) {
   Serial.println ("three ");
   Score+=30;BallCounter++;
  while (digitalRead(three)==LOW){delay(50);} 
 }
 if (digitalRead(four)==LOW) {
   Serial.println ("four ");
     Score+=40;BallCounter++;
  while (digitalRead(four)==LOW){delay(50);}
 }
 if (digitalRead(five)==LOW) {
   Serial.println ("five ");
     Score+=50;BallCounter++;
  while (digitalRead(five)==LOW){delay(50);}
 }
 if (digitalRead(six)==LOW) {
   Serial.println ("six ");
     Score+=100;BallCounter++;
  while (digitalRead(six)==LOW){delay(50);}
 }
 if (digitalRead(seven)==LOW) {
   Serial.println ("seven ");
     Score+=100;BallCounter++;
  while (digitalRead(seven)==LOW){delay(50);}
 }



digits[0]=Score/1000;
digits[1]=(Score/100)%10;
digits[2]=(Score/10)%10;
digits[3]=(Score)%10;

/////////////////////////////////////CORRECT CODE GOES HERE
 int math=MaxBalls-BallCounter;
//lcd.print(math);
//lcd.setCursor(10,1);
 //lcd.print (Score);
 ///PRINT SCORE ONLY WHEN CHANGED
if (pScore!=Score)
{Serial.println(Score);pScore=Score;}
//SHOW 
FastLED.show();

//WHEN ALL BALLS HAVE BEEN USED
if(BallCounter==MaxBalls){
  FinalScore=Score; delay(1000);Score=0;BallCounter=0;
  if(FinalScore>HighScore){HighScore=FinalScore;}
}
//Serial.println(p1);




delay(10);
 
} 
