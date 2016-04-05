#include <math.h>

extern int is_even(int x);

double custom_sqrt(double x) {
  return sqrt(x);
}

int js_is_even(int x) {
	return is_even(x);
}
/*
int main() {
  is_even(5);
  return 1;
}
*/
