#include <iostream>

typedef struct	s_data{
	int		my_data;
} Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& serial);
		Serializer& operator=(const Serializer& serial);
		~Serializer();

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);
};
