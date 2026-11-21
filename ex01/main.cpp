#include "iter.hpp"
#include <iostream>
#include <string>
#include <cctype>

template <class T>
void ftPrint(const T &value){
	std::cout << value << " ";
}

void ftUppercase(std::string &str){
	for (size_t i = 0; i < str.length(); i++){
		str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
	}
}

//void ftAddOne(int &i){
	//i ++;
//}
template <class T>
void ftAddOne(T &value){
	value++;
}

int main(){
	// tab int
	int tab[] = {1, 2, 3};
	std::size_t lengthTab = sizeof(tab) / sizeof(tab[0]);
	::iter(tab, lengthTab, ftPrint<int>); // ou juste ftPrint le compil desuis par lui mm.
  std::cout << std::endl;
	::iter(tab, lengthTab, ftAddOne<int>); // ou juste ftPrint le compil desuis par lui mm.
	::iter(tab, lengthTab, ftPrint<int>); // ou juste ftPrint le compil desuis par lui mm.
  std::cout << std::endl;

	//tab char
  std::cout << std::endl;
	std::string tabWords[] = {"salut", "bonjour"};
	::iter(tabWords, 2, ftPrint<std::string>);
  std::cout << std::endl;
	::iter(tabWords, 2, ftUppercase);
	::iter(tabWords, 2, ftPrint<std::string>);
  std::cout << std::endl;

	// tab int
  std::cout << std::endl;
	int constTab[] = {4, 5, 6};
	::iter(constTab, 3, ftPrint<int>);
	std::cout << std::endl;
	::iter(constTab, 3, ftAddOne<int>);
	::iter(constTab, 3, ftPrint<int>);
	std::cout << std::endl;

	return (0);
}