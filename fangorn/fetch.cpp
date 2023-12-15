#include <iostream>
namespace function3at
{
	void fetch()
	{
		std::cout <<
R"(
    ********************   
    *
    * 

    $ git fetch == Pobierz wszystkie informacje o zdalnym repozytorium, w tym liste dostepnych galezi i zmian w bezpieczny sposob;
                == czyli, pobiera commity, pliki i odwolania z repo zdalnego do loc;
                == pobieranie umozliwia sprawdzenie, nad czym pracuja inni uzytkownicy.
                    + umozliwia sprawdzenie postepow w historii centralnej;
                        >> przypomina to polecenit '$ svn update', nie wymaga scalania zmian z repozytorium;
                == 'working directory' jest odizolowana od pobranego repo;
                    == nalezy wyewidencjonowac poleceniem 
                        $ git checkout                  
                            
    II. Dzialanie polecenia z galeziami zdalnymi
        
        1. Miejsce przechowywanych
            * wszystkich commitow: lokalnych && zdalnych:
                ./.git/objects

            1.1. odwolań do galezi:
                *  lokalnej:
                    $ git branch
                        ./.git/refs/heads 
                    $ ls ./.git/refs/heads
                * zdalnej:
                    ./.git/refs/remotes

        Galezie zdalne odzwierciedlaja commity z repo innych programistow. 
        Zabezpieczone w nastepujacy sposob:
            Nazwy galezi zdalnych:
                - posiadaja <nazwe elementu zdalnego> do ktorego naleza;

        2. Przyklady przedstawiaja galezie widoczne po pobraniu repozytorim zdalnego o <name>
            # origin/main
            # origin/back_door

        3. Sprawdzenie galezi zdalnych 
            $ git checkout origin/back_door
                nastepnie
                    $ git checkout log

        4. Synchronizacja repozytorim lokalnego ze zdalnym to:
            Dwuetapowy proces:
                1. pobieranie
                2. scalenie

            $ git pull to wygodny sposob skocenia tej proceduty

    III. Polecenia pobierania i opcje

        $ git fetch <remote>  == pobiera wszystkie galezie z repozytorim. Umozliwia takze pobranie wszystkich wymaganych zatwierdzeń oraz plikow z drugiego repozytorium.

        $ git fetch <remote> <branch>
            ---
            | $ git fetch origin 1.0.clone_dev
            ---
        
        $ git fetch --all == pobiera wszystkie zarejestrowane elementy zdalne oraz ich galezie;

        $ git fetch --dry-run == umozliwia probne uruchomienie polecenia. Przedstawi przyklady dzialań, jakie zostana wykonane podczas pobierania, ale ich nie zastosuje;

    IV. Przyklady poleceń pobierania w środowisku

        1. git fetch - galaz zdalna
            
            Do zrobienia:
            1. Storz centralne_repo i wprowadz tam zmany;
            2. Sklonuj to repo jako inny projekt;
            3. Stworz dodatkowe repozytorim zdalne o nazwie coworkers_repo z galezia feature_branch;
            



    
    )";

    }
}