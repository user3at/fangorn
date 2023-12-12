#include <iostream>
namespace function3at
{
    void init()
    {
        std::cout <<
            R"( 
    ********************
    *   TRZY DRZEWA GIT'A
    *
    *

    - katalog roboczy (working directory)
    - przechowalnia (staging area)
    - historia commitow (repository)

    Przepływ pracy odbywa się od 'working directory', przez 'staging area' do 'remote repository';
    Kluczowe polecenia dla przepływu pracy:
    # $ git add
    # $ git commit
    # $ git push

    git init        == bedac w danym folderze, inicjalizuje gita na caly katalog;
                    == czyli, tworzy repozytorium git;
                    == mozna zainicjalizowac git w nowym "niewersjonalizowanym" wczesniej projekcie do repozytorium git, lub stworzyc nowy;
                    == to polecenie powoduje utworzenie "ukrytego" podkatalogu .git - zawiera wszystkie metadane dotyczące projectu;

        ***
        * git init
        ***
    Sprawdz status swojego repo "git status";
    Sprawdz jak dodat stworzone pliku do repozytorium "git add";
    )";
    }
}