#include <iostream>
using namespace std;

template <typename T>
void echanger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void trier(T tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        int indexMin = i;
        for (int j = i + 1; j < taille; j++) {
            if (tableau[j] < tableau[indexMin]) {
                indexMin = j;
            }
        }
        if (indexMin != i) {
            echanger(tableau[i], tableau[indexMin]);
        }
    }
}

template <typename T>
void afficherTableau(T tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

int main() {
    int tableauInt[10] = {34, 7, 23, 32, 5, 62, 32, 1, 100, 23};

    cout << "Avant le tri: ";
    afficherTableau(tableauInt, 10);

    trier(tableauInt, 10);

    cout << "Après le tri: ";
    afficherTableau(tableauInt, 10);

    return 0;
}
