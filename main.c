/********************************************************************************
* main.c: Demonstration av temperatursensor TMP36 för mätning samt utskrift 
*         av rumstemperaturen.
********************************************************************************/
#include "tmp36.h"

/********************************************************************************
* main: Ansluter temperatursensor TMP36 till analog pin A2. Rumstemperaturen
*       mäts och skrivs ut i ansluten seriell terminal.
********************************************************************************/
int main(void)
{
   struct tmp36 t1;
   tmp36_init(&t1, A2);
   tmp36_print_temperature(&t1);
   return 0;
}

