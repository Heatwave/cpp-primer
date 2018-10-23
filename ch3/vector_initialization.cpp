#include <vector>
#include <string>
using std::vector;
using std::string;

int mainvectorinit()
{
	vector<int> v1;
	vector<int> v2(v1);
	vector<int> v3 = v2;
	vector<int> v4(5, 0);
	vector<int> v5(5);
	vector<int> v6{ 1, 2, 3 };
	vector<int> v7 = { 1, 2, 3 };

	vector<int> i1(10);
	vector<int> i2{ 10 };
	vector<int> i3(10, 1);
	vector<int> i4{ 10, 1 };

	vector<string> s1{ "hi" };
	//vector<string> s2("hi");
	vector<string> s3{ 10 };
	vector<string> s4{ 10, "hi" };

	return EXIT_SUCCESS;
}
