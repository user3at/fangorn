#include <iostream>
namespace function3at
{
	void stash()
	{
std::cout <<
R"(
********************
* [git stash] - schowek w repo
* 
* 
I. Dodawanie pracy do schowka
$ git stash == pobiera niezatwierdzone zmiany, te w 'staging area' rowniez;
                == mozna pomyslec, ze je hibernuje do odwolania;
            == schowek nie jest wypychany razem z commitami na serwer;

II.Ponowne stosowanie zmian dodanych do schowka
$ git stash pop == przywrocenie zahibernowanych zmian do schowka;
                == zmiany mozna wklejac do wielu galezi; 
                == domyslnie przywraca zmiany z ostatnio zrobionego schowka;

$ git stash apply == zachowuje zmainy w schowku, mimo przywrucenia zmian do 'working directory'

III. Dodawanie do schowka nieśledzonych lub ignorowanych plikow
$ git stash --all == dodaje do schowka zmiany takze w ignorowanych (niesledzonych) plikach;
$ git stash -u (lub --include-untracted) == uwzglednia niesledzone pliki;

IV. Zarzadzanie wieloma schowkami
    Mozna wykonac "$ git stash" wielokrotnie, nastepnie:
$ git stash list == wyswietla liste schowkow;
$ git stash sava "message" == dodanie opisu do schowka, jakby commit;
$ git stash pop stash@{x} == przywrucenie schowka o wybranym identyfikatorze;

V. Wyświetlanie roznic miedzy schowkami
$ git stash show == printuje podsumowanie schowka; 
$ git stash show -p (--patch) == pelny zestaw roznic w schowku;

VI. Cześciowe dodawanie zmian do schowka
$ git stash -p == dodawanie do schowka pojedyczego pliku, kolekcji, lub poszczegolnych zmain z plikow;
                == powoduje iteracyjne przejscie przez kazdy fragment ze zmianami 'hunk' w kopii roboczej;

VII. Tworzenie galezi na podstawie schowka
Jesli zmiany w galezi beda rozbiezne ze zmianami w schowku, za pomoca "$ git stash pop", lub "$ git stash apply", moga pojawic sie konflikty;
                
    1. Rozwiazanie
    $ git stash branch == tworzy nowa galaz i wprowadza zmiany ze schowka;
                        == nowa galaz oprze sie o commity z galezi z ktorej utworzono schowek;
    ---
    | $ git stash branch <name_new_branch> stash@{0};
    ---

VII. Oczyszczanie schowka
$ git stash drop stash@{2} == usuwa konkretny schowek;
$ git stash clear == usuwa wszystkie schowki;            

)";
	}
}