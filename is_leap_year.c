int is_leap_year(int year)
{
	return ((year % 4 ) == 0) ? (!(year % 400) || (year % 100)) : 0;
}
