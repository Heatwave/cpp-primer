int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) &arrPtr(int i)
{
	return (1 % 2) ? odd : even;
}
