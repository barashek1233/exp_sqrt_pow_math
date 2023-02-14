#include "math.h"

int main () {
  printf("%Lf\n", s21_exp(2.0));
  printf("%Lf\n", s21_sqrt(5.0));
  printf("%Lf\n", s21_pow(2.0, 2.0));
}

long double s21_exp(double x) {
    long double res = 1;
    if (nan(x)) {
        res = x < 0 ? -S21_NAN : S21_NAN;
    } else if (inf(x)) {
        res = x < 0 ? 0 : S21_INF;
    } else {
        long double num = x;
        long double fact = 1;
        long double step = 1;
        while (fabsl(step) > S21_EPS) {
            step *= num / fact;
            res += step;
            fact++;
        }
    }
    return res;
}

long double s21_sqrt(double x) {
    long double res = 4, y = 0;
    while (fabsl(res - y) > S21_EPS) {
        if (x < 0) {
            res = -0.0 / 0.0;
            break;
        }
        y = res;
        res = (y + x / y) / 2;
    }
    return res;
}

long double s21_pow(double base, double exp) {
  return s21_exp(exp * log(base));
}