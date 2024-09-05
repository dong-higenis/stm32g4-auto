#include "hw.h"


volatile const firm_ver_t firm_ver __attribute__((section(".version"))) = 
{
  .magic_number = VERSION_MAGIC_NUMBER,
  .version_str  = _DEF_FIRMWATRE_VERSION,
  .name_str     = _DEF_BOARD_NAME,
  .firm_addr    = 0x08000000
};




bool hwInit(void)
{
  cliInit();
  logInit();
  swtimerInit();
  gpioInit();
  ledInit();
  buttonInit();
  i2cInit();
  uartInit();

  for (int i=0; i<HW_UART_MAX_CH; i++)
  {
    uartOpen(i, 115200);
  }
  logOpen(HW_UART_CH_RS485, 115200);
  logPrintf("\r\n[ Firmware Begin... ]\r\n");
  logPrintf("Booting..Name \t\t: %s\r\n", _DEF_BOARD_NAME);
  logPrintf("Booting..Ver  \t\t: %s\r\n", _DEF_FIRMWATRE_VERSION);
  logPrintf("Booting..Clock\t\t: %d Mhz\r\n", (int)HAL_RCC_GetSysClockFreq()/1000000);
  logPrintf("\n");

  framInit();
  rtcInit();
  canInit();
  usbInit();
  usbBegin(USB_CDC_MODE);
  cdcInit();

  return true;
}
