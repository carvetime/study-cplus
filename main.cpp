#include <iostream>

void func(void);

int main(){
	int count = 10;
	while(count--){
		func();
	}
	return 0;
}
void func(void){
	static int i = 5;
	i++;
	std::cout << "i value is " << i << std::endl;
}
