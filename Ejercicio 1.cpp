#include <iostream>

using namespace std;

int main() 
{
    int num1, num2, num3;
 char continuar = 's';
    
 while (continuar == 's') {
    // Pedir al usuario que ingrese los 3 números
    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    // Comprobar si están en orden numérico
    if (num1 <= num2 && num2 <= num3) {
        cout << "Los numeros están en orden numerico." << endl;
    } else {
        cout << "Los numeros no están en orden numerico." << endl;
    }
// Preguntar al usuario si desea continuar
        cout << "Deseas continuar ingresando puntajes? (s/n): ";
        cin >> continuar;
    }
    
    cout << "Finalizado el programa" << endl;
    return 0;
}
