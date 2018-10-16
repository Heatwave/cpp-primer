#include <iostream>

int main1311()
{
	int start = 0, end = 0;
	std::cin >> start >> end;
	int sum = 0, val = start;
	for (int i = start; i <= end; i++)
	{
		sum += i;
	}
	std::cout << "Sum of " << start << " to " << end << " inclusive is "
		<< sum << std::endl;

	system("pause");
	return 0;
}
