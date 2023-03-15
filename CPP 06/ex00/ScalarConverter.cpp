#include "ScalarConverter.hpp"

char ScalarConverter::_my_char = 0;
int ScalarConverter::_my_int = 0;
float ScalarConverter::_my_float = 0.0f;
double ScalarConverter::_my_double = 0.0;

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
    (void)str;
}


void    ScalarConverter::parsser(std::string& str)
{
    if (str.length() == 1)
    {
        if (!isdigit(str[0]))
        {
            _my_char = str[0];
            convertChar();
        } else {
            _my_int = atoi(str.c_str());
            convertInt();
        }
    }
    else
    {
        int i = 0;
        if (str[i] == '+' || str[i] == '-')
            i++;
        for(; isdigit(str[i]); i++);
        if (!str[i])
        {
            _my_int = static_cast<int>(atof(str.c_str()));
            convertInt();
        } else if (str[i] == '.')
        {
            i++;
            for(; isdigit(str[i]); i++);
            std::cerr << "hoooolllllaaaa" << str[i] << std::endl;
            if (!str[i])
            {
                _my_double = static_cast<double>(atof(str.c_str()));
                convertDouble();
            } else if(str[i] == 'f' && !str[i + 1]) {
                _my_float = static_cast<float>(atof(str.c_str()));
                convertFloat();
            }
            else
                is_not_number();
        }
        else
            is_not_number();
    }
}

void    ScalarConverter::convertChar()
{
    // _my_int = static_cast<int>(_my_char);
    // _my_float = static_cast<float>(_my_char);
    // _my_double = static_cast<double>(_my_char);
    std::cerr << "CHAR CONVERTER" << std::endl;
}
void    ScalarConverter::convertInt()
{
    std::cerr << "INT CONVERTER" << std::endl;
}
void    ScalarConverter::convertFloat()
{
    std::cerr << "FLOAT CONVERTER" << std::endl;
}
void    ScalarConverter::convertDouble()
{
    std::cerr << "DOUBLE CONVERTER" << std::endl;
}

void     ScalarConverter::is_not_number()
{
    std::cerr << "Pls Enter a correct number !!!" << std::endl;
}


// void    ScalarConverter::parsser(std::string& str)
// {
//     if (str.length() == 1)
//     {
//         if (!isdigit(str[0]))
//         {
//             if (str[0] < 32 && str[0] > 127)
//                 throw std::runtime_error("Non displayable");
//             else
//             {
//                 _my_char = str[0];
//                 convertChar();
//             }
//         } else {
//             _my_int = atoi(str.c_str());
//             convertInt();
//         }
//     }
//     else
//     {
//         int i = 0;
//         if (str[i] == '+' || str[i] == '-')
//             i++;
//         for(i; isdigit(str[i]); i++);
//         if (!str[i])
//         {
//             if(atof(str.c_str()) > std::numeric_limits<int>::max() || atof(str.c_str()) < std::numeric_limits<int>::min())
//                 throw std::runtime_error("Out of Range");
//             else
//             {
//                 _my_int = static_cast<int>(atof(str.c_str()));
//                 convertInt();
//             }
//         } else if (str[i] == '.')
//         {
//             for(i; isdigit(str[i]); i++);
//             if (!str[i])
//             {
//                 if(atof(str.c_str()) > std::numeric_limits<double>::max() || atof(str.c_str()) < std::numeric_limits<double>::min())
//                     throw std::runtime_error("Out of Range");
//                 else {
//                     _my_double = static_cast<double>(atof(str.c_str()));
//                     convertDouble();
//                 }
//             } else if(str[i] == 'f' && !str[i + 1]) {
//                 if(atof(str.c_str()) > std::numeric_limits<float>::max() || atof(str.c_str()) < std::numeric_limits<float>::min())
//                     throw std::runtime_error("Out of Range");
//                 else {
//                     _my_float = static_cast<float>(atof(str.c_str()));
//                     convertFloat();
//                 }
//             }
//         }
        
//     }
// }