#ifndef AikoDeviceButton_h
#define AikoDeviceButton_h

#define PIN_BUTTONS  2

extern int  buttonValue;
extern char buttonBuffer[5];

void buttonHandler(void);

#endif
