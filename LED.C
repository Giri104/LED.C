#include <AT89S52.h>
void delay(void);
{
  P2_0=0;    	/*Turn ON the LED */
  while(1)  	/* Super loop (Infinite loop) */
  {
  }
 while(1)
 {
  P2_0=0;
  delay();
  P2_0=1;
  delay();
 }
}

void wait()
void delay(void)
{
  int i;
  for(i=0;i<10;i++) /* generate a dummy loop with 10 counts */
  {
  }
 int i;
 for(i=0;i<100;i++)
 {}
