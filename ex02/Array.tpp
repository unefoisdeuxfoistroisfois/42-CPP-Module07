template <class T>
Array<T>::Array() {
	this->_array = NULL;
	this->_sizeArray = 0;
}

template <class T>
Array<T>::Array(unsigned int n){
	this->_array = new T[n](); // Alloué le type T ex : Array<int> devient new int[n]()
	this->_sizeArray = n;
}

template <class T>
Array<T>::Array(const Array &src){

	this->_array = new T[src._sizeArray]();
	this->_sizeArray = src._sizeArray;

	for (std::size_t i = 0; i < this->_sizeArray; i++){
		this->_array[i] = src._array[i];
	}
}

// obj deja existant
template <class T>
Array<T> &Array<T>::operator=(const Array &rhs){

	if (this != &rhs){
		delete [](_array);
		this->_array = NULL;
		this->_sizeArray = 0;

		this->_array = new T[rhs._sizeArray](); // allocation doit ulilsier la novuelle taille
		this->_sizeArray = rhs._sizeArray;

		for (std::size_t i = 0; i < this->_sizeArray; i++){
			this->_array[i] = rhs._array[i];
		}
	}

	return (*this);
}


// Defin exception
template <class T>
const char *Array<T>::OutException::what() const throw(){

	return ("Index out of the bounds");
}

template <class T>
T &Array<T>::operator[](std::size_t i){
	if (i >= this->_sizeArray){
		throw (OutException());
	}

	return (this->_array[i]);
}

template <class T>
const T &Array<T>::operator[](std::size_t i) const{
	if (i >= this->_sizeArray){
		throw (OutException());
	}

	return (this->_array[i]);
}

template <class T>
std::size_t Array<T>::size() const {

	return (this->_sizeArray);
}

template <class T>
Array<T>::~Array() {
	delete [](_array);
}
