// Author Alex Martin

#include<stdio.h>
#include<readline/readline.h>

int main(void) {
  float fahrenheit;
  float celsius;
  printf("Enter temperature in celsius: ");
  scanf("%f",&celsius);
  fahrenheit=(1.8*celsius)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit." , celsius, fahrenheit);
  return 0;
}