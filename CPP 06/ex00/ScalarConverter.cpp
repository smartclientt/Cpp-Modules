#include "ScalarConverter.hpp"

char    ScalarConverter::_my_char = 0;
int     ScalarConverter::_my_int = 0;
float   ScalarConverter::_my_float = 0.0f;
double  ScalarConverter::_my_double = 0.0;

ScalarConverter::ScalarConverter()
{}
ScalarConverter::ScalarConverter(const ScalarConverter& scalar)
{
    _my_char = scalar._my_char;
    _my_int = scalar._my_int;
    _my_float = scalar._my_float;
    _my_double = scalar._my_double;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& scalar)
{
    _my_char = scalar._my_char;
    _my_int = scalar._my_int;
    _my_float = scalar._my_float;
    _my_double = scalar._my_double;
    return *this;
}
ScalarConverter::~ScalarConverter()
{
}

void    ScalarConverter::convert(std::string& str)
{
    try 
    {
        parsser(str);
        try
        {
            std::cout << "char: ";
            if (_my_char < 32 || _my_char > 127)
                throw std::runtime_error("Non displayable");
            std::cout << _my_char << std::endl;
        }
        catch (const std::exception& exp)
        {
            std::cout << exp.what() << std::endl;
        }
        try
        {
            std::cout << "Int: ";
            if (_my_double > std::numeric_limits<int>::max() || _my_double < std::numeric_limits<int>::min())
                throw std::runtime_error("Out of Range");
            else if (_my_double != _my_double)
                throw std::runtime_error("Impossible");
            std::cout << _my_int << std::endl;
        }
        catch (const std::exception& exp)
        {
            std::cout << exp.what() << std::endl;
        }
        try
        {
            std::cout << "float: ";
            if (_my_double > std::numeric_limits<float>::max() || _my_double < -std::numeric_limits<float>::max())
                throw std::runtime_error("Out of Range");
            double d;
	        double f;
    
	        f = modf(_my_float, &d);
            if (_my_double != _my_double || f > 0.0)
                std::cout << _my_float << "f" << std::endl;
            else
                std::cout << _my_float << ".0f" << std::endl;
        }
        catch (const std::exception& exp)
        {
            std::cout << exp.what() << std::endl;
        }
        try
        {
            std::cout << "double: ";
            double d;
	        double f;

	        f = modf(_my_double, &d);
            if (_my_double != _my_double || f > 0.0
                || _my_double == std::numeric_limits<double>::infinity()
                || _my_double == -std::numeric_limits<double>::infinity())
                std::cout << _my_double << std::endl;
            else
                std::cout << _my_double << ".0" << std::endl;
        }
        catch (const std::exception& exp)
        {
            std::cout << exp.what() << std::endl;
        }
        
    } catch (const std::exception& exp)
    {
        std::cerr << exp.what() << std::endl;
    }
}

void    ScalarConverter::parsser(std::string& str)
{
    if (str.length() == 1)
    {
        if (!isdigit(str[0]))
        {
            _my_double = str[0];
            convertChar();
        } else {
            _my_double = atof(str.c_str());
            convertInt();
        }
    }
    else
    {
        if (atof(str.c_str()) != atof(str.c_str())
            || atof(str.c_str()) == std::numeric_limits<double>::infinity()
            || atof(str.c_str()) == -std::numeric_limits<double>::infinity())
        {
            _my_double = atof(str.c_str());
            convertFloat();
        }
        else
        {
            int i = 0;
            if (str[i] == '+' || str[i] == '-')
                i++;
            for(; isdigit(str[i]); i++);
            if (!str[i])
            {
                _my_double = atof(str.c_str());
                convertInt();
            } else if (str[i] == '.')
            {
                i++;
                for(; isdigit(str[i]); i++);
                if (!str[i])
                {
                    _my_double = atof(str.c_str());
                    convertDouble();
                } else if(str[i] == 'f' && !str[i + 1]) {
                    _my_double = atof(str.c_str());
                    convertFloat();
                }
                else
                    is_not_number();
            }
            else
                is_not_number();
        }
    }
}

void    ScalarConverter::convertChar()
{
    _my_char = static_cast<char>(_my_double);
    _my_int = static_cast<int>(_my_double);
    _my_float = static_cast<float>(_my_double);
}
void    ScalarConverter::convertInt()
{
    _my_char = static_cast<char>(_my_double);
    _my_int = static_cast<int>(_my_double);
    _my_float = static_cast<float>(_my_double);;
}
void    ScalarConverter::convertFloat()
{
    _my_char = static_cast<char>(_my_double);
    _my_int = static_cast<int>(_my_double);
    _my_float = static_cast<float>(_my_double);
}
void    ScalarConverter::convertDouble()
{
    _my_char = static_cast<char>(_my_double);
    _my_int = static_cast<int>(_my_double);
    _my_float = static_cast<float>(_my_double);
}

void     ScalarConverter::is_not_number()
{
    throw std::runtime_error("Pls Enter a correct number !!!");
}
