#include <iostream>
using namespace std;

main()
{
	int megabytes, bits;
	cout << "Enter MegaBytes ";
	cin >> megabytes;
	bits = 1024 * 1024 * 8 * megabytes;
	cout << "MegaBytes in Bits " << bits;
}
