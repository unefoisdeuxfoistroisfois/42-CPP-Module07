#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<class TElement, class TFunction>
void iter(TElement array[], const std::size_t length, TFunction function){

	for (std::size_t i = 0; i < length; i++){
	 	function(array[i]);
	}
}

#endif