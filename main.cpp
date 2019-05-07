#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
	cout << "type \t\t" << "************size**********"<< endl;
	cout << "bool \t\t" << "所占字节数:" << sizeof(bool);
	cout << "\t最大值:" << (numeric_limits<bool>::max)();
	cout << "\t最小值:" << (numeric_limits<bool>::min)() << endl;
	cout << "type \t\t" << "************size**********"<< endl;
	return 0;
}
