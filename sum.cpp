#include <iostream>
using namespace std;

int main() {
    int numero;
    int somma = 0;

    cout<< "Abbiamo inserito una modifica per la pull request" << endl;
    cout << "Inserisci una sequenza di numeri interi positivi. Inserisci 0 per calcolare la somma." << endl;

    do {
        cout << "Inserisci un numero: ";
        cin >> numero;

        if (numero > 0) {
            somma += numero;
        } else if (numero < 0) {
            cout << "Il numero inserito non è positivo. Inserisci un numero positivo." << endl;
        }
    } while (numero != 0);

    cout << "La somma dei numeri inseriti è: " << somma << endl;

    return 0;
}
