
#include <iostream>
#include <locale.h>
using namespace std;


int main() {
    setlocale(LC_ALL, "Portuguese");
    int cont, i;

    // Exercício 1 com While
    cout << "\n\nLaço de repetição || Exercício 1 (While)\n" << endl << endl;
    cont = 1;
    while (cont <= 30) {
        cout << "Vou colar na prova. | " << cont << "º" << endl;
        cont++;
    }

    // Exercício 1 com For
    cout << "\n\nLaço de repetição || Exercício 1 (For)\n" << endl << endl;
    for (int i = 1; i <= 30; i++) {
        cout << "Vou colar na prova. | " << i << "º" << endl;
    }

    // Exercício 2 com While
    cout << "\nLaço de repetição || Exercício 2 (While)\n" << endl << endl;
    cont = 0;
    while (cont <= 10) {
        cout << "5 x " << cont << " = " << 5 * cont << endl;
        cont++;
    }

    // Exercício 2 com For
    cout << "\nLaço de repetição || Exercício 2 (For)\n" << endl << endl;
    for (i = 0; i <= 10; i++) {
        cout << "5 x " << i << " = " << 5 * i << endl;
    }

    // Exercício 3 com While
    cout << "\nLaço de repetição || Exercício 3 (While)\n" << endl << endl;
    cont = 100;
    while (cont >= 1) {
        cout << cont << endl;
        cont--;
    }

    // Exercício 3 com For
    cout << "\nLaço de repetição || Exercício 3 (For)\n" << endl << endl;
    for (i = 100; i >= 1; i--) {
        cout << i << endl;
    }

    // Exercício 4 com While
    cout << "\nLaço de repetição || Exercício 4 (While)\n" << endl << endl;
    cont = 50;
    while (cont <= 200) {
        cout << cont << endl;
        cont++;
    }

    // Exercício 4 com For
    cout << "\nLaço de repetição || Exercício 4 (For)\n" << endl << endl;
    for (i = 50; i <= 200; i++) {
        cout << i << endl;
    }

    // Exercício 5 com While
    cout << "\nLaço de repetição || Exercício 5 (While)\n" << endl << endl;
    cont = 100;
    int soma = 0;
    while (cont <= 200) {
        soma = soma + cont;
        cont++;
    }
    cout << soma << endl;

    // Exercício 5 com For
    cout << "\nLaço de repetição || Exercício 5 (For)\n" << endl << endl;
    for (soma = 0, i = 100; i <= 200; i++) {
        soma = soma + i;

        if (i == 200) {
            cout << soma << endl;
        }
    }

    // Exercício 6 com While
    cout << "\nLaço de repetição || Exercício 6 (While)\n" << endl << endl;
    float base, pot = 1;
    float expo;
    float x = 1;
    cout << "Digite a base e em seguida o expoente" << endl;
    cin >> base >> expo;

    if (expo == 0) {
        pot = 1;
    }
    while (x <= expo) {
        pot = base * pot;
        x++;
    }
    cout << pot;

    // Exercício 6 com For
    cout << "\nLaço de repetição || Exercício 6 (For)\n" << endl << endl;
    cin >> base >> expo;

    if (expo == 0) {
        pot = 1;
    }
    for (x = 1; x <= expo; x++) {
        pot = base * pot;
    }
    cout << pot;


    return 0;
}