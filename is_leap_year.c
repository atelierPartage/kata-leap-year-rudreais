int is_leap_year(int year)
{
	return (((year % 4) % 100) == 0) ? 1 : 0;
}
