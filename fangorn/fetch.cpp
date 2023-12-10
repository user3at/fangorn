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

    $ git fetch == Pobierz wszystkie informacje o zdalnym repozytorium, w tym listę dostępnych gałęzi i zmian w bezpieczny sposób;
                == czyli, pobiera commity, pliki i odwołania z repo zdalnego do loc;
                == pobieranie umożliwia sprawdzenie, nad czym pracują inni użytkownicy.
                    + umożliwia sprawdzenie postępów w historii centralnej;
                        >> przypomina to polecenit '$ svn update', nie wymaga scalania zmian z repozytorium;
                == 'working directory' jest odizolowana od pobranego repo;
                    == należy wyewidencjonować poleceniem 
                        $ git checkout                  
                            
    II. Działanie polecenia z gałęziami zdalnymi
        
        1. Miejsce przechowywanych
            * wszystkich commitów: lokalnych && zdalnych:
                ./.git/objects

            1.1. odwołań do gałęzi:
                *  lokalnej:
                    $ git branch
                        ./.git/refs/heads 
                    $ ls ./.git/refs/heads
                * zdalnej:
                    ./.git/refs/remotes

        Gałęzie zdalne odzwierciedlają commity z repo innych programistów. 
        Zabezpieczone w następujący sposób:
            Nazwy gałęzi zdalnych:
                - posiadają <nazwe elementu zdalnego> do którego należą;

        2. Przykłady przedstawiają gałęzie widoczne po pobraniu repozytorim zdalnego o <name>
            # origin/main
            # origin/back_door

        3. Sprawdzenie gałęzi zdalnych 
            $ git checkout origin/back_door
                następnie
                    $ git checkout log

        4. Synchronizacja repozytorim lokalnego ze zdalnym to:
            Dwuetapowy proces:
                1. pobieranie
                2. scalenie

            $ git pull to wygodny sposób skócenia tej proceduty

    III. Polecenia pobierania i opcje

        $ git fetch <remote>  == pobiera wszystkie gałęzie z repozytorim. Umożliwia także pobranie wszystkich wymaganych zatwierdzeń oraz plików z drugiego repozytorium.

        $ git fetch <remote> <branch>
            ---
            | $ git fetch origin 1.0.clone_dev
            ---
        
        $ git fetch --all == pobiera wszystkie zarejestrowane elementy zdalne oraz ich gałęzie;

        $ git fetch --dry-run == umożliwia próbne uruchomienie polecenia. Przedstawi przykłady działań, jakie zostaną wykonane podczas pobierania, ale ich nie zastosuje;

    IV. Przykłady poleceń pobierania w środowisku

        1. git fetch - gałąź zdalna
            
            Do zrobienia:
            1. Stórz centralne_repo i wprowadź tam zmany;
            2. Sklonuj to repo jako inny projekt;
            3. Stwórz dodatkowe repozytorim zdalne o nazwie coworkers_repo z gałęzią feature_branch;
            



    
    )";

    }
}