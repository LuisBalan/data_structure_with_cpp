#include <iostream>
#include <string>

int main() 
{
    std::string primer_nombre;
    std::string segundo_nombre;
    std::string apellido_paterno;
    std::string apellido_materno;

    int month, day, year;

    std::cout << "Ingresa un primer nombre:";
    std::getline(std::cin, primer_nombre);
    // std::cin >> primer_nombre;
    std::cout << "Si tienes un segundo nombre, escribelo: ";
    std::getline(std::cin, segundo_nombre);
    std::cout << "Ingresa tu fecha de nacimiento";
    std::cout << "Primero el mes: ";
    std::getline(std::cin, month);
    // std::getline(std::cin, day);
    // std::getline(std::cin,  year);

    return 0;





}