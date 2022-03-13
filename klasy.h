#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <windows.h>

using namespace std;

class pojazd{
	public:
	pojazd()
	{}
	
	
	//ogolne
	string nazwa;
	string kolor;
	int rok_produkcji;
	
	//parametry 
	int konie_mechaniczne;
	float przyspieszenie;
	int predkosc_max;
	int waga;
	virtual void wypisz_parametry();
	
	//olej
	void sprawdz_stan_oleju();
	void dolej();
	int stan_oleju;	
	
	//kola
	void sprawdz_stan_opon();
	virtual void pompuj();
	float cisnienie_opon;
	
	//paliwo
	void sprawdz_stan_paliwa();
	int stan_paliwa;
	
	//swiatla
	void swiatla();
	void zmiana_trybu();
	bool stan_swiatla=0;
	string tryb_swiatel="mijania";	
	
	//pasy bezpieczenstwa
	void zapnij_pasy();
	bool stan_pasy=0;
	
	//jazda
	virtual void jazda();
	
		
};




class samochod: public pojazd{
	
	public:
	samochod()
	{}
	
	//klimatyzacja
	void klimatyzacja();
	
	//radio
	void radio();
	void regulacja_glosnosci(int x);
	
	
	private:
	bool stan_klimatyzacja=0;	
	bool stan_radio=0;
	int glosnosc=50;	
	
};


class ciezarowka: public pojazd{
	
	public:
	ciezarowka()
	{}
	
	void wypisz_parametry();
	
	void pompuj();
	
	//naczepa i ladunek
	void podlacz_naczepe();	
	void zaladunek();
	void rozladunek();
	bool sprawdz_naczepe();
	bool sprawdz_ladunek();
	
	
	private:
	bool stan_ladunku=0;
	bool stan_naczepa=0;	
	
		
	
};


class motocykl: public pojazd{
	
	public:
	motocykl()
	{}
	
	//kask
	void zaloz_kask();
	
	//jazda
	void jazda();
	
	private:
	bool stan_kask=0;	

	
};


void pojazd::wypisz_parametry(){
	
	cout<<"Nazwa: "<<nazwa<<endl;
	cout<<"Rok produkcji: "<<rok_produkcji<<endl;
	cout<<"Kolor: "<<kolor<<endl;
	cout<<"Waga: "<<waga<<"kg"<<endl;
	cout<<"Liczba koni mechanicznych: "<<konie_mechaniczne<<endl;
	cout<<"Predkosc maksymalna: "<<predkosc_max<<"km/h"<<endl;
	cout<<"Przyspieszenie od 0 do 100 km/h w "<<przyspieszenie<<"s"<<endl;
	
	system("pause");
}

void ciezarowka::wypisz_parametry(){
	
	cout<<"Nazwa: "<<nazwa<<endl;
	cout<<"Rok produkcji: "<<rok_produkcji<<endl;
	cout<<"Kolor: "<<kolor<<endl;
	cout<<"Waga: "<<waga<<"kg"<<endl;
	cout<<"Liczba koni mechanicznych: "<<konie_mechaniczne<<endl;
	cout<<"Predkosc maksymalna: "<<predkosc_max<<"km/h"<<endl;
	
	system("pause");
}



void pojazd::sprawdz_stan_oleju(){
	
	cout<<stan_oleju<<"%"<<endl;
	system("pause");
}

void pojazd::dolej(){
	
	stan_oleju=100;
	cout<<stan_oleju<<"%"<<endl;
	system("pause");
}

void pojazd::sprawdz_stan_opon(){
	
	cout<<cisnienie_opon<<" atmosfer"<<endl;
	system("pause");
}

void pojazd::pompuj(){
	
	cisnienie_opon=2.2;
	cout<<cisnienie_opon<<" atmosfer"<<endl;
	system("pause");
}

void ciezarowka::pompuj(){
	
	cisnienie_opon=5.7;
	cout<<cisnienie_opon<<" atmosfer"<<endl;
	system("pause");
}

void pojazd::sprawdz_stan_paliwa(){
	
	cout<<stan_paliwa<<"%"<<endl;
	system("pause");
}

void samochod::klimatyzacja(){
	
	if(stan_klimatyzacja==1)
	stan_klimatyzacja=0;
	else
	stan_klimatyzacja=1;
	
	cout<<"Klimatyzacja ";
	if(stan_klimatyzacja==1)
	cout<<"wlaczona"<<endl;
	else
	cout<<"wylaczona"<<endl;
	
	system("pause");
}

void samochod::radio(){
	
	if(stan_radio==1)
	stan_radio=0;
	else
	stan_radio=1;
	
	cout<<"Radio ";
	if(stan_radio==1){
	cout<<"wlaczone"<<endl;
	cout<<"Glosnosc: "<<glosnosc<<endl;
	}
	else
	cout<<"wylaczone"<<endl;
	
	
	system("pause");
	
}


void samochod::regulacja_glosnosci(int x){
	
	if(glosnosc+x<=100 and glosnosc+x>=0)
	glosnosc=glosnosc+x;
	else if(glosnosc+x>100)
	glosnosc=100;
	else if(glosnosc+x<0)
	glosnosc=0;
	
	cout<<"Glosnosc: "<<glosnosc<<endl;
	
	system("pause");
}

void pojazd::swiatla(){
	
	if(stan_swiatla==1)
	stan_swiatla=0;
	else
	stan_swiatla=1;
	
	cout<<"Swiatla ";
	if(stan_swiatla==1){
	cout<<"wlaczone"<<endl;
	cout<<"Tryb swiatel: "<<tryb_swiatel<<endl;
	}
	else
	cout<<"wylaczone"<<endl;
	
	
	
	system("pause");
	
	
}

void pojazd::zapnij_pasy(){
	
	if(stan_pasy==1)
	stan_pasy=0;
	else
	stan_pasy=1;
	
	cout<<"Pasy: ";
	if(stan_pasy==1)
	cout<<"zapiete"<<endl;
	else
	cout<<"odpiete"<<endl;
	
	system("pause");
	
}


void pojazd::zmiana_trybu(){
		
	if(tryb_swiatel=="mijania")
	tryb_swiatel="drogowe";
	else
	tryb_swiatel="mijania";
		
	cout<<"Tryb swiatel: "<<tryb_swiatel<<endl;
		
	system("pause");
		
}



void motocykl::zaloz_kask()
{
	if(stan_kask==1)
	stan_kask=0;
	else
	stan_kask=1;
	
	cout<<"Kask ";
	if(stan_kask==1)
	cout<<"zalozony"<<endl;
	else
	cout<<"zdjety"<<endl;
	
	
	system("pause");
	
}

void ciezarowka::podlacz_naczepe(){
	if(stan_naczepa==1)
		cout<<"Naczepa juz zostala podlaczona"<<endl;
	else
	stan_naczepa=1;
	
	cout<<"Naczepa zostala podlaczona"<<endl;
	
	system("pause");
}	

bool ciezarowka::sprawdz_naczepe(){
	
	return stan_naczepa;
}

void ciezarowka::zaladunek(){
	
	if(stan_ladunku==1)
		cout<<"Naczepa juz zostala zaladowana"<<endl;
	else
	stan_ladunku=1;
	
	cout<<"Naczepa zostala zaladowana"<<endl;
	
	system("pause");
}

void ciezarowka::rozladunek(){
	
	if(stan_ladunku==0)
		cout<<"Naczepa juz zostala rozladowana"<<endl;
	else
	stan_ladunku=0;
	
	cout<<"Naczepa zostala rozladowana"<<endl;
	
	system("pause");
}

bool ciezarowka::sprawdz_ladunek(){
	
	return stan_ladunku;
}


void pojazd::jazda(){
	
	cout<<"Szerokiej drogi!"<<endl;
	
	srand (time(NULL));
	int dl=rand() % 7 + 2;
	
	
	for(int i=0;i<dl;i++)
	{
		Sleep(1000);
		cout<<".";
	}
	
	
	cout<<endl;
	
	cout<<"KONTROLA DROGOWA"<<endl;
	if(stan_swiatla==1 && stan_pasy==1){
		
	if(stan_swiatla==1 && tryb_swiatel=="drogowe")
	cout<<"Jazda na wlaczonych swiatlach drogowych: mandat: 200zl, punktow karnych: 2"<<endl;
	else
	cout<<"Nie zostales ukarany. Jedziesz zgodnie z przepisami."<<endl;
	}
	else{
	
	if(stan_swiatla==0)
	cout<<"Brak wlaczonych swiatel: mandat: 100zl, punktow karnych: 2"<<endl;
	
	if(stan_pasy==0)
	cout<<"Jazda bez zapietych pasow bezpieczenstwa: mandat: 100zl, punktow karnych: 2"<<endl;
	
	}
	
	
	
	system("pause");
	
	
	dl=rand() % 7 + 2;
	
	for(int i=0;i<dl;i++)
	{
		Sleep(1000);
		cout<<".";
	}
	cout<<endl;
	
	cout<<"Docierasz do celu."<<endl;
	
	
	
}


void motocykl::jazda(){
	
	cout<<"Szerokiej drogi!"<<endl;
	
	srand (time(NULL));
	int dl=rand() % 7 + 2;
	
	
	for(int i=0;i<dl;i++)
	{
		Sleep(1000);
		cout<<".";
	}
	
	

	
	cout<<endl;
	cout<<"KONTROLA DROGOWA"<<endl;
	if(stan_swiatla==1 && stan_kask==1)
	cout<<"Nie zostales ukarany. Jedziesz zgodnie z przepisami."<<endl;
	else
	{
	
	if(stan_swiatla==0)
	cout<<"Brak wlaczonych swiatel: mandat: 100zl, punktow karnych: 2"<<endl;
	
	
	if(stan_kask==0)
	cout<<"Brak zalozonego kasku: mandat: 100zl, punktow karnych: 2"<<endl;
	
	}
	if(stan_swiatla==1 && tryb_swiatel=="drogowe")
	cout<<"Jazda na wlaczonych swiatlach drogowych: mandat: 200zl, punktow karnych: 2"<<endl;
	
	system("pause");
	
	
	
	dl=rand() % 7 + 2;
	
	for(int i=0;i<dl;i++)
	{
		Sleep(1000);
		cout<<".";
	}
	cout<<endl;
	
	cout<<"Docierasz do celu."<<endl;
	
	
	
}


