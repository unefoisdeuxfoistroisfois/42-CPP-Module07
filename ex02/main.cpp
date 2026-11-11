#include "Array.hpp"
#include <iostream>
#include <string>

int main(){

  // Test du constructeur par defaut : tableau vide.
	Array<int> empty;
  std::cout << "Empty array size: " << empty.size() << std::endl;

  // Test de la taille et de l'initialisation des entiers a zero.
	Array<int> numbers(3);
	std::cout << "Numbers array size: " << numbers.size() << std::endl;

	for (std::size_t i = 0; i < numbers.size(); i++) {
		std::cout << numbers[i] << ' ';
  }

	std::cout << std::endl;

  // Test de la copie profonde : modifier la copie preserve l'original.
	numbers[0] = 42;
	
	Array<int> copy(numbers);
	copy[0] = 99;
	
	std::cout << "Original: " << numbers[0] << std::endl;
	std::cout << "Copy: " << copy[0] << std::endl;

  // Test de l'affectation : nouvelle taille et contenu independant.
	Array<int> assigned(1);
	assigned = numbers;
	assigned[0] = 77;

	std::cout << "Assigned size: " << assigned.size() << std::endl;
	std::cout << "Original: " << numbers[0] << std::endl;
	std::cout << "Assigned: " << assigned[0] << std::endl;

  // Test de l'exception pour un indice egal a la taille.
	try {
	    std::cout << numbers[numbers.size()] << std::endl;
	}
	catch (const std::exception &e) {
	    std::cout << "Caught exception: " << e.what() << std::endl;
	}

  // Test de la lecture avec la surcharge constante de [].
	const Array<int> constCopy(numbers);
	std::cout << "Const access: " << constCopy[0] << std::endl;

	// Test du template avec des std::string.
	Array<std::string> words(2);
	words[0] = "hello";
	words[1] = "world";
	
	std::cout << words[0] << ' ' << words[1] << std::endl;

  // Test de l'exception lors d'un acces au tableau vide.
	try {
	    std::cout << empty[0] << std::endl;
	}
	catch (const std::exception &e) {
	    std::cout << "Empty array exception: " << e.what() << std::endl;
	}

	// Test de l'affectation d'un tableau vide a un tableau rempli.
	assigned = empty;

	std::cout << "Assigned size after empty assignment: " << assigned.size() << std::endl;

	return (0);
}
