#include <math.h>

extern void is_even(int x);

extern "C" {

double custom_sqrt(double x) {
  return sqrt(x);
}

}

