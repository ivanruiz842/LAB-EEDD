#include "Persona.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    vector<Persona> personas;
    vector<int> edadesDisponibles;

    for (int i = 18; i <= 27; i++) {
        edadesDisponibles.push_back(i);
    }

    for (int i = 0; i < 10; i++) {
        int indiceAleatorio = rand() % edadesDisponibles.size();
        int edad = edadesDisponibles[indiceAleatorio];

        edadesDisponibles.erase(edadesDisponibles.begin() + indiceAleatorio);

        Persona p(edad);
        personas.push_back(p);
    }


    for (size_t i = 0; i < personas.size(); i++) {
        cout << "Persona " << i + 1 << ":" << endl;
        personas[i].mostrar();
        cout << endl;
    }

    return 0;
}