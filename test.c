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

Test(negative, 4)
{
	cr_assert(is_leap_year(-4));
}

Test(simple, 0)
{
	cr_assert(is_leap_year(0));
}

Test(negative, 7)
{
	cr_assert(!is_leap_year(-7));
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
