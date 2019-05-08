#include <iostream>

using std::cout;

namespace first_space{
        void func(){
                cout << "first space func" << std::endl;
        }
	namespace second_space{
		void  func(){
			cout << "second sapce func" << std::endl;
		}
	}
}

//using namespace first_space;
using namespace first_space::second_space;
int main()
{
        func();
        return 0;
}
