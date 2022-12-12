# Drivrutiner för temperatursensor TMP36 i C
Drivrutiner för avläsning samt utskrift av aktuell rumstemperatur med temperatursensor TMP36, 
ansluten till mikrodator ATmega328P. Programkod skriven i C.

Filen "tmp36.h" innehåller samtliga drivrutiner för mätning samt utskrift av rumstemperaturen via TMP36.

Filer "adc.h" samt "adc.c" innehåller drivrutiner för AD-omvandling, vilket används för att omvandla
den analoga insignalen från TMP36.

Filer "serial.h" samt "serial.c" innehåller drivrutiner för seriell överföring med USART, 
vilket används för att skriva ut rumstemperaturen via ansluten seriell terminal.

I filen "main.c" initieras systemet med temperatursensor TMP36 ansluten till analog pin A2 (PORTC2).
Temperaturen mäts och skrivs sedan ut i terminalen innan programmet avslutas.

Se video tutorial här:
https://youtu.be/dOoUvWOfoDE