/*
 * Music Player
 * 
 * 6/26/2020
 * Steven Licciardello
 */
int GLED = 7;
 
int nB0 =  31;
int nC1 =  33;
int nCS1 = 35;
int nD1 =  37;
int nDS1 = 39;
int nE1 =  41;
int nF1 =  44;
int nFS1 = 46;
int nG1 =  49;
int nGS1 = 52;
int nA1 =  55;
int nAS1 = 58;
int nB1 =  62;
int nC2 =  65;
int nCS2 = 69;
int nD2 =  73;
int nDS2 = 78;
int nE2 =  82;
int nF2 =  87;
int nFS2 = 93;
int nG2 =  98;
int nGS2 = 104;
int nA2 =  110;
int nAS2 = 117;
int nB2 =  123;
int nC3 =  131;
int nCS3 = 139;
int nD3 =  147;
int nDS3 = 156;
int nE3 =  165;
int nF3 =  175;
int nFS3 = 185;
int nG3 =  196;
int nGS3 = 208;
int nA3 =  220;
int nAS3 = 233;
int nB3 =  247;
int nC4 =  262;
int nCS4 = 277;
int nD4 =  294;
int nDS4 = 311;
int nE4 =  330;
int nF4 =  349;
int nFS4 = 370;
int nG4 =  392;
int nGS4 = 415;
int nA4 =  440;
int nAS4 = 466;
int nB4 =  494;
int nC5 =  523;
int nCS5 = 554;
int nD5 =  587;
int nDS5 = 622;
int nE5 =  659;
int nF5 =  698;
int nFS5 = 740;
int nG5 =  784;
int nGS5 = 831;
int nA5 =  880;
int nAS5 = 932;
int nB5 =  988;
int nC6 =  1047;
int nCS6 = 1109;
int nD6 =  1175;
int nDS6 = 1245;
int nE6 =  1319;
int nF6 =  1397;
int nFS6 = 1480;
int nG6 =  1568;
int nGS6 = 1661;
int nA6 =  1760;
int nAS6 = 1865;
int nB6 =  1976;
int nC7 =  2093;
int nCS7 = 2217;
int nD7 =  2349;
int nDS7 = 2489;
int nE7 =  2637;
int nF7 =  2794;
int nFS7 = 2960;
int nG7 =  3136;
int nGS7 = 3322;
int nA7 =  3520;
int nAS7 = 3729;
int nB7 =  3951;
int nC8 =  4186;
int nCS8 = 4435;
int nD8 =  4699;
int nDS8 = 4978;


int tempo = 136; //beats per minute
int beat_note = 4; //
long beat_milliseconds = 60000/tempo;
long W = beat_milliseconds*beat_note/1;
long H = beat_milliseconds*beat_note/2;
long Q = beat_milliseconds*beat_note/4;
long E = beat_milliseconds*beat_note/8;
long S = beat_milliseconds*beat_note/16;


 


void setup() {
  // notes in the melody:
  int melody[] = {
    nGS5,nFS5,nGS5,nE5,nE5,nE5,nB4,nB4,0,nGS5,nB4,nE5,nGS5,nB5,
    0,nE6,nCS6,nB5,nCS6,nB5,nGS5,nB5,nE5,nE5,nE5,nCS5,nE5,nFS5,nE5,nGS5,nB5,nGS5,nB5,nCS5,nB4,nCS5,nE5,
    
    0,nGS4,nFS4,nGS4,nE4,nE4,nE4,nB3,nB3,0,nGS4,nB3,nE4,nGS4,nB4,
    0,nE5,nCS5,nB4,nCS5,nB4,nGS4,nB4,nE4,nE4,nE4,nCS4,nE4,nFS4,nE4,nGS4,nB4,nGS4,nB4,nCS4,nB3,nCS4,nE4,
    
    0,nGS4,nFS4,nGS4,nE4,nE4,nE4,nB3,nB3,0,nGS4,nB3,nE4,nGS4,nB4,
    0,nE5,nCS5,nB4,nCS5,nB4,nGS4,nB4,nE4,nE4,nE4,nCS4,nE4,nFS4,nE4,nGS4,nB4,nGS4,nB4,nCS4,nB3,nCS4,nE4,

    0,nGS4,nE4,nB3,nB3,0,nB3,nDS4,nE4,0,nDS4,0,nE4,0,nGS4,0,nFS4,nFS4,0,nE4,nFS4,nGS4,0,nFS4,0,nGS4,0,nB4,0,nA4,nA4,0,nGS4,nFS4,nGS4,nGS4,nGS4,0,nFS4,nFS4,nFS4,0,nE4,nE4,
    0,nDS4,nFS4,nGS4,0,nGS4,0,nE4,0,nE4,0,nB3,nB3,0,nB3,nDS4,nE4,0,nDS4,0,nE4,0,nGS4,0,nFS4,nFS4,0,nE4,nFS4,nGS4,nGS4,nFS4,0,nGS4,nGS4,nB4,0,nA4,nA4,0,nGS4,nFS4,nGS4,nGS4,nGS4,0,nFS4,nFS4,nFS4,0,nE4,nE4,
  };
  
  // note durations:
  long noteDurations[] = {
   S,S,E,E,E,S,E+S,E,E,E+E,E,S,E,S+H,
   E,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,E,H+Q,
   
   E,S,S,E,E,E,S,E+S,E,E,E+E,E,S,E,S+H,
   E,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,E,W,
   
   H+Q+E,S,S,E,E,E,S,E+S,E,E,E+E,E,S,E,S+H,
   E,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,E,W,

   W,Q,Q,E+S,E,S,S,S,S,S,S,S,S,S,S,S,E+S,E,S,S,S,S,S,S,S,S,S,S,S,E+S,E,S,S,S,S,S,S,S,S,S,S,S,E+S,E,
   S,S,S,S,S,S,S,S,S,S,S,E+S,E,S,S,S,S,S,S,S,S,S,S,S,E+S,E,S,S,S,S,S,S,S,S,S,S,S,E+S,E,S,S,S,S,S,S,S,S,S,S,S,E+S,E,
  };

  pinMode(GLED,OUTPUT);
  
  int melody_len = sizeof(melody)/sizeof(melody[0]);

  for (int thisNote = 0; thisNote < melody_len; thisNote++) {
        if(melody[thisNote] != 0){
      digitalWrite(7,!digitalRead(7));
    } 
    
    tone(8, melody[thisNote]);
    delay(noteDurations[thisNote]);
    noTone(8);
    
  }
}

void loop() {
  delay(20000);
}
