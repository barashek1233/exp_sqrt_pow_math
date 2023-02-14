#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <math.h>

#define S21_INF __builtin_inf()
#define S21_NAN __builtin_nan("")
#define inf __builtin_isinf
#define nan __builtin_isnan

static const long double S21_EPS = 1e-10;
long double s21_exp(double x);
long double s21_sqrt(double x);
long double s21_pow(double base, double exp);

#endif //SRC_S21_MATH_H_