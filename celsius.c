#include <stdio.h>

/* Print Fahrenheit-Celcius table */

main()
{
  float fahr, celcius;
  float lower, upper, step;

  lower = 10; // Lower limit of temperature scale
  upper = 300; // Upper limit of temperature scale
  step = 20; // Step size

  fahr = lower;

  while(fahr <= upper) {
     celcius = (5.0/9.0) * (fahr-32.0);
       printf("%3.0f %6.1f\n", fahr, celcius);
       fahr = fahr + step;
     }
}
