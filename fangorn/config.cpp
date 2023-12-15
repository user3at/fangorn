#include <iostream>
namespace function3at
{
    void config()
    {
        std::cout <<
            R"(
    ********************
    *   [git config] - do konfiguracji srodowiska;
    *
    *
    I.Flagi
    --global == do ustawien globalnych;
    --local == do ustawien lokalnych;
        
    git config          == printuje liste wszystkich opcji;
    git config --list   == printuje liste wszystkich ustawien;
    git config --global user.name \"my_name\"    == zmienia nazwe uzytkownika;
    git config --global user.email \"my_email\"  == zmienia mail;
        git config --global --edit               == otwiera systemowy edytor do ręcznego ustawiania parametrów;

    git config --local user.name <name>    == ustawia name dla lokalnego repo. (musisz być włascicielem? - bo inaczej ściaga z global);
    git config --local user.email <email>

    git config user.name  == printuje tylo informacje o name;
    git config user.email == printuje tylo informacje o emailu;

    git config --system core.editor <editor> == --system, ta flaga ustawi edytor dla wszystkich usrs  ;

    ~/.gitconfig <- do zmiany nazwy uzytkownika;

    Sprawdz informacje o "git alias";
    )";
    }

}