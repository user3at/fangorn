#include <iostream>
namespace function3at
{
    void alias()
    {
        std::cout <<
            R"(
            ********************
            *   [alias] - alias jest skrotem. Tworzy sie przez polecenie 'git config';
            *
            *
            I. Czym jest:
            Jest to niczym zmienna dla wartosci. 
            Po lewej stronie:
                * nazwa zmiennej / aliasu;
            Po prawej stronie:
                * wartosc zmiennej / cale polecenie;

            II. Tworzenie aliasow:
                git config --global alias.<alias-name> <git-command>
            $ git config --global alias.com commit; 
                == od teraz '$ git com' == '$ git commit';

                --flaga
                --global == oznacze, ze zmiany nastapily dla calego srodowiska git, nie tylko dla danego projektu;
                
                ~/.gitconfig == sciezka do globalnych ustawien;
            
            )";
    }
}