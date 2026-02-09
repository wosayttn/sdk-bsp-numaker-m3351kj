# M3351 Series

## Supported drivers

| Peripheral | rt_device_class_type | Device name |
| ------ | ----  | :------:  |
| BPWM (PWM function) | RT_Device_Class_Miscellaneous(PWM)| ***bpwm[0-1]*** |
| BPWM (CAPTURE function) | RT_Device_Class_Miscellaneous (Input capture)| ***bpwm[0-1]i[0-5]*** |
| CANFD | RT_Device_Class_CAN | ***canfd[0-1]*** |
| CRC | RT_Device_Class_Miscellaneous (HW Crypto) | ***hwcryto*** |
| CRYPTO | RT_Device_Class_Miscellaneous (HW Crypto) | ***hwcryto*** |
| DAC | RT_Device_Class_Miscellaneous (DAC) | ***dac[0-1]*** |
| DFMC | FAL | ***N/A*** |
| EADC | RT_Device_Class_Miscellaneous (ADC) | ***eadc[0, 1]*** |
| EBI | N/A | ***N/A*** |
| ECAP | RT_Device_Class_Miscellaneous (Input capture) | ***ecap0i[0-2]*** |
| EQEI | RT_Device_Class_Miscellaneous (Pulse encoder) | ***eqei[0-1]*** |
| FMC | FAL | ***N/A*** |
| GPIO | RT_Device_Class_Miscellaneous (Pin) | ***gpio*** |
| GPIO | RT_Device_Class_I2CBUS | ***softi2c0[0-1]*** |
| I2C | RT_Device_Class_I2CBUS | ***i2c[0-3]*** |
| PDMA | N/A | ***N/A*** |
| PWM | RT_Device_Class_Miscellaneous (PWM) | ***pwm[0-1]*** |
| QSPI | RT_Device_Class_SPIBUS | ***qspi0*** |
| RTC | RT_Device_Class_RTC | ***rtc*** |
| SPI | RT_Device_Class_SPIBUS | ***spi[0-1]*** |
| SPI (I2S function) | RT_Device_Class_Sound/RT_Device_Class_Pipe | ***spii2s[0-1]*** |
| TIMER | RT_Device_Class_Timer | ***timer[0-3]*** |
| TIMER (PWM function) | RT_Device_Class_Miscellaneous (PWM) | ***tpwm[0-3]*** |
| TRNG | RT_Device_Class_Miscellaneous (HW Crypto) | ***hwcryto*** |
| UART | RT_Device_Class_Char | ***uart[0-7]*** |
| USBD | RT_Device_Class_USBDevice | ***usbd*** |
| USBH | RT_Device_Class_USBHost | ***usbh*** |
| USCI (I2C function) | RT_Device_Class_I2CBUS | ***ui2c[0-1]*** |
| USCI (SPI function) | RT_Device_Class_SPIBUS | ***uspi[0-1]*** |
| USCI (UART function) | RT_Device_Class_Char | ***uuart[0-1]*** |
| WDT | RT_Device_Class_Miscellaneous (Watchdog) | ***wdt*** |

## Resources

* [Download M3351 TRM][1]

  [1]: Coming soon
