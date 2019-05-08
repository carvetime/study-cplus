#include <iostream>


void demo1(){
	int a = 1;
        int &ra = a;
        //int &rb;  //error: vaule can't be empty
        const int &rb = 10;
	std::cout << "demo1" ;
}

void demo2(){
	//int& ra = 1; // error:non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int' 
}

void demo3(){
	int a = 1;
	int b = 2;
	int&ra = a;
	//int&ra = b; //error: can't change value of target;
}

void demo4(){
	int * p; // inital value can be empty;
}

int main()
{
	
        return 0;
}

