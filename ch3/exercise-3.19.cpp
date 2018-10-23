#include <vector>
using std::vector;

int main19()
{
	vector<int> ivec0(10, 42);

	vector<int> ivec1{ 42,42,42,42,42,42,42,42,42,42 };

	vector<int> ivec2;
	for (int i = 0; i < 10; i++)
	{
		ivec2.push_back(42);
	}

	return EXIT_SUCCESS;
}
