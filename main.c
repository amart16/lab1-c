// Author Alex Martin

#include<stdio.h>
#include<readline/readline.h>

int main(void) {
  float fahrenheit;
  float celsius;
  printf("Enter temperature in celsius: ");
  scanf("%f",&celsius);
  fahrenheit=(1.8*celsius)+32;
  printf("\n%f° in Celsius is equivalent to %f° Fahrenheit.\n" , celsius, fahrenheit);
  return 0;
}