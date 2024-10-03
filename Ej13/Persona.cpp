#include "Persona.hpp"
#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

Persona::Persona(int edad) {
    this->edad = edad;

    genero = rand() % 2;

    const char letrasDNI[] = "TRWAGMYFPDXBNJZSQVHLCKE"; 
    int numeroDNI = rand() % 100000000;  
    char letraDNI = letrasDNI[numeroDNI % 23];  

    snprintf(dni, 10, "%08d%c", numeroDNI, letraDNI); 
}


Persona::~Persona() {
    
}

int Persona::getEdad() {
    return edad;
}
bool Persona::esMujer() {
    return genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() {
    cout << "Edad: " << edad << ", Género: " << (genero ? "Mujer" : "Hombre") << ", DNI: " << dni << endl;
}
