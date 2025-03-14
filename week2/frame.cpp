//frame.cpp
#include <iostream>
#include <string>

int main() {
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;

	//  **********************  //greeting 길이 + 4개 * (1st)
	//  *                    *  //greeting 길이 + 2공백 (2nd)
	//  *    Hello, Aaron!   *  //greeting 길이 + 4(3rd)
	//  *                    *  //greeting 길이 + 2공백(4th)
	//  **********************  //greeting 길이 + 4개의 * (5th)

	//인사 문자열 만들기
	const std::string greeting = "Hello, " + name + "!";   //const : 상수 -> 변경 불가

	//2번째, 4번째 줄 만들기
	const std::string spaces(greeting.size(), '  '); //null
	const std::string line24 = "* " + spaces + " *";

	//1번째, 5번째 줄 만들기
	const std::string line15(line24.size(), '*');  // " :  문자열, ' : 문자

	//인사 상자 출력
	std::cout << std::endl;
	std::cout << line15 << std::endl;
	std::cout << line24 << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << line24 << std::endl;
	std::cout << line15 << std::endl;

	return 0;
}