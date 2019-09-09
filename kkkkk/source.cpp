#include<iostream>

class LetDebug {
public:
	void printnum() {
		unsigned short s1 = 32767;
		unsigned short s2 = 1;
		unsigned short s3 = s1 + s2;

		std::cout << s3 << std::endl;
	}
};

int main() {
	LetDebug* ld = new LetDebug;
	ld->printnum();
	std::cout << "201402333" << std::endl;
	return 0;
}