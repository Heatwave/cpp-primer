#include <cstddef>
#include <cstdlib>

int main30()
{
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix < array_size; ++ix)
		ia[ix] = ix;

	return EXIT_SUCCESS;
}
