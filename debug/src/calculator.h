#ifndef CALCULATOR_H
#define CALCULATOR_H

typedef int (* const operation)(const int, const int);

int add(const int a, const int b);
int sub(const int a, const int b);
int multiply(const int a, const int b);
int divide(const int a, const int b);
int modulo(const int a, const int b);

#endif /* !CALCULATOR_H */
