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
	
    git remote to polecenie, które s³u¿y do zarz¹dzania zdalnymi repozytoriami. Pozwala na dodawanie, wyœwietlanie, usuwanie i zarz¹dzanie odniesieniami do repozytoriów znajduj¹cych siê na zdalnych serwerach.

	1. Przyk³ady zastosowania
		a) Wyœwietlanie Zdalnych Repozytoriów:
			git remote

		b) Dodawanie Zdalnego Repozytorium:		
			git remote add nazwa_skrócona URL_repozytorium

		c) Pobieranie Zmian z Zdalnego Repozytorium:
			git pull nazwa_zdalnego_repo nazwa_galezi_na_repo

		d) Pobieranie Informacji o Zdalnym Repozytorium:
			git remote show nazwa_skrócona

		e) Usuwanie Zdalnego Repozytorium:
			git remote remove nazwa_skrócona	
	
		f) Zmiana nazwy
			git remote rename stara_nazwa nowa_nazwa

	

	2. Opcje dodatkowe

		-v, --verbose: Wyœwietla bardziej szczegó³owe informacje, takie jak URL repozytoriów.

		-h, --help: Wyœwietla krótk¹ pomoc dotycz¹c¹ git remote.
   

				

		)";
    }
}