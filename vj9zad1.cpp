#include <iostream>
#include <string>



template <typename T>
T min(T a,T b) {
	return (a < b) ? a : b;
}


int main() {
	int a = 10;
	int b = 11;

	std::string s1 = "abc";
	std::string s2 = "dfge";
	
	std::cout << "manji broj je: " << ::min(a,b) << std::endl;
	std::cout << "manji string je: " << ::min(s1,s2) << std::endl;
	return 0;
}