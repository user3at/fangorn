#include <iostream>

namespace awiko
{
	void rebase()
	{
		std::cout <<
			R"(
	********************
	*	
	*
	*
	$ git rebase to polecenie, ktore sluzy do przemieszczania i laczenia commitow z jednej galezi do drugiej. Rebase pozwala na zmiane historii commitow poprzez umieszczanie ich na koncu innej galezi lub poprzez scalanie commitow z dwoch ronych galezi.             

    1. Przyklad wykorzystania w praktyce

        Zalomy, ze masz lokalna galaz o nazwie feature i chcesz zintegrowac zmiany z galezi main. Uzyjemy git rebase, aby przesunac commity z feature na koniec historii main.

        Krok 1: Przelacz sie na Galaz main i Zaktualizuj ja:
            
            git checkout main
            git pull origin main

        Krok 2: Przelacz sie z Powrotem na Galaz feature:

            git checkout feature

        Krok 3: Uzyj git rebase:

            git rebase main
        
        Krok 4: Rozwiazanie Konfliktow (jezli wystapia):

            Po uzyciu git rebase, mozesz napotkac konflikty, ktore musisz rozwiazac recznie. Uzyj polecenia git add i git rebase --continue, aby kontynuowac proces rebase po rozwiazaniu konfliktow.

        Krok 5: Zakoncz Rebase:

            Po rozwiazaniu konfliktow i kontynuowaniu rebase, zakoncz go przy uzyciu:

            git rebase --continue




    2. Przyklady

        a) Wyswietlenie listy plikow i katalogow, ktore zostana usuniete

            git clean -n

        b) Usuniecie rzeczywistych plikow i katalogow

            git clean -f


    3. Opcje dodatkowe

       -- d: oznacza, ze w trakcie wykonywania commit zostanie pominiety w koncowym bloku polaczonych commitow.

       -- p: umozliwia pozostawienie commita bez zmian. Zawartosc ani komunikat takiego commita nie zostana zmodyfikowane, a commit nadal bedzie widoczny w historii galezi jako pojedynczy commit.
    
       -- x:  w trakcie wykonywania stosuje skrypt powloki wiersza polecenia do kazdego oznaczonego commita


    4. Uwagi 
    
        Uzywaj go z rozwaga, zwlaszcza jezli dzielisz swoje zmiany z innymi programistami. Rebase zmienia historie commitow, co moze prowadzic do problemow w przypadku wsplpracy nad wspolne galezia.

        Unikaj uzywania git rebase na galeziach, ktore zostaly juz opublikowane publicznie (np. galezie main), poniewaz zmienia to historie i moze utrudnia innym programistom synchronizacje z galezia.

        Jezli pracujesz na galazi, ktora jest prywatna i nie jest udostepniana publicznie, git rebase moze byc uzyteczne do utrzymania czystej historii.
        

)";
	}
}