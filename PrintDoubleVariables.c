#include <stdio.h>
int main() {
  // create double variables
  double number = 36.43;
  // print variable
  printf("%lf\n", number);
  /*
  Here, we have used the %lf format specifier to print the double variable. However, instead of 36.43, the 
  output is 36.430000. This is because double variables take 6 digits after decimal points, so it fills the 
  remaining places with random values (0 in this case).
  */
  printf("%.2lf", number);
  /*If we don't want those extra zeros in our output, we can omit them and print output up to 2 decimal points.
  All we have to do is add .2 after %.*/

  return 0;
}
