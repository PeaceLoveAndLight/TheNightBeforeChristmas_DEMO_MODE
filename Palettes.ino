//                                      ----------------                                                 //
    /////////////////////////////////     ALL PALETTES    ////////////////////////////////////////////
//                                      ----------------                                                 //
//Here are TwinkleFox palette colors by Mark Kriegsman, Custom palettes & built in FastLED palette colors

//(I TOLD THE ELVES NOT TO DECORATE HERE) - (FOR EASY COPYING TO YOUR OWN SKETCHES)
 //======================================================================

// For Green Ripple
const TProgmemRGBPalette16 RippleGreen_p FL_PROGMEM =
{  CRGB::Green,CRGB::Green,CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::Green, CRGB::Black, CRGB::Black, 
   CRGB::Green,CRGB::Black, CRGB::Green, CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::Green, CRGB::Black };

//======================================================================

// For Red Ripple
const TProgmemRGBPalette16 RippleRed_p FL_PROGMEM =
{  CRGB::Red,CRGB::Red,CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::Red, CRGB::Black, CRGB::Black, 
   CRGB::Red,CRGB::Black, CRGB::Red, CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::Red, CRGB::Black };

//======================================================================

// For Blue Ripple
const TProgmemRGBPalette16 RippleBlue_p FL_PROGMEM =
{  CRGB::Blue,CRGB::Blue,CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::Blue, CRGB::Black, CRGB::Black, 
   CRGB::Blue,CRGB::Black, CRGB::Blue, CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::Blue, CRGB::Black };

//======================================================================

// For Yellow Ripple
const TProgmemRGBPalette16 RippleYellow_p FL_PROGMEM =
{  CRGB::Yellow,CRGB::Yellow,CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::Yellow, CRGB::Black, CRGB::Black, 
   CRGB::Yellow,CRGB::Black, CRGB::Yellow, CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::Yellow, CRGB::Black };

//======================================================================

// For Purple Ripple
const TProgmemRGBPalette16 RipplePurple_p FL_PROGMEM =
{  CRGB::Purple,CRGB::Purple,CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::Purple, CRGB::Black, CRGB::Black, 
   CRGB::Purple,CRGB::Black, CRGB::Purple, CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::Purple, CRGB::Black };

//======================================================================

// For Turquoise Ripple
const TProgmemRGBPalette16 RippleTurquoise_p FL_PROGMEM =
{  CRGB::Cyan,  CRGB::Cyan,  CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::Cyan,  CRGB::Black, CRGB::Black, 
   CRGB::Cyan,  CRGB::Black, CRGB::Cyan,  CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::Cyan,  CRGB::Black };

//======================================================================

// For White Ripple
const TProgmemRGBPalette16 RippleWhite_p FL_PROGMEM =
{  CRGB::White,CRGB::White,CRGB::Black, CRGB::Black,
   CRGB::Black, CRGB::White, CRGB::Black, CRGB::Black, 
   CRGB::White,CRGB::Black, CRGB::White, CRGB::Black, 
   CRGB::Black, CRGB::Black, CRGB::White, CRGB::Black };

//======================================================================

// A mostly red palette with green accents and white trim.
const TProgmemRGBPalette16 RedGreenWhite_p FL_PROGMEM =
{  CRGB::White, CRGB::White, CRGB::Red, CRGB::Red, 
   CRGB::Green, CRGB::Green, CRGB::Green, CRGB::Green, 
   CRGB::Red, CRGB::Red, CRGB::Red, CRGB::Green,
   CRGB::Green, CRGB::Green, CRGB::Green, CRGB::Green };

//======================================================================

// A mostly (dark) green palette with red berries.
#define Holly_Green 0x00580c
#define Holly_Red   0xB00402
const TProgmemRGBPalette16 Holly_p FL_PROGMEM =
{  Holly_Green, Holly_Green, Holly_Green, Holly_Green, 
   Holly_Green, Holly_Green, Holly_Green, Holly_Green, 
   Holly_Green, Holly_Green, Holly_Green, Holly_Green, 
   Holly_Green, Holly_Green, Holly_Green, Holly_Red 
};

//======================================================================

// A red and white striped palette
const TProgmemRGBPalette16 RedWhiteStripes_p FL_PROGMEM =
{  CRGB::White, CRGB::White, CRGB::White, CRGB::White,
   CRGB::Red,  CRGB::Red,  CRGB::Red,  CRGB::Red, 
   CRGB::White, CRGB::White, CRGB::White, CRGB::White,
   CRGB::Red,  CRGB::Red,  CRGB::Red,  CRGB::Red };

//======================================================================

// A green and Purple palette
const TProgmemRGBPalette16 GreenPurple_p FL_PROGMEM =
{  CRGB::Lime,      CRGB::Lime,      CRGB::DarkGreen, CRGB::Purple,
   CRGB::LightGreen,CRGB::LawnGreen, CRGB::DarkGreen, CRGB::Purple,
   CRGB::Lime,      CRGB::Lime,      CRGB::DarkGreen, CRGB::Purple,
   CRGB::LightGreen,CRGB::LawnGreen, CRGB::DarkGreen, CRGB::Purple,};

//====================================================================== 

// A red, gold, green, white palette
const TProgmemRGBPalette16 RedGoldGreen_p FL_PROGMEM =
{  CRGB::Red,  CRGB::Gold,  CRGB::Green,  CRGB::Silver,
   CRGB::Red,  CRGB::Gold,  CRGB::Green,  CRGB::White,
   CRGB::Red,  CRGB::Gold,  CRGB::Green,  CRGB::Silver,
   CRGB::Red,  CRGB::Gold,  CRGB::Green,  CRGB::White};

//======================================================================

// A Yellow, gold, Silver, white palette
const TProgmemRGBPalette16 FairyGold_p FL_PROGMEM =
{  CRGB::Gold, CRGB::Gold, CRGB::FairyLightNCC, CRGB::Silver,
   CRGB::Gold, CRGB::FairyLight, CRGB::Gold, CRGB::Grey,
   CRGB::FairyLightNCC, CRGB::Gold, CRGB::FairyLightNCC, CRGB::Silver,
   CRGB::Gold, CRGB::FairyLight, CRGB::Gold, CRGB::Grey,};

//======================================================================  

// A green and white striped palette
// "CRGB::Silver" is used as white to keep the brightness more uniform.
const TProgmemRGBPalette16 GreenWhiteStripes_p FL_PROGMEM =
{  CRGB::Silver, CRGB::Silver, CRGB::Silver, CRGB::Silver,
   CRGB::Green,CRGB::Green,CRGB::Green,CRGB::Green, 
   CRGB::Silver, CRGB::Silver, CRGB::Silver, CRGB::Silver,
   CRGB::Green,CRGB::Green,CRGB::Green,CRGB::Green };

//======================================================================  

// A mostly light blue palette with white accents.
const TProgmemRGBPalette16 BlueWhite_p FL_PROGMEM =
{  CRGB::LightBlue, CRGB::LightBlue, CRGB::LightBlue, CRGB::LightBlue, 
   CRGB::LightBlue, CRGB::LightBlue, CRGB::LightBlue, CRGB::LightBlue,  
   CRGB::LightBlue, CRGB::Gray, CRGB::White, CRGB::Silver, 
   CRGB::CornflowerBlue, CRGB::Gray, CRGB::White, CRGB::Silver };

//======================================================================

// A mostly light green palette with white accents.
const TProgmemRGBPalette16 GreenWhite_p FL_PROGMEM =
{  CRGB::LightGreen, CRGB::LightGreen, CRGB::LightGreen, CRGB::LightGreen, 
   CRGB::LightGreen, CRGB::LightGreen, CRGB::LightGreen, CRGB::LightGreen, 
   CRGB::LightGreen, CRGB::Gray, CRGB::White, CRGB::Silver, 
   CRGB::Lime, CRGB::Gray, CRGB::White, CRGB::Silver };

//======================================================================

// A pure "fairy light" palette with some brightness variations
#define HALFFAIRY ((CRGB::FairyLight & 0xFEFEFE) / 2)
#define QUARTERFAIRY ((CRGB::FairyLight & 0xFCFCFC) / 4)
const TProgmemRGBPalette16 FairyLight_p FL_PROGMEM =
{  CRGB::FairyLightNCC, CRGB::FairyLightNCC, HALFFAIRY, CRGB::FairyLightNCC, 
   CRGB::FairyLightNCC, CRGB::FairyLightNCC, CRGB::FairyLightNCC, CRGB::FairyLightNCC,  
   CRGB::FairyLightNCC, HALFFAIRY, CRGB::FairyLightNCC, CRGB::FairyLightNCC,  
   QUARTERFAIRY , CRGB::FairyLightNCC, CRGB::FairyLightNCC, CRGB::FairyLightNCC };

//======================================================================

// A palette of soft snowflakes with the occasional bright one
const TProgmemRGBPalette16 Snow_p FL_PROGMEM =
{  0x304048, 0x304048, 0x304048, 0x304048,
   0x304048, 0x304048, 0x304048, 0x304048,
   0x304048, 0x304048, 0x304048, 0x304048,
   0x304048, 0x304048, 0x304048, 0xE0F0FF };

//======================================================================

// A palette reminiscent of large 'old-school' C9-size tree lights
// in the five classic colors: red, orange, green, blue, and white.
#define C9_Red    0xB80400
#define C9_Orange 0x902C02
#define C9_Green  0x046002
#define C9_Blue   0x070758
#define C9_White  0x606820
const TProgmemRGBPalette16 RetroC9_p FL_PROGMEM =
{  C9_Red,    C9_Red,    C9_Red,    C9_Red,
   C9_Orange, C9_Orange, C9_Orange, C9_Orange, 
   C9_Green,  C9_Green,  C9_Green,  C9_Green,
   C9_Blue,   C9_Blue,   C9_Blue,
   C9_White
};

//======================================================================

// A cold, icy pale blue palette
#define Ice_Blue1 0x0C1040
#define Ice_Blue2 0x182080
#define Ice_Blue3 0x5080C0
const TProgmemRGBPalette16 Ice_p FL_PROGMEM =
{
  Ice_Blue3, Ice_Blue3, Ice_Blue3, Ice_Blue3,
  Ice_Blue3, 0x304048, Ice_Blue3, Ice_Blue3,
  Ice_Blue3, Ice_Blue3, Ice_Blue3, Ice_Blue3,
  Ice_Blue1, Ice_Blue3, Ice_Blue3, Ice_Blue3
};
//======================================================================

// A green & pale blue palette
#define Ice_Blue1 0x0C1040
#define Ice_Blue2 0x182080
#define Ice_Blue3 0x5080C0
#define Holly_Green 0x00580c
const TProgmemRGBPalette16 Ice2_p FL_PROGMEM =
{
  Holly_Green, Holly_Green, Ice_Blue3, Holly_Green,
  Ice_Blue3, Ice_Blue3, Ice_Blue3, Ice_Blue3,
  Ice_Blue3, Ice_Blue3, Ice_Blue3, Ice_Blue3,
  Ice_Blue3, Ice_Blue3, Ice_Blue3, Ice_Blue3
};
//======================================================================

// icy BlackLight 
#define BlackLight 0xA700FF
const TProgmemRGBPalette16 PALBlacklight_p FL_PROGMEM =
{
  0x304048, BlackLight, BlackLight, BlackLight,
  BlackLight, BlackLight, BlackLight, BlackLight,
  BlackLight, BlackLight, BlackLight, BlackLight,
  BlackLight, BlackLight, BlackLight, BlackLight
};
//======================================================================

// A Warm Candle (or Bonfire!) 
#define Candleflame 0xFF9329

const TProgmemRGBPalette16 PALCandle_p FL_PROGMEM =
{
  CRGB::FairyLightNCC,CRGB::FairyLightNCC,CRGB::White,Candleflame,
  Candleflame,Candleflame,Candleflame,CRGB::FairyLightNCC,
  Candleflame,Candleflame,Candleflame,Candleflame,
  Candleflame,Candleflame,Candleflame,Candleflame,
};

//======================================================================

// A traditional palette with red and green (alternating).
const TProgmemRGBPalette16 TraditionalRedGreen_p FL_PROGMEM =
{  CRGB::Red, CRGB::Green, CRGB::Red, CRGB::Green, 
   CRGB::Red, CRGB::Green, CRGB::Red, CRGB::Green, 
   CRGB::Red, CRGB::Green, CRGB::Red, CRGB::Green, 
   CRGB::Red, CRGB::Green, CRGB::Red, CRGB::Green };

//======================================================================

// A traditional palette with red, green and white (alternating).
// "CRGB::Silver" is used as white to keep the brightness more uniform.
const TProgmemRGBPalette16 TraditionalRedGreenWhite_p FL_PROGMEM =
{  CRGB::Red, CRGB::Red, CRGB::Silver, CRGB::Red, 
   CRGB::Green, CRGB::Silver, CRGB::Green, CRGB::Green, 
   CRGB::Silver, CRGB::Red, CRGB::Green, CRGB::Silver, 
   CRGB::Red, CRGB::Green, CRGB::Silver, CRGB::Green };
   
//======================================================================

const TProgmemRGBPalette16 SolidColorsGreens_p FL_PROGMEM =
{
CRGB::LightGreen,CRGB::LightGreen,CRGB::Green,CRGB::Green,
CRGB::Green,CRGB::Green,CRGB::Green,CRGB::Green,
CRGB::Green,CRGB::LightGreen,CRGB::Green,CRGB::LawnGreen,
CRGB::Green,CRGB::LawnGreen,CRGB::Green,CRGB::Green };

//======================================================================

const TProgmemRGBPalette16 SolidColorsGreens2_p FL_PROGMEM =
{
CRGB::SeaGreen,CRGB::SeaGreen,CRGB::Green,CRGB::Green,
CRGB::SpringGreen,CRGB::SpringGreen,CRGB::SpringGreen,CRGB::SpringGreen,
CRGB::Green,CRGB::SeaGreen,CRGB::Green,CRGB::LawnGreen,
CRGB::Green,CRGB::LawnGreen,CRGB::SpringGreen,CRGB::SpringGreen};

//======================================================================

const TProgmemRGBPalette16 SolidColorsGreens3_p FL_PROGMEM =
{
CRGB::Olive,CRGB::Olive,CRGB::OliveDrab,CRGB::OliveDrab,
CRGB::OliveDrab,CRGB::OliveDrab,CRGB::ForestGreen,CRGB::ForestGreen,
CRGB::ForestGreen,CRGB::ForestGreen,CRGB::Olive,CRGB::Olive,
CRGB::ForestGreen,CRGB::ForestGreen,CRGB::OliveDrab,CRGB::OliveDrab};

//======================================================================

const TProgmemRGBPalette16 Iridescent_p FL_PROGMEM =
{
CRGB::Cyan,CRGB::Cyan,CRGB::Indigo,CRGB::PaleTurquoise,
CRGB::MediumTurquoise,CRGB::Cyan,CRGB::PaleTurquoise,CRGB::CornflowerBlue,
CRGB::Aqua,CRGB::MediumTurquoise,CRGB::Aqua,CRGB::PaleTurquoise,
CRGB::SpringGreen,CRGB::Cyan,CRGB::Indigo,CRGB::MediumTurquoise};

//======================================================================

// For TwinkleFOX
// Add or remove palette names from this list to control which color
// palettes are used, and in what order.

const TProgmemRGBPalette16* ActivePaletteList[] = {

  &Iridescent_p, 
  &SolidColorsGreens_p,
  &SolidColorsGreens2_p,
  &SolidColorsGreens3_p, 
  &FairyLight_p,
  &PALCandle_p,
  &Ice_p,
  &Ice2_p,  
  &BlueWhite_p,
  &RedWhiteStripes_p,
  &GreenWhiteStripes_p,
  &RedGreenWhite_p,
  &Holly_p,
  &ForestColors_p,  
  &FairyGold_p,
  &TraditionalRedGreenWhite_p,
  &GreenWhite_p,
  &GreenPurple_p,
  &TraditionalRedGreen_p,
  &RedGoldGreen_p,
  &RetroC9_p,
//  &LavaColors_p, //goes too dim
 //  &Snow_p,     //goes too dim
};

// Advance to the next color palette in the list (above).
void chooseNextColorPalette( CRGBPalette16& pal)
{
  const uint8_t numberOfPalettes = sizeof(ActivePaletteList) / sizeof(ActivePaletteList[0]);
  static uint8_t whichPalette = -1; 
  whichPalette = addmod8( whichPalette, 1, numberOfPalettes);

  pal = *(ActivePaletteList[whichPalette]);
}


//*TwinkleFox palette End*


// ColorTwinkles by Mark Kriegsman: https://gist.github.com/kriegsman/5408ecd397744ba0393e

uint8_t solidGreenTwinkles()
{
  gCurrentPalette = SolidColorsGreens_p;
  colortwinkles();
}

uint8_t solidGreen2Twinkles()
{
  gCurrentPalette = SolidColorsGreens2_p;
  colortwinkles();
}

uint8_t solidGreen3Twinkles()
{
  gCurrentPalette = SolidColorsGreens3_p;
  colortwinkles();
}

uint8_t IridescentTwinkles()
{
  gCurrentPalette = Iridescent_p;
  colortwinkles();
}

uint8_t classicTwinkles()
{
  gCurrentPalette = RetroC9_p;
  colortwinkles();
}

uint8_t cloudTwinkles()
{
  gCurrentPalette = CloudColors_p; // Blues and whites!
  colortwinkles();
}

uint8_t rainbowTwinkles()
{
  gCurrentPalette = RainbowColors_p;
  colortwinkles();
}

uint8_t snowTwinkles()
{
  CRGB w(85,85,85), W(CRGB::White);
  gCurrentPalette = CRGBPalette16( W,W,W,W, w,w,w,w, w,w,w,w, w,w,w,w );
  colortwinkles();
}

uint8_t incandescentTwinkles()
{
  CRGB l(0xE1A024);
  gCurrentPalette = CRGBPalette16( l,l,l,l, l,l,l,l, l,l,l,l, l,l,l,l );
  colortwinkles();
}

#define STARTING_BRIGHTNESS GLOBAL_BRIGHTNESS/2
#define FADE_IN_SPEED       20
#define FADE_OUT_SPEED      10
#define DENSITY             3

enum { GETTING_DARKER = 0, GETTING_BRIGHTER = 1 };

void colortwinkles()
{
  // Make each pixel brighter or darker, depending on
  // its 'direction' flag.
  brightenOrDarkenEachPixel( FADE_IN_SPEED, FADE_OUT_SPEED);
  // Now consider adding a new random twinkle
  if( random8() > DENSITY ) {
    int pos = random16(NUM_LEDS);
    if( !leds[pos]) {
      leds[pos] = ColorFromPalette(gCurrentPalette, random8(), STARTING_BRIGHTNESS, LINEARBLEND);
      setPixelDirection(pos, GETTING_BRIGHTER);
    }
  }
}

void brightenOrDarkenEachPixel( fract8 fadeUpAmount, fract8 fadeDownAmount)
{
 for( uint16_t i = 0; i < NUM_LEDS; i++) {
    if( getPixelDirection(i) == GETTING_DARKER) {
      // This pixel is getting darker
      leds[i] = makeDarker( leds[i], fadeDownAmount);
    } else {
      // This pixel is getting brighter
      leds[i] = makeBrighter( leds[i], fadeUpAmount);
      // now check to see if we've maxxed out the brightness
      if( leds[i].r == 255 || leds[i].g == 255 || leds[i].b == 255) {
        // if so, turn around and start getting darker
        setPixelDirection(i, GETTING_DARKER);
      }
    }
  }
}

CRGB makeBrighter( const CRGB& color, fract8 howMuchBrighter)
{
  CRGB incrementalColor = color;
  incrementalColor.nscale8( howMuchBrighter);
  return color + incrementalColor;
}

CRGB makeDarker( const CRGB& color, fract8 howMuchDarker)
{
  CRGB newcolor = color;
  newcolor.nscale8( 255 - howMuchDarker);
  return newcolor;
}

// Compact implementation of
// the directionFlags array, using just one BIT of RAM
// per pixel.  This requires a bunch of bit wrangling,
// but conserves precious RAM.  The cost is a few
// cycles and about 100 bytes of flash program memory.
uint8_t  directionFlags[ (NUM_LEDS+7) / 8];

bool getPixelDirection( uint16_t i)
{
  uint16_t INDEX = i / 8;
  uint8_t  bitNum = i & 0x07;

  uint8_t  andMask = 1 << bitNum;
  return (directionFlags[INDEX] & andMask) != 0;
}

void setPixelDirection( uint16_t i, bool dir)
{
  uint16_t INDEX = i / 8;
  uint8_t  bitNum = i & 0x07;

  uint8_t  orMask = 1 << bitNum;
  uint8_t andMask = 255 - orMask;
  uint8_t value = directionFlags[INDEX] & andMask;
  if( dir ) {
    value += orMask;
  }
  directionFlags[INDEX] = value;
}

//===================================================================================================================================================



//======================================================================
// Normal palettes to use as a pattern.  vvvvv below this point vvvvv
//======================================================================


void palettecloud()
{
// FastLED.setBrightness(GLOBAL_BRIGHTNESS);// Set brightness
  CRGBPalette16 palette = CloudColors_p; LINEARBLEND;
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletteocean()
{  
  CRGBPalette16 palette = OceanColors_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletteforest()
{  
  CRGBPalette16 palette = ForestColors_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void palettelava()
{ 
  CRGBPalette16 palette = LavaColors_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i),GLOBAL_BRIGHTNESS);
//  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletteparty()
{  
  CRGBPalette16 palette = PartyColors_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletterainbowstripe()
{ 
  CRGBPalette16 palette = RainbowStripeColors_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*1),GLOBAL_BRIGHTNESS);
  addGlitter(SPARKLEBOMB_AMOUNT);
  }
    FastLED.delay(30);
}

//======================================================================

void paletterainbowstripe2()
{ 
  CRGBPalette16 palette = RainbowStripeColors_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addGlitter(SPARKLEBOMB_AMOUNT);
  }
    FastLED.delay(30);
}

//======================================================================

void paletterainbowstripe3()
{ 
  CRGBPalette16 palette = RainbowStripeColors_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*3),GLOBAL_BRIGHTNESS);
  addGlitter(SPARKLEBOMB_AMOUNT);
  }
    FastLED.delay(30);
}

//======================================================================

void paletteholly()
{  
  CRGBPalette16 palette = Holly_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  }
  addGlitter(GLITTER_AMOUNT/2);  
}

//======================================================================

void paletteFairyLight()
{ 
//  FastLED.setBrightness(GLOBAL_BRIGHTNESS-10);// Set brightness
  CRGBPalette16 palette = FairyLight_p; LINEARBLEND;
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  }
  addGlitter(GLITTER_AMOUNT); 
} 

//======================================================================

void paletteRetroC9()
{  
  CRGBPalette16 palette = RetroC9_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*4),GLOBAL_BRIGHTNESS);
}
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void paletteFairyGold()
{ 
//  FastLED.setBrightness((GLOBAL_BRIGHTNESS)-10);// Set brightness
  CRGBPalette16 palette = FairyGold_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*1),GLOBAL_BRIGHTNESS);
  addGlitter(GLITTER_AMOUNT/4);
  }
   FastLED.delay(60);
}

//======================================================================
void paletteGreenPurple()
{  
  CRGBPalette16 palette = GreenPurple_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================
void paletteRedGoldGreen()
{ 
  CRGBPalette16 palette = RedGoldGreen_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
   FastLED.delay(30);
}

//======================================================================
void paletteRedWhiteStripes()
{  
  CRGBPalette16 palette = RedWhiteStripes_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================
void paletteGreenWhiteStripes()
{  
  CRGBPalette16 palette = GreenWhiteStripes_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletteRedGreenWhite()
{  
  CRGBPalette16 palette = RedGreenWhite_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletteSnow()
{  
  CRGBPalette16 palette = Snow_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
//  addSparkle(SPARKLEBOMB_AMOUNT);
  }
 addIridescentSparkle(GLITTER_AMOUNT);
 }

//======================================================================

void paletteBlueWhite()
{  
  CRGBPalette16 palette = BlueWhite_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  }
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void paletteGreenWhite()
{  
  CRGBPalette16 palette = GreenWhite_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  }
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void paletteIce()
{  
  CRGBPalette16 palette = Ice_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  }
 addIridescentSparkle(GLITTER_AMOUNT);
}

//======================================================================

void paletteIce2()
{  
  CRGBPalette16 palette = Ice2_p;LINEARBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
 }
 addIridescentSparkle(GLITTER_AMOUNT);
}

//======================================================================

void paletteTraditionalRedGreenWhite()
{  
  CRGBPalette16 palette = TraditionalRedGreenWhite_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
   }
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void paletteTraditionalRedGreen()
{  
  CRGBPalette16 palette = TraditionalRedGreen_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue-(i++),GLOBAL_BRIGHTNESS);
  }
}

//======================================================================

void paletteTraditionalRedGreenReverse()
{  
  CRGBPalette16 palette = TraditionalRedGreen_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i++),GLOBAL_BRIGHTNESS);
  }
}

//======================================================================

void paletteRedGreenAlt()
{  
  CRGBPalette16 palette = TraditionalRedGreen_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette,gHue=(i*8),GLOBAL_BRIGHTNESS);
  }
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

void paletteRedGreenAltFlash()
{  
  CRGBPalette16 palette = TraditionalRedGreen_p;NOBLEND;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
//    delay(1);
  }
}

//======================================================================

void paletteBlacklight()
{  
  CRGBPalette16 palette = PALBlacklight_p;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
}

//======================================================================

void paletteCandle()
{  
//  FastLED.setBrightness(GLOBAL_BRIGHTNESS-10);// Set brightness
  CRGBPalette16 palette = PALCandle_p;
  
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2),GLOBAL_BRIGHTNESS);
  addSparkle(SPARKLEBOMB_AMOUNT);
  }
  addGlitter(GLITTER_AMOUNT);
}

//======================================================================

//  USED BY CANDLE TREE

void addCandles( fract8 chanceOfSparkle)  // like Glitter but flicker instead
{ 
  int i=0;
for(int i; i<NUM_LEDS; i+=5){              // put a "candle" every 5 and now [i] is controlling every 5 only

//   leds[i] += Candleflame;               // solid candle background
  CRGBPalette16 palette = FairyLight_p;LINEARBLEND;   // moving backgrounds
//  CRGBPalette16 palette = PALCandle_p;
//  CRGBPalette16 palette = HeatColors_p;
//  CRGBPalette16 palette = LavaColors_p;
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);

  if( random8() < chanceOfSparkle) {     // dimming/flicker
    leds[i] += CRGB::Maroon;}            // (Maroon) 

}    
  FastLED.delay(random(0,40));
}

//======================================================================

//  USED BY GREEN RIPPLE

void addGreenRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleGreen_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleGreen_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY RED RIPPLE

void addRedRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleRed_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleRed_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY BLUE RIPPLE

void addBlueRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleBlue_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleBlue_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY YELLOW RIPPLE

void addYellowRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleYellow_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleYellow_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY PURPLE RIPPLE

void addPurpleRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RipplePurple_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RipplePurple_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY TURQUOISE RIPPLE

void addTurquoiseRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleTurquoise_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleTurquoise_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY RED WHITE RIPPLE

void addRedWhiteRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleRed_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleWhite_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY GREEN WHITE RIPPLE

void addGreenWhiteRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleGreen_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleWhite_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY BLUE WHITE RIPPLE

void addBlueWhiteRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleBlue_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleWhite_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY PURPLE WHITE RIPPLE

void addPurpleWhiteRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RipplePurple_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleWhite_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY YELLOW WHITE RIPPLE

void addYellowWhiteRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleYellow_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleWhite_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY TURQUOISE WHITE RIPPLE

void addTurquoiseWhiteRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleTurquoise_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleWhite_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY GREEN BLUE RIPPLE

void addGreenBlueRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleGreen_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleBlue_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY TURQUOISE PURPLE RIPPLE

void addTurquoisePurpleRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleTurquoise_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RipplePurple_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

//  USED BY YELLOW RED RIPPLE

void addYellowRedRipple( fract8 chanceOfSparkle)  { 
  if( random8() < chanceOfSparkle) {                   //Glitter
    leds[random16(0,NUM_LEDS)] += CRGB::White;}   
  int i=0;
  for(int i; i<NUM_LEDS; i++){              
  CRGBPalette16 palette = RippleYellow_p;LINEARBLEND;   // moving backgrounds
  leds[i] += ColorFromPalette(palette,gHue+(i*8),GLOBAL_BRIGHTNESS);
}
  int j=0;
  for(int j; j<NUM_LEDS; j++){              
  CRGBPalette16 palette = RippleRed_p;LINEARBLEND;   // moving backgrounds

  leds[j] += ColorFromPalette(palette,gHue-(j*8),GLOBAL_BRIGHTNESS);
}
}

//======================================================================

void BlacklightON()  // messes up color temps on exit :( shame...
{
   FastLED.setTemperature(BlackLightFluorescent); // culprit... You need to reset color temp back to normal on exit  
   fill_solid(leds,NUM_LEDS,(BlackLightFluorescent));//fill strip
}

//======================================================================    

void CandleON()  // messes up color temps on exit :(
{
   FastLED.setTemperature(Candle);  // culprit... You need to reset color temp back to normal on exit
   fill_solid(leds,NUM_LEDS,(Candle));//fill strip
   FastLED.delay(50);
    addSparkle(GLITTER_AMOUNT);
    addGlitter(GLITTER_AMOUNT);
}

//======================================================================    

void clear_leds()
{
  fadeToBlackBy( leds, NUM_LEDS,120);
  FastLED.clear();
}


//======================================================================    
//*Palette list End*  
