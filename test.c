#include <criterion/criterion.h>

int is_leap_year(int year);

Test(simple, 2016)
{
	cr_assert(is_leap_year(2016));
}

Test(simple, 2015)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, 4_neg)
{
	cr_assert(is_leap_year(-4));
}

Test(simple, 2012)
{
	cr_assert(is_leap_year(2012));
}
/**
Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}

Test(simple, two)
{
	cr_assert(!is_leap_year(2015));
}
**/
