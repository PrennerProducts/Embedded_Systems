cmake_minimum_required(VERSION 3.21)
project(GitHub_Exercise_Sheets)

set(CMAKE_CXX_STANDARD 14)

include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/buttoncycler")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/RGBWstrandtest")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/simple")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/simple_new_operator")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/strandtest")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/strandtest_nodelay")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/strandtest_wheel")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestArduinoBLE")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestArduinoBLECallback")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE")
include_directories("Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE_nodelay")
include_directories(Exercise_Sheet_2/lib/Adafruit-GFX-Library-master)
include_directories(Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/examples/GFXcanvas)
include_directories(Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/examples/mock_ili9341)
include_directories(Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts)
include_directories(Exercise_Sheet_2/lib/LedMatrix)
include_directories(Exercise_Sheet_2/lib/LedMatrix/examples)
include_directories(Exercise_Sheet_2/lib/LedMatrix/examples/MovingTextExample)
include_directories(Exercise_Sheet_2/lib/LedMatrix/examples/SimpleDrawingExample)
include_directories(Exercise_Sheet_2/src)
include_directories(Exercise_Sheet_3/src)
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/buttoncycler")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/RGBWstrandtest")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/simple")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/simple_new_operator")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/strandtest")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/strandtest_nodelay")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/strandtest_wheel")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestArduinoBLE")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestArduinoBLECallback")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE")
include_directories("Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE_nodelay")
include_directories(Exercise_Sheet_3_2_new/src)
include_directories(Exerxise_Sheet_1/include)
include_directories(New_Exercise_Sheet_1/include)

add_executable(GitHub_Exercise_Sheets
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/buttoncycler/buttoncycler.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/RGBWstrandtest/RGBWstrandtest.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/simple/simple.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/simple_new_operator/simple_new_operator.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/strandtest/strandtest.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/strandtest_nodelay/strandtest_nodelay.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/strandtest_wheel/strandtest_wheel.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestArduinoBLE/StrandtestArduinoBLE.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestArduinoBLECallback/StrandtestArduinoBLECallback.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE/BLESerial.cpp"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE/BLESerial.h"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE/StrandtestBLE.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE_nodelay/BLESerial.cpp"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE_nodelay/BLESerial.h"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/examples/StrandtestBLE_nodelay/StrandtestBLE_nodelay.ino"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/Adafruit_NeoPixel.cpp"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/Adafruit_NeoPixel.h"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/esp.c"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/esp8266.c"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/kendyte_k210.c"
        "Exercise_Sheet_2/.pio/libdeps/leonardo/Adafruit NeoPixel/rp2040_pio.h"
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/examples/GFXcanvas/GFXcanvas.ino
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/examples/GFXcanvas/GFXcanvasSerialDemo.cpp
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/examples/GFXcanvas/GFXcanvasSerialDemo.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/examples/mock_ili9341/mock_ili9341.ino
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/fontconvert/fontconvert.c
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMono12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMono18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMono24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMono9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBold12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBold18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBold24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBold9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBoldOblique12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBoldOblique18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBoldOblique24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoBoldOblique9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoOblique12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoOblique18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoOblique24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeMonoOblique9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSans12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSans18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSans24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSans9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBold12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBold18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBold24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBold9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBoldOblique12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBoldOblique18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBoldOblique24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansBoldOblique9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansOblique12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansOblique18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansOblique24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSansOblique9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerif12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerif18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerif24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerif9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBold12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBold18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBold24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBold9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBoldItalic12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBoldItalic18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBoldItalic24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifBoldItalic9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifItalic12pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifItalic18pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifItalic24pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/FreeSerifItalic9pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/Org_01.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/Picopixel.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/Tiny3x3a2pt7b.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Fonts/TomThumb.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_GFX.cpp
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_GFX.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_GrayOLED.cpp
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_GrayOLED.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_SPITFT.cpp
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_SPITFT.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/Adafruit_SPITFT_Macros.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/gfxfont.h
        Exercise_Sheet_2/lib/Adafruit-GFX-Library-master/glcdfont.c
        Exercise_Sheet_2/lib/LedMatrix/examples/MovingTextExample/MovingTextExample.ino
        Exercise_Sheet_2/lib/LedMatrix/examples/SimpleDrawingExample/SimpleDrawingExample.ino
        Exercise_Sheet_2/lib/LedMatrix/LedMatrix.cpp
        Exercise_Sheet_2/lib/LedMatrix/LedMatrix.h
        Exercise_Sheet_2/lib/LedMatrix/LedMatrixFont.cpp
        Exercise_Sheet_2/lib/LedMatrix/LedMatrixFont.h
        Exercise_Sheet_2/src/dibse.cpp
        Exercise_Sheet_2/src/dibse.h
        Exercise_Sheet_2/src/distance.cpp
        Exercise_Sheet_2/src/distance.h
        Exercise_Sheet_2/src/main.cpp
        Exercise_Sheet_3/src/main1.cpp
        Exercise_Sheet_3/src/sleep_delay.cpp
        Exercise_Sheet_3/src/sleep_delay.h
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/buttoncycler/buttoncycler.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/RGBWstrandtest/RGBWstrandtest.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/simple/simple.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/simple_new_operator/simple_new_operator.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/strandtest/strandtest.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/strandtest_nodelay/strandtest_nodelay.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/strandtest_wheel/strandtest_wheel.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestArduinoBLE/StrandtestArduinoBLE.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestArduinoBLECallback/StrandtestArduinoBLECallback.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE/BLESerial.cpp"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE/BLESerial.h"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE/StrandtestBLE.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE_nodelay/BLESerial.cpp"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE_nodelay/BLESerial.h"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/examples/StrandtestBLE_nodelay/StrandtestBLE_nodelay.ino"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/Adafruit_NeoPixel.cpp"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/Adafruit_NeoPixel.h"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/esp.c"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/esp8266.c"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/kendyte_k210.c"
        "Exercise_Sheet_3_2_new/lib/Adafruit NeoPixel/rp2040_pio.h"
        Exercise_Sheet_3_2_new/src/ampel.cpp
        Exercise_Sheet_3_2_new/src/ampel.h
        Exercise_Sheet_3_2_new/src/JoystickHigh.cpp
        Exercise_Sheet_3_2_new/src/JoystickHigh.h
        Exercise_Sheet_3_2_new/src/main2.cpp
        Exerxise_Sheet_1/include/bitoperations.h
        Exerxise_Sheet_1/src/main.cpp
        New_Exercise_Sheet_1/include/bitoperations.h
        New_Exercise_Sheet_1/src/main.cpp
        untitled/src/main.cpp)
