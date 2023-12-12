#include <iostream>
namespace function3at
{
    void checkout()
    {
        std::cout <<
            R"(
            ******************** 
            *   [git checkout] - wyewidencjonowanie, jednak w terminologi Git oznacza ono przelaczanie sie miedzy wersjami obiektu docelowego;
            *                   == pozwala przechodzic miedzy roznym wersjami kodu, ktore znajduja się już w systemie lokalnym;
            *
            
            # na wspolpracy z '$ git branch';
            I. Tworzenie galezie przez '$ git checkout'
                $ git checkout -b <name_new_branch> == tworzy i przechodzi do nowej galezi;
                                                    == dziala jak DWA POLECENIA:
                                                        * $ git branch <name_new_branch>;
                                                        * $ git checkout <name_new_branch>;
               $ git checkout -b <name_new_branch> <existing_branch> == dodatkowy parametr ktory wskazuje od ktorej galezi ma odejsc nowa galaz;git                                      
            
            II. Dzialanie '$ git checkout' na TRZECH TYPACH OBIEKTOW:
                * plikach;
                * commitach;
                * galeziach;
            
            III. Zmiana galezi:
                1. Lokalnych
                    $ git checkout <branch> == zmiana biezacej galezi na wskazana;
                2. Zdalnych
                    $ git checkout <skrot>/<branch> == zmienia branch i jednoczesnie pobiera zawarte w nim pliki;
                3. Z utworzeniem
                    $ git checkout -b <branch> == dziala jak "$ git branch <name_of_branch>";

                ***
                * git checkout <name_of_branch>
                ***

            IV. Gałęie zdalne:
                1. Tworzenie galezi w oparciu o 'remote'
                $ git checkout -b <remotebranch> origin/<remotebranch>

                2. Wyewidencjonowanie nowej galezi lokalnej i zresetowanie jej do ostatniego commita galezi zdalnej:
                    $ git checkout -b <branch_name>;
                    $ git reset --hard origin/<branch_name>;

            V. Odlaczone wskazniki HEAD
                == wskaznik HEAD jest sposobem odwolywanie sie do biezacej migawki stosowanym w Git;
                "detached HEAD" == stan odlaczonego wskaznika;
                                == ostrzezenie, ktore informuje, ze to co robisz jest "odlaczone" od reszty prac programistycznych w ramach projektu;
                                == praca nad funkcja w tym stanie spowoduje brak galezi, ktora pozwolibaby do niej wrocic;
                                    == jesli wyewidencjonujesz inna galaz(np. w celu scalenia z nia swojej funkcji), nie bedzie mozliwosci odwolania sie do Twojej funkcji;
                    == prace powinny byc zawsze prowadzone w galezi, a nigy przy odlaczonym wskazniku HEAD;
                        == dzieki temu masz referencje do nowych commitow;
                    == przegladajac stary commit, stan odlaczenia wskaznika HEAD nie ma znaczenia;

                "$ git checkout" == aktualizuje wskaznik HEAD tak, aby wskazywal on okreslona galaz, lub commit;
                                == gdy wskazuje galaz, system Git nie zglasza problemow i nie jest zagrozony;

            
            VI. Z ostatniego commit'u do 'working directory':
                $ git checkout <origin>/<branch_in_remote> == sprawdza zawartosc tego branch'u
                    ---
                    | $ git checkout origin/branch_for_merge;
                    ---

                $ git checkout -- <name_of_file> == pobiera z repozytorium ostatni commit i wkleja do 'working directory';
                                 == czyli, odzyskanie starej wersji pliku;

                        bez " -- " == printuje informacje o updated file;

            VI. Z kazdego commit'u do 'working directory':
                $ git checkout <commit> -- <name_file>  == odszukuje wskazany komit i pobiera zawartosc;

                    ***
                    * git checkout <commit> -- <name_file>;
                    ***

                        bez " -- " == printuje informacje o update file;
                
                
            )";
    }
}