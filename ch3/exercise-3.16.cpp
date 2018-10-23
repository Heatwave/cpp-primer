#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main16()
{
	vector<int> v1;
	cout << "v1 size: " << v1.size();
	cout << " elements: ";
	for (auto i : v1)
		cout << i << " ";
	cout << endl;

	vector<int> v2(10);
	cout << "v2 size: " << v2.size();
	cout << " elements: ";
	for (auto i : v2)
		cout << i << " ";
	cout << endl;

	vector<int> v3(10, 42);
	cout << "v3 size: " << v3.size();
	cout << " elements: ";
	for (auto i : v3)
		cout << i << " ";
	cout << endl;

	vector<int> v4{ 10 };
	cout << "v4 size: " << v4.size();
	cout << " elements: ";
	for (auto i : v4)
		cout << i << " ";
	cout << endl;

	vector<int> v5{ 10, 42 };
	cout << "v5 size: " << v5.size();
	cout << " elements: ";
	for (auto i : v5)
		cout << i << " ";
	cout << endl;

	vector<string> v6{ 10 };
	cout << "v6 size: " << v6.size();
	cout << " elements: ";
	for (auto s : v1)
		cout << s << " ";
	cout << endl;

	vector<string> v7{ 10, "hi" };
	cout << "v7 size: " << v7.size();
	cout << " elements: ";
	for (auto s : v7)
		cout << s << " ";
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
