/*
	29 paŸdziernik 2014

Zad 1. Napisaæ program, który wczyta liczbê ca³kowit¹ N, obliczy i wypisze na ekran najwiêksz¹ liczbê naturaln¹ n spe³niaj¹c¹ warunek:
		1 + 2 + 3 + …. + n < N;
Zad 2. Napisz program wyœwietlaj¹cy tabliczkê mno¿enia w zakresie od 1 do 10.
Zad 3. Napisz program, który wczytuje liczbê n, a nastêpnie sumuje n liczb, wczytywanych z klawiatury.
Zad 4. Napisaæ program, który oblicza œredni¹ arytmetyczn¹ liczb ca³kowitych od 1 do liczby n podanej przez u¿ytkownika.
		Wypisaæ obliczon¹ œredni¹ na ekranie monitora. 
Zad 5. Wczytaæ dwie liczby ca³kowite dodatnie a i b, które wyznacz¹ przedzia³ liczbowy [a,b].
		Nastêpnie obliczyæ sumê liczb ca³kowitych nale¿¹cych do tego przedzia³u oraz wypisaæ go na ekran monitora.
Zad 6. Napisaæ program wyœwietlaj¹cy na ekranie kolejne liczby ca³kowite z przedzia³u [0,a],
		które s¹ podzielne przez 3 lub przez 4 (Liczbê ca³kowit¹ a>0 wczytuje u¿ytkownik z klawiatury).
*/

#include <iostream>

using namespace std;

int zad1() {
        int n;
        cout<<"Podaj n: ";
        cin>> n;
        int wynik = 0;
        for( int i= 1; i < n; i++ ){
                if( wynik < n ) cout<<i<<" + ";
                wynik += i;
        }
        cout<<"pala z matmy";
}
int zad2() {
	int i,x;
	for(x=1; x<10; x++) {
		for(i=1; i<10; i++) {
			cout<<"| "<<i*x<<" |";
		};
		cout<<endl;
	};
	return 0;
}
int zad3() {
	int n, wynik;
	cout<<"Podaj liczbe n: ";
	cin>> n;
	if (n<=0){
		cout<<"Podano liczby niedodatnie. Restart"<<endl;
		zad3();
	}
	for( int i = 0; i <= n; i++ ){
		wynik = wynik+i;
	}
	cout<<"Suma: "<<wynik;
}
int zad4() {
	int n, wynik;
	cout<<"Podaj liczbe n: ";
	cin>> n;
	if (n<=0){
		cout<<"Podano liczby niedodatnie. Restart"<<endl;
		zad3();
	}
	for( int i = 0; i < n; i++ ){
		wynik = wynik+i;
	}
	cout<<"Suma: "<<wynik;
	cout<<" "<<wynik%n;
}
int zad5() {
	int a, b, x, y, wynik = 0;
	cout<<"Podaj dodatnie a: ";
	cin>> a;
	cout<<"Podaj dodatnie b: ";
	cin>> b;
	if (a<=0 || b<=0){
		cout<<"Podano liczby niedodatnie. Restart"<<endl;
		zad5();
	}
	if (a>b){
		x = a;
		y = b;
	}
	else {
		x = b;
		y = a;
	}
	for( int i = y; i < x+1; i++ ){
		wynik = wynik+i;
	}
	cout<<"Wynik sumy przedzialu: "<<wynik;
}

int zad6() {
	int a;
	cout<<"Podaj dodatnie a: ";
	cin>>a;

	if (a<=0){
		cout<<"Podano liczbe niedodatnia. Restart"<<endl;
		zad6();
	}
	
	cout<<"Liczby podzielne przez 3: ";
	for( int i = 1; i < a; i++ ){
		if(i%3 == 0) cout<<i<<" ";
	}
	
	cout<<endl<<"Liczby podzielne przez 4: ";
	for( int i = 1; i < a; i++ ){
		if(i%4 == 0) cout<<i<<" ";
	}
	
	cout<<endl<<"Liczby podzielne przez 3 i 4: ";
	for( int i = 1; i < a; i++ ){
		if(i%3 == 0 && i%4 == 0) cout<<i<<" ";
	}
}

int main() {
        cout<<"*** MENU *** \n* 1. Zadanie 1\n* 2. Zadanie 2\n* 3. Zadanie 3\n* 4. Zadanie 4\n* 5. Zadanie 5\n* 6. Zadanie 6\n* Podaj wybrana opcje: ";
        int a;
        cin>>a;
        switch(a){
                default: cout<<"Wystapil blad.\n\n"; main(); break;
                case 0: return 0; break;
                case 1: cout<<"Wybrano zadanie 1.\n\n"; zad1(); break;
                case 2: cout<<"Wybrano zadanie 2.\n\n"; zad2(); break;
                case 3: cout<<"Wybrano zadanie 3.\n\n"; zad3(); break;
				case 4: cout<<"Wybrano zadanie 4.\n\n"; zad4(); break;
                case 5: cout<<"Wybrano zadanie 5.\n\n"; zad5(); break;
                case 6: cout<<"Wybrano zadanie 6.\n\n"; zad6(); break;
        }
}
