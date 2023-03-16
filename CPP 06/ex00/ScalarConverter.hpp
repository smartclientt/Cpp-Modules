#pragma once

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& scalar);
        ScalarConverter& operator=(const ScalarConverter& scalar);
        ~ScalarConverter();

        static void     convert(std::string& str);
        static void     parsser(std::string& str);

        static void     convertChar();
        static void     convertInt();
        static void     convertFloat();
        static void     convertDouble();

        static void     is_not_number();
    private:
        static char     _my_char;
        static int      _my_int;
        static float    _my_float;
        static double   _my_double;
};
