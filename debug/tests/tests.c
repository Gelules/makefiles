#include <criterion/criterion.h>

#include "calculator.h"

Test(add, zeroes)
{
    int a = 0;
    int b = 0;
    int res = add(a, b);
    int expected = a + b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(add, simple)
{
    int a = 42;
    int b = 51;
    int res = add(a, b);
    int expected = a + b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(add, negative)
{
    int a = 42;
    int b = -51;
    int res = add(a, b);
    int expected = a + b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(add, negatives)
{
    int a = -42;
    int b = -51;
    int res = add(a, b);
    int expected = a + b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(sub, zeroes)
{
    int a = 0;
    int b = 0;
    int res = sub(a, b);
    int expected = a - b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(sub, simple)
{
    int a = 42;
    int b = 51;
    int res = sub(a, b);
    int expected = a - b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(sub, negative)
{
    int a = 42;
    int b = -51;
    int res = sub(a, b);
    int expected = a - b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(sub, negatives)
{
    int a = -42;
    int b = -51;
    int res = sub(a, b);
    int expected = a - b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(multiply, zeroes)
{
    int a = 0;
    int b = 0;
    int res = multiply(a, b);
    int expected = a * b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(multiply, simple)
{
    int a = 42;
    int b = 666;
    int res = multiply(a, b);
    int expected = a * b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(multiply, negative)
{
    int a = 42;
    int b = -51;
    int res = multiply(a, b);
    int expected = a * b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(multiply, negatives)
{
    int a = -42;
    int b = -51;
    int res = multiply(a, b);
    int expected = a * b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(divide, simple)
{
    int a = 42;
    int b = 6;
    int res = divide(a, b);
    int expected = a / b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(divide, negative)
{
    int a = -42;
    int b = 6;
    int res = divide(a, b);
    int expected = a / b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(divide, negatives)
{
    int a = -42;
    int b = -6;
    int res = divide(a, b);
    int expected = a / b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(divide, divide_by_zero)
{
    int a = 666;
    int b = 0;
    int res = divide(a, b);
    int expected = 0;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(modulo, simple)
{
    int a = 42;
    int b = 6;
    int res = modulo(a, b);
    int expected = a % b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(modulo, negative)
{
    int a = -42;
    int b = 6;
    int res = modulo(a, b);
    int expected = a % b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(modulo, negatives)
{
    int a = -42;
    int b = -6;
    int res = modulo(a, b);
    int expected = a % b;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}

Test(modulo, modulo_by_zero)
{
    int a = 666;
    int b = 0;
    int res = modulo(a, b);
    int expected = 0;

    cr_assert_eq(res, expected, "Expected %d instead of %d\n", expected, res);
}
