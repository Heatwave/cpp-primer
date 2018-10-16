#include <iostream>

int main19()
{
	int start = 0, end = 0;
	std::cin >> start >> end;

	if (start > end) {
		int temp = end;
		end = start;
		start = temp;
	}

	int sum = 0, val = start;

	while (val <= end)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of " << start << " to " << end << " inclusive is "
		<< sum << std::endl;

	system("pause");
	return 0;
}
