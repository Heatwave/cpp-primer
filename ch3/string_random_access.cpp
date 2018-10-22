#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int mainstringrandomaccess()
{
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numebrs between 0 and 15"
		<< " separated by spaces. Hit ENTER when finished: "
		<< endl;
	string result;
	string::size_type n;
	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
	cout << "Your hex number is: " << result << endl;

	system("pause");
	return 0;
}
