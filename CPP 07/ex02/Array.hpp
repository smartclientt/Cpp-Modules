#pragma once

#include <iostream>

template <typename T>
class Array
{
	public:
		Array(): _lenght(0), _content(new T[0]())
		{}
		Array(const int	&lenght): _lenght(lenght)
		{
			if (_lenght >= 0)
				_content = new T[_lenght]();
		}
		Array(const Array& arr): _lenght(arr._lenght)
		{
			if (_lenght >= 0)
				_content = new T[_lenght]();
		}
		Array& operator=(const Array& arr)
		{
			if (&arr == this)
				return (*this);
			delete [] _content;
			_content = nullptr;
			_lenght = arr._lenght;
			if (_lenght >= 0)
				_content = new T[_lenght]();
			for(int i = 0; i < _lenght; i++)
				_content[i] = arr._content[i];
			return (*this);
		}
		~Array()
		{
			if (_lenght >= 0)
				delete [] _content;
		}
		int		get_lenght() const
		{
			return (_lenght);
		}
		T*		get_content() const
		{
			return (_content);
		}

		T&	operator[](int index)
		{
			if (index >= _lenght || index < 0)
				throw	std::runtime_error("\nException: The index is out of buond");
			return _content[index];
		}

		int		size(void) const
		{
			if (_lenght >= 0)
				return (_lenght);
			return -1;
		}
	private:
		int					_lenght;
		T*					_content;
};
