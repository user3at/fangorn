#include <iostream>

namespace awiko
{
    void remote()
    {
        std::cout <<
     R"(
    ********************
    *     
    *
    *
	
    git remote to polecenie, kt�re s�u�y do zarz�dzania zdalnymi repozytoriami. Pozwala na dodawanie, wy�wietlanie, usuwanie i zarz�dzanie odniesieniami do repozytori�w znajduj�cych si� na zdalnych serwerach.

	1. Przyk�ady zastosowania
		a) Wy�wietlanie Zdalnych Repozytori�w:
			git remote

		b) Dodawanie Zdalnego Repozytorium:		
			git remote add nazwa_skr�cona URL_repozytorium

		c) Pobieranie Zmian z Zdalnego Repozytorium:
			git pull nazwa_zdalnego_repo nazwa_galezi_na_repo

		d) Pobieranie Informacji o Zdalnym Repozytorium:
			git remote show nazwa_skr�cona

		e) Usuwanie Zdalnego Repozytorium:
			git remote remove nazwa_skr�cona	
	
		f) Zmiana nazwy
			git remote rename stara_nazwa nowa_nazwa

	

	2. Opcje dodatkowe

		-v, --verbose: Wy�wietla bardziej szczeg�owe informacje, takie jak URL repozytori�w.

		-h, --help: Wy�wietla kr�tk� pomoc dotycz�c� git remote.
   

				

		)";
    }
}