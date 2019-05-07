#include <iostream>
using namespace std;
class Box
{
	public:
		Box(){
			cout << "invoke constructor function" << endl;
		}
		~Box(){
			cout << "invoke destroy function" << endl;
		}
};

int main()
{
	// new方法创建的对象是在堆中的需要手动free或delete	
	Box *p = new Box;
	cout << "p is created" << endl;

	// 此方法是函数的局部变量在栈中，函数结束就会销毁
	Box b;
	cout << "b is created" << endl;
	return 0;
}
