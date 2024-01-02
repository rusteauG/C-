#include <iostream>
#include <limits>
using namespace std;

int main() {
bool done=false;
	
	cout << "Infinite Loop!";
	cout <<"Min Value for Int " << numeric_limits<int>::min();
	cout << endl;
	cout <<"Max Value for Int " << numeric_limits<int>::max() << endl;
	cout <<"Min Value for Int " << numeric_limits<int>::digits << endl;
	std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;



return 0;
}
