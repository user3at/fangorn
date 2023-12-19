#include <iostream>
namespace awiko
{
	void diff()
	{
		std::cout <<
			R"(
	********************
	*
	*
	$ git diff to polecenie, ktore jest uzywane do porownywania roznic miedzy roznymi stanami w historii repozytorium. Dziala na poziomie plikow i pozwala zobaczyc, jakie konkretne zmiany zostaly wprowadzone w poszczegolnych plikach
    
	1. Przyklad wykorzystania w praktyce

		a) Porownywanie zmian wprowadzonych w katalogu roboczym:

			'git diff' porownuje roznice miedzy katalogiem roboczym (aktualny stan plikow) a ostatnim zatwierdzonym commitem (stan indeksu)
		
	
		b) Porownanie miedzy Commitami:

			polecenie 'git diff' mozemy uzyc do porownania konkretnych commitow - musimy jedynie podac identyfikatory SHA commitow	
	

		c) Wykrywanie zmian w branchach:

			Pozwala na porównanie roznic miedzy dwiema galeziami lub pomiedzy galezia a konkretnym commitem




	2. Przyklady

		a) Porowananie zmian w katalogu roboczym

			git diff

		b) Porownanie miedzy Commitami

			git diff SHA_commita_1 SHA_commita_2

		c) Porownanie branchy

			git diff ga³az_1 ga³az_2

		d) Porownanie zmian wprowadzonych w indeksie

			git diff --staged


	3. Opcje

		-u: Okreœla format wyjœcia, np. "unified" (domyœlny) pokazuje zmiany w stylu diff -u.

		--color: Dodaje kolorowanie do wyniku, co u³atwia zrozumienie zmian.

		--stat: Wyœwietla krótki podsumowuj¹cy statystykê zmian.

	)";
	}
}