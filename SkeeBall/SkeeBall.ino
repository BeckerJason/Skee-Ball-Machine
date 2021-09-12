#include <LiquidCrystal.h>
#include "FastLED.h"
#define NUM_LEDS 84
#define LED_PIN 7
#define COLOR_ORDER GRB
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

#define a1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define b1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define c1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define d1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define e1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define f1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define g1(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define a2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define b2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define c2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define d2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define e2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define f2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define g2(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define a3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define b3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define c3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define d3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define e3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define f3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define g3(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define a4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define b4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define c4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define d4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define e4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define f4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
#define g4(x,y,z) leds[0] = CRGB(RED, GREEN, BLUE);\
           leds[1] = CRGB(RED, GREEN, BLUE);\
           leds[2] = CRGB(RED, GREEN, BLUE)
           
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


int p1=0;
int p2=0;
int p3=0;
int p4=0;
int p5=0;
int p6=0;
int p7=0;
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

red=1;
blue=green=0;

a1(led_matrix[a][digits[0]*red],led_matrix[a][digits[0]*green],led_matrix[a][digits[0]*blue]);
b1(led_matrix[b][digits[0]*red],led_matrix[b][digits[0]*green],led_matrix[b][digits[0]*blue]);
c1(led_matrix[c][digits[0]*red],led_matrix[c][digits[0]*green],led_matrix[c][digits[0]*blue]);
d1(led_matrix[d][digits[0]*red],led_matrix[d][digits[0]*green],led_matrix[d][digits[0]*blue]);
e1(led_matrix[e][digits[0]*red],led_matrix[e][digits[0]*green],led_matrix[e][digits[0]*blue]);
f1(led_matrix[f][digits[0]*red],led_matrix[f][digits[0]*green],led_matrix[f][digits[0]*blue]);
g1(led_matrix[g][digits[0]*red],led_matrix[g][digits[0]*green],led_matrix[g][digits[0]*blue]);

a2(led_matrix[a][digits[1]*red],led_matrix[a][digits[1]*green],led_matrix[a][digits[1]*blue]);
b2(led_matrix[b][digits[1]*red],led_matrix[b][digits[1]*green],led_matrix[b][digits[1]*blue]);
c2(led_matrix[c][digits[1]*red],led_matrix[c][digits[1]*green],led_matrix[c][digits[1]*blue]);
d2(led_matrix[d][digits[1]*red],led_matrix[d][digits[1]*green],led_matrix[d][digits[1]*blue]);
e2(led_matrix[e][digits[1]*red],led_matrix[e][digits[1]*green],led_matrix[e][digits[1]*blue]);
f2(led_matrix[f][digits[1]*red],led_matrix[f][digits[1]*green],led_matrix[f][digits[1]*blue]);
g2(led_matrix[g][digits[1]*red],led_matrix[g][digits[1]*green],led_matrix[g][digits[1]*blue]);

a3(led_matrix[a][digits[2]*red],led_matrix[a][digits[2]*green],led_matrix[a][digits[2]*blue]);
b3(led_matrix[b][digits[2]*red],led_matrix[b][digits[2]*green],led_matrix[b][digits[2]*blue]);
c3(led_matrix[c][digits[2]*red],led_matrix[c][digits[2]*green],led_matrix[c][digits[2]*blue]);
d3(led_matrix[d][digits[2]*red],led_matrix[d][digits[2]*green],led_matrix[d][digits[2]*blue]);
e3(led_matrix[e][digits[2]*red],led_matrix[e][digits[2]*green],led_matrix[e][digits[2]*blue]);
f3(led_matrix[f][digits[2]*red],led_matrix[f][digits[2]*green],led_matrix[f][digits[2]*blue]);
g3(led_matrix[g][digits[2]*red],led_matrix[g][digits[2]*green],led_matrix[g][digits[2]*blue]);

a4(led_matrix[a][digits[3]*red],led_matrix[a][digits[3]*green],led_matrix[a][digits[3]*blue]);
b4(led_matrix[b][digits[3]*red],led_matrix[b][digits[3]*green],led_matrix[b][digits[3]*blue]);
c4(led_matrix[c][digits[3]*red],led_matrix[c][digits[3]*green],led_matrix[c][digits[3]*blue]);
d4(led_matrix[d][digits[3]*red],led_matrix[d][digits[3]*green],led_matrix[d][digits[3]*blue]);
e4(led_matrix[e][digits[3]*red],led_matrix[e][digits[3]*green],led_matrix[e][digits[3]*blue]);
f4(led_matrix[f][digits[3]*red],led_matrix[f][digits[3]*green],led_matrix[f][digits[3]*blue]);
g4(led_matrix[g][digits[3]*red],led_matrix[g][digits[3]*green],led_matrix[g][digits[3]*blue]);

//lcd.setCursor(0,0);
//lcd.print("Balls:");
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
