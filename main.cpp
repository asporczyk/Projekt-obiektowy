#include <iostream>
#include "klasy.h"

using namespace std;


int main()
{
	int id;
	
	
	samochod impreza;
	ciezarowka scania;
	motocykl kawasaki;
	
	impreza.nazwa= "Subaru Impreza WRX STI";
		impreza.konie_mechaniczne=218;
		impreza.kolor="niebieski";
		impreza.rok_produkcji=1997;
		impreza.predkosc_max=271;
		impreza.przyspieszenie=4.9;
		impreza.waga=1240;
		impreza.stan_oleju=70;
		impreza.cisnienie_opon=1.9;
		impreza.stan_paliwa=50;
		
	scania.nazwa="Scania S520 V8";
		scania.konie_mechaniczne=520;
		scania.kolor="czerwony";
		scania.rok_produkcji=2020;
		scania.predkosc_max=90;
		scania.waga=8422;
		scania.stan_oleju=95;
		scania.cisnienie_opon=5.3;
		scania.stan_paliwa=90;
	kawasaki.nazwa="Kawasaki Ninja ZX-6R 636";
		kawasaki.konie_mechaniczne=134;
		kawasaki.kolor="zielony";
		kawasaki.rok_produkcji=2013;
		kawasaki.predkosc_max=248;
		kawasaki.przyspieszenie=3.6;
		kawasaki.waga=191;
		kawasaki.stan_oleju=80;
		kawasaki.cisnienie_opon=1.9;
		kawasaki.stan_paliwa=40;
	
	
	
	cout<<"Wybierz jedna z opcji:"<<endl;
			cout<<"(1) Samochod"<<endl;
			cout<<"(2) Motocykl"<<endl;
			cout<<"(3) Ciezarowka"<<endl;
			cout<<"(4) Wyjdz"<<endl;
	cout<<"Podaj numer: ";
	cin>>id;		
	cout<<"#######################"<<endl;		
	
	if(id==1){

		cout<<"Wybrales samochod "<<impreza.nazwa<<endl;
	
		while(1)
		{
			cout<<"#######################"<<endl;
			cout<<"Wybierz jedna z opcji:"<<endl;
			cout<<"(1) Opis pojazdu"<<endl;
			cout<<"(2) Sprawdz stan oleju"<<endl;
			cout<<"(3) Sprawdz cisnienie opon"<<endl;
			cout<<"(4) Wejdz do srodka"<<endl;
			cout<<"(5) Koniec"<<endl;
			cout<<"Podaj numer: ";
			cin>>id;
			cout<<"#######################"<<endl;
			
			if(id==1)
			impreza.wypisz_parametry();
			if(id==2){
			impreza.sprawdz_stan_oleju();
				cout<<"#######################"<<endl;
				cout<<"Wybierz jedna z opcji:"<<endl;
				cout<<"(1) Dolej"<<endl;
				cout<<"(2) Pomin"<<endl;
				cout<<"Podaj numer: ";
				cin>>id;
				cout<<"#######################"<<endl;
				
				if(id==1)
				impreza.dolej();
				
			}
			if(id==3){
			impreza.sprawdz_stan_opon();
				cout<<"#######################"<<endl;
				cout<<"Wybierz jedna z opcji:"<<endl;
				cout<<"(1) Dopompuj"<<endl;
				cout<<"(2) Pomin"<<endl;
				cout<<"Podaj numer: ";
				cin>>id;
				cout<<"#######################"<<endl;
				if(id==1)
				impreza.pompuj();
			
			}
			if(id==4){
			
				while(1)
				{
					cout<<"#######################"<<endl;
					cout<<"Wybierz jedna z opcji:"<<endl;
					cout<<"(1) Stan paliwa"<<endl;
					cout<<"(2) Wl/Wyl Klimatyzacje"<<endl;
					cout<<"(3) Ustawienia radia"<<endl;
					cout<<"(4) Ustawienia swiatel"<<endl;
					cout<<"(5) Zapnij/odepnij pasy"<<endl;
					cout<<"(6) Uruchom silnik"<<endl;
					cout<<"(7) Wyjdz z samochodu"<<endl;
					cout<<"(8) Koniec"<<endl;
					cout<<"Podaj numer: ";
					cin>>id;
					cout<<"#######################"<<endl;
					
					if(id==1)
					impreza.sprawdz_stan_paliwa();
					else if(id==2){
					impreza.klimatyzacja();
					}
					else if(id==3){
						while(1)
						{
							cout<<"Ustawienia radia"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) Wl/wyl radio"<<endl;
							cout<<"(2) Glosniej"<<endl;
							cout<<"(3) Ciszej"<<endl;
							cout<<"(4) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								impreza.radio();
							}
							else if(id==2)
							{
								impreza.regulacja_glosnosci(10);
							}
							else if(id==3)
							{
								impreza.regulacja_glosnosci(-10);
							}
							else if(id==4)
							break;
							
						}
						
					}
					else if(id==4){
						while(1)
						{
							cout<<"Ustawienia swiatel"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) Wl/wyl swiatla"<<endl;
							cout<<"(2) Zmien tryb"<<endl;
							cout<<"(3) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								impreza.swiatla();
							}
							else if(id==2)
							{
								impreza.zmiana_trybu();
							}
							else if(id==3)
							break;
							
						}
						
						
					}
					else if(id==5)
					{
						impreza.zapnij_pasy();
					}
					else if(id==6){
						while(1)
						{
							cout<<"Silnik pracuje, gotowy do jazdy"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) W droge"<<endl;
							cout<<"(2) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								impreza.jazda();
								return 0;
								
								
							}
							else if(id==2)
							break;
						
						}
					}
					else if(id==7)
					break;
					else if(id==8)
					return 0;
					
				}	
				
			}
			else if(id==5)
			return 0;	
			
			
		}
	
	}
	else if(id==2){
	
	cout<<"Wybrales motocykl: "<<kawasaki.nazwa<<endl;
	
		while(1)
		{
			cout<<"#######################"<<endl;
			cout<<"Wybierz jedna z opcji:"<<endl;
			cout<<"(1) Opis pojazdu"<<endl;
			cout<<"(2) Sprawdz stan oleju"<<endl;
			cout<<"(3) Sprawdz cisnienie opon"<<endl;
			cout<<"(4) Usiadz na motocykl"<<endl;
			cout<<"(5) Koniec"<<endl;
			cout<<"Podaj numer: ";
			cin>>id;
			cout<<"#######################"<<endl;
			
			if(id==1)
			kawasaki.wypisz_parametry();
			else if(id==2)
			{
				kawasaki.sprawdz_stan_oleju();
				cout<<"#######################"<<endl;
				cout<<"Wybierz jedna z opcji:"<<endl;
				cout<<"(1) Dolej"<<endl;
				cout<<"(2) Pomin"<<endl;
				cout<<"Podaj numer: ";
				cin>>id;
				cout<<"#######################"<<endl;
				
				if(id==1)
				kawasaki.dolej();
				
			}
			else if(id==3)
			{
				kawasaki.sprawdz_stan_opon();
				cout<<"#######################"<<endl;
				cout<<"Wybierz jedna z opcji:"<<endl;
				cout<<"(1) Dopompuj"<<endl;
				cout<<"(2) Pomin"<<endl;
				cout<<"Podaj numer: ";
				cin>>id;
				cout<<"#######################"<<endl;
				
				if(id==1)
				kawasaki.pompuj();	
			}
			else if(id==4)
			{
				while(1)
				{
					cout<<"#######################"<<endl;
					cout<<"Wybierz jedna z opcji:"<<endl;
					cout<<"(1) Stan paliwa"<<endl;
					cout<<"(2) Zaloz kask"<<endl;
					cout<<"(3) Ustawienia swiatel"<<endl;
					cout<<"(4) Uruchom silnik"<<endl;
					cout<<"(5) Zejdz z motocykla"<<endl;
					cout<<"(6) Koniec"<<endl;
					cout<<"Podaj numer: ";
					cin>>id;
					cout<<"#######################"<<endl;
					
					if(id==1)
					kawasaki.sprawdz_stan_paliwa();
					else if(id==2)
					{
					kawasaki.zaloz_kask();	
					}
					else if(id==3)
					{
						while(1)
						{
							
							cout<<"Ustawienia swiatel"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) Wl/wyl swiatla"<<endl;
							cout<<"(2) Zmien tryb"<<endl;
							cout<<"(3) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								kawasaki.swiatla();
							}
							else if(id==2)
							{
								kawasaki.zmiana_trybu();
							}
							else if(id==3)
							break;
							
						}
							
					}
					else if(id==4)
					{
						while(1)
						{
							cout<<"Silnik pracuje, gotowy do jazdy"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) W droge"<<endl;
							cout<<"(2) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								kawasaki.jazda();
								return 0;
								
								
							}
							else if(id==2)
							break;
						
						}
					}
					else if(id==5)
					break;
					else if(id==6)
					return 0;
					
					
				
			}
			}
			else if(id==5)
			return 0;	
				
		}
		
		
	}
	else if(id==3)
	{
	
	cout<<"Wybrales ciezarowke : "<<scania.nazwa<<endl;
	
	
		while(1)
		{
			cout<<"#######################"<<endl;
			cout<<"Wybierz jedna z opcji:"<<endl;
			cout<<"(1) Opis pojazdu"<<endl;
			cout<<"(2) Sprawdz stan oleju"<<endl;
			cout<<"(3) Sprawdz cisnienie opon"<<endl;
			cout<<"(4) Podlacz naczepe"<<endl;
			cout<<"(5) Zaladunek"<<endl;
			cout<<"(6) Wejdz do kabiny"<<endl;
			cout<<"(7) Koniec"<<endl;
			cout<<"Podaj numer: ";
			cin>>id;
			cout<<"#######################"<<endl;
			
			if(id==1)
			scania.wypisz_parametry();
			else if(id==2)
			{
				scania.sprawdz_stan_oleju();
				cout<<"#######################"<<endl;
				cout<<"Wybierz jedna z opcji:"<<endl;
				cout<<"(1) Dolej"<<endl;
				cout<<"(2) Pomin"<<endl;
				cout<<"Podaj numer: ";
				cin>>id;
				cout<<"#######################"<<endl;
				
				if(id==1)
				scania.dolej();
			}
			else if(id==3)
			{
				scania.sprawdz_stan_opon();
				cout<<"#######################"<<endl;
				cout<<"Wybierz jedna z opcji:"<<endl;
				cout<<"(1) Dopompuj"<<endl;
				cout<<"(2) Pomin"<<endl;
				cout<<"Podaj numer: ";
				cin>>id;
				cout<<"#######################"<<endl;
				
				if(id==1)
				scania.pompuj();
			}
			else if(id==4)
			{
				scania.podlacz_naczepe();	
			}
			else if(id==5)
			{
				if(scania.sprawdz_naczepe()==1)
				scania.zaladunek();
				else{
				cout<<"Najpierw podlacz naczepe"<<endl;
				system("pause");
				}
			}
			else if(id==6)
			{
				while(1)
				{
					
					cout<<"#######################"<<endl;
					cout<<"Wybierz jedna z opcji:"<<endl;
					cout<<"(1) Stan paliwa"<<endl;
					cout<<"(2) Ustawienia swiatel"<<endl;
					cout<<"(3) Zapnij/odepnij pasy"<<endl;
					cout<<"(4) Uruchom silnik"<<endl;
					cout<<"(5) Wyjdz z kabiny"<<endl;
					cout<<"(6) Koniec"<<endl;
					cout<<"Podaj numer: ";
					cin>>id;
					cout<<"#######################"<<endl;
					
					if(id==1)
					scania.sprawdz_stan_paliwa();
					else if(id==2)
					{
						while(1)
						{
							cout<<"Ustawienia swiatel"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) Wl/wyl swiatla"<<endl;
							cout<<"(2) Zmien tryb"<<endl;
							cout<<"(3) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								scania.swiatla();
							}
							else if(id==2)
							{
								scania.zmiana_trybu();
							}
							else if(id==3)
							break;
							
						}
						
					}
					else if(id==3)
					{
						scania.zapnij_pasy();
					}
					else if(id==4)
					{
						while(1)
						{
							
							cout<<"Silnik pracuje, gotowy do jazdy"<<endl;
							cout<<"#######################"<<endl;
							cout<<"Wybierz jedna z opcji:"<<endl;
							cout<<"(1) W droge"<<endl;
							cout<<"(2) Wroc"<<endl;
							cout<<"Podaj numer: ";
							cin>>id;
							cout<<"#######################"<<endl;
							
							if(id==1)
							{
								if(scania.sprawdz_naczepe()==0){
								cout<<"Najpierw podlacz naczepe"<<endl;
								system("pause");
								}
								else if(scania.sprawdz_ladunek()==0){
								cout<<"Najpierw wykonaj zaladunek"<<endl;
								system("pause");
								}
								else{
								
								scania.jazda();
								
								cout<<"#######################"<<endl;
								cout<<"Wykonaj rozladunek"<<endl;
								cout<<"#######################"<<endl;
								cout<<"(1) Rozladunek"<<endl;
								cout<<"Podaj numer: ";
								cin>>id;
								cout<<"#######################"<<endl;
								
								if(id==1)
								scania.rozladunek();
								
								return 0;
								}
								
							}
							else if(id==2)
							break;
						
						}
						
					}
					else if(id==5)
					break;
					else if(id==6)
					return 0;
					
				}
				
			}
			else if(id==7)
			return 0;
				
			
			
		}
	
	}
	else if(id==4)
	return 0;
	
	return 0;
}
