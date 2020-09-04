#include <stdio.h>

int main(void) {
  float celsius;
  float fahrenheit;
  printf("Enter temperature in Celsius: ") ;
  scanf("%f",&celsius);
  fahrenheit=(1.8*celsius) +32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", celsius, fahrenheit);
  return 0;
}
