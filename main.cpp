#include <iostream>
#include <string>

int main() 
{
    std::string primer_nombre;
    std::string segundo_nombre;
    std::string apellido_paterno;
    std::string apellido_materno;
    int pasatiempo;

    int month, day, year;

    std::cout << "Ingresa un primer nombre: " << std::endl;
    std::getline(std::cin, primer_nombre);
    // std::cin >> primer_nombre;
    std::cout << " Si tienes un segundo nombre, escribelo: " << std::endl;
    std::getline(std::cin, segundo_nombre);
    std::cout << "Ingrese el apellido paterno: " << std::endl;
    std::cin >> apellido_paterno;
    std::cout << "Ingrese el apellido materno: " << std::endl;
    std::cin >> apellido_materno;
    std::cout << " Ingresa tu fecha de nacimiento: " << std::endl;
    std::cout << " Primero el mes: " << std::endl;
    std::cin >> month;
    std::cout << "Ingresa el día: " << std::endl;
    std::cin >> day;
    std::cout << "Ahora ingresa el año de nacimiento: " << std::endl;
    std::cin >> year;
    std::cout << "¿Qué pasatiempo prefieres?: " << std::endl;
    std::cout << "Op1: Escuchar música. " << std::endl;
    std::cout << "Op2: Platicar con amigxs. " << std::endl;
    std::cout << "Op3: Ver series. " << std::endl;
    std::cin >> pasatiempo;

    return 0;
}