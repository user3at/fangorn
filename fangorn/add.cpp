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
    Jesli zapisana migawka spelnia oczekiwania, zapisuje sie ja w historii projektu z pomoca 'git commit';

    II Przechowalnia:
    'staging area' jest niczym bufor miedzy 'working directory', a 'repository';
    Zamiast zatwierdzac wszystkie zmiany wprowadzone od ostatniego commitu, mozna je pogrupowac za sprawa przechowalni w scisle wyspecjalizowane migawki przed zatwierdzeniem w gistorii projektu;
    Umozliwia to wprowadzenie wszelkiego rodzaju zmian w niepowiazanych plikach, a nastepnie cofanie sie i dzielenie ich na logiczne commity przez dodawanie powiazanych zmian do przechowalni i ich zatwierdzanie po kolei;
    Wazne jest tworzenie pomniejszych commito, tak aby w latwy sposob mozna sledzic bedy i cofac zmiany przy minimalnym wplywie na reszte projektu;

    III. Czeste polecenia:
    $ git add <file>  == dodanie konkretnego pliku do II drzewa; 
    $ git add <directory> == dodanie konkretnego katalogu do II drzewa;
    $ git add -p == rozpoczyna interaktywna sesje zapisu w 'staging area', ktora pozwala wybrac fragmenty pliku do dodania do nastepnego commitu;
                == Przedstawiony zostaje fragment zmian i pojawia sie monit o wpisanie polecenia:
                     y == aby zapisac fragment w przechowalni;
                     n == aby zignorowac fragment;
                     s == aby podzielic go na mniejsze fragmenty;
                     e == aby recznie wyedytowac;
                     q == wyjscie;

    IV. Przyklady:
    git add == pelni taka sama funkcje == svn import;

        Polecenie 1: https://github.com
        stworz repo <loriens>

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
            cofnac migawke z 'staging area' do 'working directory': "git reset";
            cofnac commit z 'repository' do 'working directory': "git reset"


    )";
    }
}