/*"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"                                       "`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`* 
         U           _ U _         - U -        (_)(_)(_)(_)(_)| |_| |_ ___  ___           U           _ U _           U           - U -  
                      /|\           /|\         | || || || || || __|  _/ __|/ __|         /|\           /|\           /|\               
                                                | || || || || |\ |_\ |_\__ \\__ \
                                                |_||_||_||_||_| \__|\__|___/|___/

                        ___| |__  _ __(_)(_)(_)(_)(_)___| |_ _ __ ___   __ _  __ _  __ _  __ _ ___  ___  | || || |  
                       / __| '_ \| '__| || || || || / __| __| '_ ` _ \ / _`  / _`  / _`  / _` / __|/ __| | || || |  
                      | (__| | | | |  | || || || || \__ \ |_| | | | | | (_| | (_| | (_| | (_| \__ \\__ \ |_||_||_|
                       \___|_| |_|_|  |_||_||_||_||_|___/\__|_| |_| |_|\__,_|\__,_|\__,_|\__,_|___/|___/ (_)(_)(_)
                                        "`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"
                            .-(_)              U           _ U _           U           _ U _         - U -
                           / _/                             /|\           /|\           /|\               
                        .-'   \
                       /       '.
                     ,-~--~-~-~-~-,
                    {__.._...__..._}            o,(o),
   o,888,o         /\##"  @  @  "##/\          ,88' `88,o
  ,(o)'(o),__     |(\`  , (__) ,  `/)|     __,88'o    `(o)
 ,88'   .8(_ \_____\_    '----'    _/_____/ _)o).       8'F
 (o)o  (___)\ \      '-.__    __.-'      / /(___)          AS
 88    (___)88o|          '--'          | 88(___)            TL            o                 o                         o 
o8'     (__)88,____/   FASTLEDFTW   \___o,88(__)                ED!((Elf Art by Joan Stark)... found On the interwebs - search for aasci art!) 
_____________`(o),/__________________\_,(o)`_________________________o___________________o__________o____________o____________________________
              o`88,                  ,88'    
                  `(o),       o    ,(o)'o          & THE ELVES HAVE BEEN BUSY DECORATING ALL YOUR CODES....... UH-OH!       
                    o`88,_\(o)/_,88` 
                            
*/    
//^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^// 
//   _ U _         - U -         - U -         - U -           U           _ U _           U           _ U _         - U -         - U -    
//    /|\            |                          /|\                         /|\           /|\           /|\                          |   
//
//                                                     ANOTHER YEAR ANOTHER DEMO REEL!          
//                                                         CHRISTMAS EDITION 2020                 
//                                                           
//                                                              DEMO SKETCH                  
//                                                        (Running on NanoV3 328p)
//                                (Compatible with the smaller 328p Arduinos - UNO, NANO, PRO MINI, PRO MICRO)              
//                          & Runs best (visually) on WS2811 8mm String lights (For your Tree or as string lights!)                                     
//
//
//,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,// 
//          - U -         - U -         - U -           U           _ U _           U           _ U _         - U -         - U -    
//            |                          /|\                         /|\           /|\           /|\                          |   


//==========================================================================================================================================
//================== FastLED definitions

#include <FastLED.h>
#define DATA_PIN               6        // Which pin on the Arduino is connected to the leds?

//==========================================================================================================================================
//=================== Fairy style lights 8mm pixels
//------WS2811

#define LED_TYPE               WS2811
#define NUM_LEDS               50       // How many leds are attached to the Arduino?
#define VOLTS                  5
#define MAX_MA                 500      // LIMITER - 500 is a safe start!- Can go up to 2000ma(safely)-(8mmPixel) 
                                         //(if you have sufficiant Amps to each string)
                                         // set to 1300ma MAX if sharing power for two 5v strings (Before color washout and flicker occurs)
#define COLOR_CORRECTION       Typical8mmPixel

//==========================================================================================================================================
//=================== Flat strip lights
//------WS2182B

//#define LED_TYPE              WS2812B
//#define NUM_LEDS              144     // How many leds are attached to the Arduino?
//#define VOLTS                 5
//#define MAX_MA                500
//#define COLOR_CORRECTION      TypicalLEDStrip

//==========================================================================================================================================
//------TM1809/TM1812  

//#define LED_TYPE              TM1809  // MUST LINK (ARDUINO GND)--TO--(STRIP GND(-)) & (DATA)--TO--(DATA)
//#define NUM_LEDS              150      // How many leds are attached to the Arduino?
//#define VOLTS                 5
//#define MAX_MA                500
//#define COLOR_CORRECTION      TypicalLEDStrip

//==========================================================================================================================================
//=================== Led color order

//IF YOUR LED COLORS ARE IN THE WRONG ORDER GHANGE HERE:

#define LED_COLOR_ORDER           RGB
//#define LED_COLOR_ORDER           GRB 
//#define LED_COLOR_ORDER           RBG
//#define LED_COLOR_ORDER           GBR 
//#define LED_COLOR_ORDER           BRG 
//#define LED_COLOR_ORDER           BGR 

//==========================================================================================================================================
//======================== Variables for Glitter / Sparkle / SparkleBomb (These are set at comfortable levels but can be changed if needed)
 
#define GLITTER_AMOUNT        60 // white glitter slower paced than sparkle
                                 //(10-90) (60=nice pace glitter)(90= too much glitter!!) 
                                 //(120= !!!SHOULD COME WITH A HEALTH WARNING OR SOMETHING?!!)

#define SPARKLE_AMOUNT        30 // white and yellow sparkles  
                                 // (30-70)(30= nice pace sparkles)(70= too many sparkles!!) 
                                 //(100= !!!SHOULD COME WITH A HEALTH WARNING OR SOMETHING?!!)

#define SPARKLEBOMB_AMOUNT    1  // Extra white and yellow sparkles (increment by 1)
                                 //(1-6)(1= nice pace sparkles)(6= too many sparkles!!) 
                                 //(10= !!!SHOULD COME WITH A HEALTH WARNING OR SOMETHING?!!)

#define FADEOUT_SPEED         40 // speed of glitter and sparkle fade out (10=slow)(100=fast)

//==========================================================================================================================================
//======================= Variables for later patterns (not for changing)

CRGB leds[NUM_LEDS];
byte ledh[NUM_LEDS];       //used for sparkle
byte ledb[NUM_LEDS];       //used for sparkle

byte state      = 1;   
int  INDEX      = 0;       //-LED INDEX (0 to LED_COUNT-1)

byte thisbright = 255;     // for later patterns (random burst, random march, rgb prop, candycane etc...)
byte thissat    = 255;     // for later patterns (random burst, random march, rgb prop, candycane etc...)
int  thisdelay  = 50;      // for later patterns (random burst, random march, rgb prop, candycane etc...)
byte thisstep   = 10;      // for later patterns (random burst, random march, rgb prop, candycane etc...)
byte thishue    = 0;       // for later patterns (random burst, random march, rgb prop, candycane etc...)
byte thathue    = 0;       // for later patterns (random burst, random march, rgb prop, candycane etc...)

int sparkTest   = 0;       // sparkTest:   variable used in the "sparkle & addPixieDust" sequence (a poor mans pixie dust!) 

uint16_t ledsData[NUM_LEDS][4];//For colorTwinkle array to store color data and an extra value
uint16_t pick;                 //For colorTwinkles  stores a temporary pixel number

//==========================================================================================================================================
//======================= Variables for TwinkleFox and DemoPatternList (these can be changed see the comments below)

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))   //for DemoPatternList

#define SECONDS_PER_PATTERN  30            // How often to change DemoPatternList
#define SECONDS_PER_PALETTE  30            // How often to change twinklefox color palettes.(USED FOR TWINKLEFOX TIMING) 

#define COLOR_MATCH                        //!! use this to "group similar" colors ... 
                                           // to turn off =  //#define COLOR_MATCH 

CRGBPalette16 gCurrentPalette;             // for TwinkleFox
CRGBPalette16 gTargetPalette;              // for TwinkleFox

uint8_t current_loop           = 1;        // use 1 for DEMO MODE and 2 for a single pattern (TwinkleFOX)(can be changed in loop)      
uint8_t GLOBAL_BRIGHTNESS      = 255;      // BRIGHTNESS CAN BE CHANGED HERE. 255 = MAX (rolls over to 0 if you go higher)
uint8_t fps                    = 60;       // Animation/Pattern speed (frames per second) 60 = Normal

uint8_t gCurrentPatternNumber  = 0;        // INDEX number of which pattern is current (for demoPatternList)
uint8_t gHue                   = 0;        // rotating "base color" used by many of the patterns
uint8_t ghue                   = 0;        // slower rotating "base color" used by many of the patterns

//==========================================================================================================================================
//==========================================================================================================================================
//^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^// 
//   _ U _         - U -         - U -         - U -           U           _ U _           U           _ U _         - U -         - U -    
//    /|\            |                          /|\                         /|\           /|\           /|\                          |   
//
//==========================================================================================================================================

void setup(){

//========================= Initialize LEDS              
  FastLED.setMaxPowerInVoltsAndMilliamps( VOLTS, MAX_MA);
  FastLED.addLeds<LED_TYPE,DATA_PIN,LED_COLOR_ORDER>(leds, NUM_LEDS).setCorrection( COLOR_CORRECTION );
  FastLED.setBrightness(GLOBAL_BRIGHTNESS);
  fadeToBlackBy( leds, NUM_LEDS,255);
  FastLED.clear();
  
 // for TwinkleFox
  chooseNextColorPalette(gTargetPalette);    // chooses next color palette to blend towards.
}
  
//==========================================================================================================================================
//========================= DEMO Pattern List

// List of patterns to cycle through. (all found in other tabs)
// GLITTER FOR ALL!! AAHHAHAHA!!! - change amount at top ^^ (...if you must!)

typedef void (*DemoPatternList[])();
DemoPatternList gPatterns = { 
 
#if defined(COLOR_MATCH)            //change at top if color match not wanted.

//------------------------------ (COLOR_MATCH)

  fireStarter,                      // Yellow
  cometEffect,                      // Yellow
  YellowRipple,
  paletteFairyGold,
  YellowWhiteRipple,
  YellowRedRipple,
  paletteFairyLight,
  CandleTree4,                      // Yellow
  paletteCandle,
  random_march,
  YellowGreenWhiteDot,
  GreenGreenWhiteDot,
  Glimmer,                          // Green
  GreenRipple,
  paletteGreenPurple,
  paletteforest,
  paletteGreenWhite,
  GreenWhiteRipple,
  paletteGreenWhiteStripes,
  matrix4,                          // Light Green
  GreenBlueWhiteDot,
  cometChaserYELLOW_GREEN,
  CandleTree2,                      // Green
  matrix5,                          // Light Green
  paletteholly,                     // Green
  paletteRedGreenWhite,
  paletteRedGoldGreen,
  matrix1,                          // Green
  RedGreenWhiteDot,
  matrix3,                          // Red
  paletteRedGreenAlt,
  paletteRedGreenAltFlash,
  paletteTraditionalRedGreen,        //(put after desired color for alt fill-in)
  paletteTraditionalRedGreenReverse, //(put after desired color for alt fill-in)
  paletteTraditionalRedGreenWhite,
  RedWhiteRipple,
  candycane,                        // Red/White
  paletteRedWhiteStripes,           // Red/White
  palettelava,                      // Red/White
  RedRipple,
  CandleTree1,                      // Red
  matrix2,                          // Blue
  BlueRipple,
  CandleTree3,                      // Blue
  GreenBlueRipple,
  paletteocean,                     // Blue
  palettecloud,                     // Blue/White
  BlueWhiteRipple,
  paletteIce,
  paletteIce2,
  paletteSnow,
  paletteBlueWhite,
  IridescentSparkle,    
  cometChaserAQUA,
  TurquoiseRipple,
  TurquoiseWhiteRipple,
  TurquoisePurpleRipple,
  matrix6,
  PurpleWhiteRipple,                // Purple
  PurpleRipple,                     // Purple
  rgb_propeller,                     // R,G,B
  paletteRetroC9,                    // R,G,B,O
  random_burst,
  sinelon2,                          // Rainbow
  sinelon,                           // Rainbow
  cometEffectSinelonGHUE_SLOW_RAINBOW,
  cometChaserRAINBOW,
  pixieDustBackground1,
  fireStarter_YELLOW_GREEN,  
  fireStarter_RAINBOW_PULSE_SLOW,
  fireStarterGHUE_RAINBOW,
  rainbow_pulse,                     // Rainbow
  rainbow_pulse2,                    // Rainbow
  paletterainbowstripe,              // Rainbow
  bighalfrainbow,                    // Rainbow
  paletteparty,                      // Mixed
  paletterainbowstripe2,             // Rainbow
  bigrainbow,                        // Rainbow
  paletterainbowstripe3,             // Rainbow
  rainbow3,                          // Rainbow
  rainbow,                           // Rainbow
  miniRainbow,                       // Rainbow
  rainbowDots,                       // Rainbow
  TwinkleFox,
  meteorRain,                       // White
#endif


#if !defined(COLOR_MATCH)   
//------------------------------ (ORIGINAL ORDER)

  CandleTree1,
  CandleTree2,
  CandleTree3,
  CandleTree4,
  RedGreenWhiteDot,
  GreenGreenWhiteDot,
  GreenBlueWhiteDot,
  YellowGreenWhiteDot,
  cometEffectSinelonGHUE_SLOW_RAINBOW,
  Glimmer,
  GreenBlueRipple,
  TurquoisePurpleRipple,
  YellowRedRipple,
  RedWhiteRipple,
  GreenWhiteRipple,
  BlueWhiteRipple,
  PurpleWhiteRipple,
  TurquoiseWhiteRipple,
  YellowWhiteRipple,
  RedRipple,
  GreenRipple,
  BlueRipple,
  PurpleRipple,
  TurquoiseRipple,
  YellowRipple,
  cometEffect,
  cometChaserYELLOW_GREEN,
  cometChaserAQUA,
  cometChaserRAINBOW,
  fireStarter,
  fireStarter_YELLOW_GREEN,
  pixieDustBackground1,
  fireStarter_RAINBOW_PULSE_SLOW,
  fireStarterGHUE_RAINBOW,
  paletteRedWhiteStripes,
  paletteRedGreenAlt,
  paletteRedGreenAltFlash,
  paletteholly,
  paletteocean,
  palettecloud,
  palettelava,
  paletteparty,
  paletteRetroC9,
  rgb_propeller,
  candycane,
  IridescentSparkle,
  sinelon2,
  sinelon,
  rainbow_pulse,
  rainbow_pulse2,
  paletterainbowstripe,
  paletterainbowstripe2,
  paletterainbowstripe3,
  bighalfrainbow,
  bigrainbow,
  rainbow,
  miniRainbow,
  rainbowDots,
  rainbow3,
  rainbow_loop,
  paletteBlueWhite,
  paletteGreenWhite,
  paletteGreenWhiteStripes,
  paletteforest,
  paletteSnow,
  paletteIce2,
  paletteIce,
  paletteTraditionalRedGreen,        //(put after desired color for alt fill-in)
  paletteTraditionalRedGreenReverse, //(put after desired color for alt fill-in)
  paletteTraditionalRedGreenWhite,
  paletteRedGreenWhite,
  paletteGreenPurple,
  paletteRedGoldGreen,
  paletteFairyGold,
  paletteFairyLight,
  paletteCandle,
  matrix1,
  matrix2,
  matrix3,
  matrix4,
  matrix5,
  matrix6,
  random_march,
  random_burst,
  TwinkleFox,
  meteorRain,
#endif
};             
                // Note: TwinkleFox will NOT run its full timing here (SECONDS_PER_PALETTE) 
                // as (SECONDS_PER_PATTERN) is in control of the looptime.
                // the effect still looks nice as a random palette happens each time its called from here<<<
                // (SECONDS_PER_PALETTE) works normal if "TwinkleFox();" is on a seperate button as its own loop.-
                // or if the overall (SECONDS_PER_PATTERN) is longer than:  TwinkleFox list of palettes x (SECONDS_PER_PALETTE)

// NOTE: to use the following cut or copy them into the list you are using above (COLOR_MATCH or ORIGINAL_ORDER list)
// You could also comment out all of the patterns you dont like in the lists above to make a shorter list maybe?.

//SPARE PATTERNS:

//colortwinkles,// this one will run from twinklefox timings (EVERY_N_MILLIS) & palette list (ActivePaletteList)
//solidGreenTwinkles,         //Nice but a bit too sparcely lit
//solidGreen2Twinkles,        // same
//solidGreen3Twinkles,        // same
//IridescentTwinkles,         // same
//classicTwinkles,            // same
//cloudTwinkles,              // same
//rainbowTwinkles,            // same
//snowTwinkles,               // same
//incandescentTwinkles,       //Nice but a bit too sparcely lit

//NewKITT_ALL,                // old one 

// NOTE: you can put addSparkle(); or addSparklebomb(); or addGreenSparkle(); instead of addGlitter();

//justGlitter,                // same(These were made as an example to show the different types of glitter)
//justSparkle,                // same(These were made as an example to show the different types of glitter)
//justSparkleOldSchool1,      // same(These were made as an example to show the different types of glitter)
//justSparkleOldSchool2,      // same(These were made as an example to show the different types of glitter)
//GreenSparkle,               // same(These were made as an example to show the different types of glitter)
//RedSparkle,                 // same(These were made as an example to show the different types of glitter)
//BlueSparkle,                // same(These were made as an example to show the different types of glitter)
//rgbSparkle,                 // a bit too flashy for room decorations fine for ornaments (^"""""""""""""""^)

//confetti,                   // a bit too flashy for room decorations fine for ornaments
//juggle,                     // Too quick for string lights that are at close proximity to you // better for strips. 
//sinelonWhite,               // ok but too Bland

//CandleON,     //messes with Brightness and color temp on exit... to be worked on for 2021!
//BlacklightON, //messes with Brightness and color temp on exit... to be worked on for 2021!

// NOTE: not ALL of these will fit on a 328p so i have only selected the best looking ones, 
// If you have a larger memory board you could add ALL of these back into the demolist.

//==========================================================================================================================================
//,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,// 
//          - U -         - U -         - U -           U           _ U _           U           _ U _         - U -         - U -    
//            |                          /|\                         /|\           /|\           /|\                          |   
//
//==========================================================================================================================================

// ------------------------------ Loop 

void loop(){                
  
  EVERY_N_MILLISECONDS( 1 ) { gHue++; }                                          // FAST - cycle the "base color" through the rainbow (Hue)
  EVERY_N_SECONDS( 1 )      { ghue++; }                                          // SLOW - cycle the "base color" through the rainbow (hue)
  EVERY_N_SECONDS( SECONDS_PER_PALETTE ) { chooseNextColorPalette( gTargetPalette );}             //  change palettes periodically
  EVERY_N_MILLISECONDS( 20 ) { nblendPaletteTowardPalette( gCurrentPalette, gTargetPalette, 12);} // blend current palette to next palette


switch (current_loop){

    case 1:
    {      
     gPatterns[gCurrentPatternNumber](); // Call the current pattern function once, updating the 'leds' array
     EVERY_N_SECONDS( SECONDS_PER_PATTERN ) { nextPattern();}  
      break;
    }

    case 2:
    { 
      TwinkleFox();                      // can be changed to any pattern you want... or maybe add more cases based off this example?
      break;
    }
}
  // send the 'leds' array out to the actual LED strip
  FastLED.show();  
  // insert a delay to keep the framerate modest
  FastLED.delay(1000/fps);
}

// Loopy stuff  >> ENDS HERE <<

//==========================================================================================================================================
//^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^// 
//   _ U _         - U -         - U -         - U -           U           _ U _           U           _ U _         - U -         - U -    
//    /|\            |                          /|\                         /|\           /|\           /|\                          |   

//==========================================================================================================================================
//============================= Choose next pattern from DemoPatternList

void nextPattern()
{  
  
  // add one to the current pattern number, and wrap around to top of pattern list if we get to the end.
  gCurrentPatternNumber = (gCurrentPatternNumber + 1) % ARRAY_SIZE( gPatterns);
 
}

//FIN*
//==========================================================================================================================================
//^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^`"`^-.,___,.-^// 
//   _ U _         - U -         - U -         - U -           U           _ U _           U           _ U _         - U -         - U -    
//    /|\            |                          /|\                         /|\           /|\           /|\                          |   
//
//==========================================================================================================================================

/*
Art by Shanaka Dias

    |,\/,| |[_' |[_]) |[_]) \\//
    ||\/|| |[_, ||'\, ||'\,  ||

            ___ __ __ ____  __  __  ____  _  _    __    __
           // ' |[_]| |[_]) || ((_' '||' |,\/,|  //\\  ((_'
           \\_, |[']| ||'\, || ,_))  ||  ||\/|| //``\\ ,_))
                                                               

                                         ,;7,
                                       _ ||:|,
                     _,---,_           )\'  '|
                   .'_.-.,_ '.         ',')  j
                  /,'   ___}  \        _/   /
      .,         ,1  .''  =\ _.''.   ,`';_ |
    .'  \        (.'T ~, (' ) ',.'  /     ';',
    \   .\(\O/)_. \ (    _Z-'`>--, .'',      ;
     \  |   I  _|._>;--'`,-j-'    ;    ',  .'
    __\_|   _.'.-7 ) `'-' "       (      ;'
  .'.'_.'|.' .'   \ ',_           .'\   /
  | |  |.'  /      \   \          l  \ /
  | _.-'   /        '. ('._   _ ,.'   \i
,--' ---' / k  _.-,.-|__L, '-' ' ()    ;
 '._     (   ';   (    _-}             |
  / '     \   ;    ',.__;         ()   /
 /         |   ;    ; ___._._____.: :-j
|           \,__',-' ____: :_____.: :-\
|               F :   .  ' '        ,  L
',             J  |   ;             j  |
  \            |  |    L            |  J
   ;         .-F  |    ;           J    L
    \___,---' J'--:    j,---,___   |_   |
              |   |'--' L       '--| '-'|
               '.,L     |----.__   j.__.'
                | '----'   |,   '-'  }
                j         / ('-----';
               { "---'--;'  }       |
               |        |   '.----,.'
               ',.__.__.'    |=, _/
                |     /      |    '.
                |'= -x       L___   '--,
                L   __\          '-----'
                 '.____)
*/
   
  //   Thankyou Daniel Garcia for the gift that keeps on giving ...Peace Love and Light Brother. 

