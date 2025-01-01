#include <iostream>
#include <vector>
#include <functional>
using namespace std;
void appliquerFiltre(vector<int>& vec, const function<void(int&)>& filtre) {
    for (int& e : vec) {
        filtre(e);
    }
}

int main() {
    vector<int> tab{ -2, 3, -33, 7, 99, 6, 2, -39 };

    cout<<"************************\n";
    cout<<"* 1. Afficher positif  *\n";
    cout<<"* 2. Afficher Negatif  *\n";
    cout<<"* 3. Sup�rieur � seuil *\n";
    cout<<"************************\n";
    cout<<"Entrez votre choix: ";

    int choix;
    cin>>choix;

    switch (choix) {
        case 1:
            appliquerFiltre(tab, [](int& x) { if (x >= 0) cout<<x<<"\t"; });
            break;
        case 2:
            appliquerFiltre(tab, [](int& x) { if (x < 0) cout<<x<<"\t"; });
            break;
        case 3: {
            int seuil;
            cout<<"Donner le seuil: ";
            cin>>seuil;
            appliquerFiltre(tab, [seuil](int& x) { if (x >= seuil) cout<<x<<"\t"; });
            break;
        }
        default:
            break;
    }

    cout<<endl;
    return 0;
}
