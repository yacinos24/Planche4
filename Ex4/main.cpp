#include <iostream>

using namespace std;

struct produit{
	string type;
	int prix;
	bool etat;

};
int calculprix(produit p){
	float k=p.prix;
	if(p.etat){
		k=k-k*0.2;
	}
	if(p.type=="luxe"){
		k=k-k*0.25;
	}
	else{
		k=k-k*0.19;
	}
	return k;
}
int main(){
	produit a,b,c;
	cout<<"le prix de a (en DT) : ";
	cin>>a.prix;
	cout<<"le type de a(Luxe ou Modeste): ";
	cin>>a.type;
	cout<<"l'etat de a(1 pour solde 0 pour hors solde) : ";
	cin>>a.etat;
	cout<<calculprix(a)<<endl;

	cout<<"le prix de b (en DT) : ";
	cin>>b.prix;
	cout<<"le type de b(Luxe ou Modeste): ";
	cin>>b.type;
	cout<<"l'etat de b (1 pour solde 0 pour hors solde) : ";
	cin>>b.etat;
	cout<<calculprix(b)<<endl;

	cout<<"le prix de c (en DT) : ";
	cin>>c.prix;
	cout<<"le type de c(Luxe ou Modeste): ";
	cin>>c.type;
	cout<<"l'etat de c (1 pour solde 0 pour hors solde) : ";
	cin>>c.etat;
	cout<<calculprix(c)<<endl;
}
