#include <iostream>
namespace awiko
{
	void commit()
	{
		std::cout <<
			R"(
	********************
	*
	*
	$ git commit to polecenie, ktore jest uzywane do zatwierdzania zmian wprowadzonych w indeksie (staging area). Pozwala na utworzenie nowego commita, ktory reprezentuje konkretny punkt w historii projektu 
    
	1. Przyklad wykorzystania w praktyce

		a) Tworzenie punktow zatwierdzenia (Commitow):

			'git commit' tworzy nowy commit, ktory zawiera zmiany zatwierdzone w indeksie. Ka¿dy commit reprezentuje konkretne zmiany w projekcie.
		
	
		b) Historia projektu:

			Zatwierdzone commity tworza historie projektu, umozliwiajac sledzenie, kiedy i jakie zmiany zosta³y wprowadzone.		

		c) Opisy Zmian:

			Pozwala na dodanie komentarza (wiadomoœci commita) opisujacego, co zostalo zmienione i dlaczego, co ulatwia zrozumienie historii projektu.




	2. Przyklady

		a) Zatwierdzanie Wszystkich Zmian

			git commit -m "Dodano now¹ funkcje"

		b) Zatwierdzanie Wybranych Zmian

			git commit -m "Naprawa b³êdu" plik_1 plik_2

		c) Zatwierdzanie z Wiadomoœcia w Edytorze

			git commit

		d) Zatwierdzanie ze Zmianami Wprowadzonymi w Poprzednim Commicie

			git commit --amend


	3. Opcje

		-m: Pozwala na dodanie wiadomosci commita bez koniecznosci otwierania edytora.

		-a: Automatycznie zatwierdza wszystkie zmiany w indeksie.

		--amend: Pozwala na wprowadzenie dodatkowych zmian do ostatniego commita.

	)";
	}
}