#pragma once
#include <iostream>
#include <exception>

typedef struct	s_data{
	std::string	str;
	int			nbr;
} Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& serial);
		Serializer& operator=(const Serializer& serial);
		~Serializer();

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};
