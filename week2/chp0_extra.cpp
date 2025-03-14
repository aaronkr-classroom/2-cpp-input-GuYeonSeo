//chp0_extra.cpp
#include <iostream>
#include <string>

int main() {
	//Hello world 프로그램 전체 문자열
	std::string inc1 = "#include <iostream>";
	std::string def = "int main() {";
	std::string printf = "\tstd::cout << \"Hello, world!\" << std::endl;";
	std::string ret = "\treturn 0;";
	std::string end = "}";

	//Hello world 프로그램 출력
	std::cout << inc1 << std::endl << std::endl
		<< def << std::endl
		<< printf << std::endl
		<< ret << std::endl
		<< end << std::endl;

	return 0;
}