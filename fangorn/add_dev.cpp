#include <iostream>
namespace function3at
{
    void add()
    {
        std::cout <<
            R"( 
    ********************
    *   [ git add ] - pierwsze polecenie przeplywu pracy git
    *
    *
    
    git add (I >> II) == dodaje zmiane z katalogu roboczego do przechowalni (I >> II)
                      == informuje system, ze chcesz wlaczyc aktualizacje pliku do commitu (nie wplywa na repozytorium);
                      
    git add .         == dodanie wszystkich plikow / folderow do II drzewa;

        ***
        * git add .
        ***
    I Dzialanie:
    Polecenie zapisuje zmiany dokonane na plikach w 'staging area',
    czyli, przenosi te zmiany z 'working directory' do 'staging area';
    Jeśli zapisana migawka spełnia oczekiwania, zapisuje się ją w historii projektu z pomocą 'git commit';

    II Przechowalnia:
    'staging area' jest niczym bufor między 'working directory', a 'repository';
    Zamiast zatwierdzać wszystkie zmiany wprowadzone od ostatniego commitu, można je pogrupować za sprawą przechowalni w ściśle wyspecjalizowane migawki przed zatwierdzeniem w gistorii projektu;
    Umozliwia to wprowadzenie wszelkiego rodzaju zmian w niepowiązanych plikach, a następnie cofanie się i dzielenie ich na logiczne commity przez dodawanie powiązanych zmian do przechowalni i ich zatwierdzanie po kolei;
    Ważne jest tworzenie pomniejszych commitó, tak aby w latwy sposob mozna sledzic bedy i cofac zmiany przy minimalnym wplywie na reszte projektu;

    III. Czeste polecenia:
    $ git add <file>  == dodanie konkretnego pliku do II drzewa; 
    $ git add <directory> == dodanie konkretnego katalogu do II drzewa;
    $ git add -p == rozpoczyna interaktywną sesje zapisu w 'staging area', ktora pozwala wybrac fragmenty pliku do dodania do nastepnego commitu;
                == Przedstawiony zostaje fragment zmian i pojawia sie monit o wpisanie polecenia:
                     y == aby zapisac fragment w przechowalni;
                     n == aby zignorowac fragment;
                     s == aby podzielic go na mniejsze fragmenty;
                     e == aby recznie wyedytowac;
                     q == wyjscie;

    IV. Przyklady:
    git add == pelni taka sama funkcje == svn import;

        Polecenie 1: https://github.com
        stwórz repo <loriens>

        Polecenie 2: terminal git bash
        $ mkdir loriens 
        $ cd lori*
        $ echo "funy test" > file.txt
        $ ls
        $ cat
        $ git init
        $ git status
        $ git log
        $ > random_file
        $ > important_file
        $ ls
        $ git add file
        $ git status
        $ git add .
        
        Sprawdz jak:
            cofnąć migawkę z 'staging area' do 'working directory': "git reset";
            cofnać commit z 'repository' do 'working directory': "git reset"


    )";
}
}