#include "Persona.hpp"
#include <iostream>
#include <vector>
#include <set>     

using namespace std;

int main() {
    srand(time(0));  

    vector<Persona> personas;
    set<int> edadesUsadas;

    while (personas.size() < 10) {
        int edadAleatoria = rand() % 10 + 18;   

        if (edadesUsadas.find(edadAleatoria) == edadesUsadas.end()) {
            personas.push_back(Persona(edadAleatoria));
            edadesUsadas.insert(edadAleatoria);  
        }
    }

    for (int i = 0; i < personas.size(); i++) {
        cout << "Persona " << i + 1 << ": ";
        personas[i].mostrar();
    }

    return 0;
}
