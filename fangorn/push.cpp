#include <iostream>
namespace function3at
{
	void push()
	{
        std::cout <<
            R"(
            ********************
            *   [git push] - z lokalnego do zdalnego repo;
            * 
            * 
                
            I. Uzycie
            Wypychanie umozliwia przeslanie commitow z lokalnego do zdalnego repo;
            Jest to odpowiednik '$ git fetch', ale odwrotnie, chodzi o importowanie commitow do <remote branches>;
            $ git push <remote> <branch> == wypchniecie wskazanej galezi z commitami i plikami;
                                        == Git nie pozwoli na wypychanie, jezeli przyczyni sie do scalanie w repo docelowym innego niz fast-forward;
                1. Taki sam rezultat
                $ merge master == da taki sam rezultat z poziomu repozytorium zdalnego, co '$ git push master' z poziomu lokalnego;

            $ git push <remote> --force == dodatkowo wymusza wypychanie, nawet jezeli powoduje to scalenie bez przewijania; 
                                        == nie powinno stosowac sie tej metody, chyba ze masz pewnosc co do dzialan;
            $ git push <remote> --tags == umozliwia wysylanie wszystkich tagow lokalnych do zdalnego repo;
                                        == tagi nie sa wypychane automatycznie;
                                         == nawet z uzyciem --all;
            

            II. Wypychanie do  repozytoriow poczatkowych
            $ git push --bare == git posiada zdalne repozytorim, ktore pelnia funckcje centralnego repozytorum zrodlowego;
                              == czesto hostowane przez firme zewnetrzna, poniewaz wypychane zmiany wplywaja na strukture galezi zdalnych;
                              == repozytoria surowe (bare) nie maja katalogo roboczego, dlatego wypychanie nie zmieni zawartosci 'working directory', nad ktory trwaja prace;

                              
            III. Wymuszanie wypychania
            $ git push --force == umozliwa wypychanie zmian, bez koniecznosci sciagania i scalania galezi;
                                == usuwa zmiany nadrzedne, ktore mogly nastapic od ostatniego sciagania;
                1. Jedyne wykorzystanie:
                    == w sytuacji w ktorej okaze sie ze udostepnione commity nie byly prawidlowe i naprawiano je za pomoca "$ git commit --amend", lub interaktywnej zmiany bazy;
                2. Tylko wtedy:
                    == gdy inne osoby pracujace na repo nie sciagaly tych commitow;

            V. Przyklady
                1. Domyslne polecenie
                W ponizszym przykladzie opisano jedna ze standardowych metod publikowania lokalnych wynikow prac w repozytorium centralnym. Najpierw nalezy sie upewnic, ze lokalna galaz glowna jest aktualna, pobierajac kopie repozytorium centralnego i przeprowadzajac operacje zmiany bazy w celu uwzglednienia najnowszych zmian. Interaktywna zmiana bazy to takze dobra mozliwośc do wyczyszczenia commitow przed ich udostepnieniem. Nastepnie uzycie polecenia git push powoduje wyslanie wszystkich commitow z lokalnej galezi glownej do repozytorium centralnego.

                    $ git checkout main
                    $ git fetch origin main
                    $ git rebase -i origin/main
                    # Squash commits, fix up commit messages etc.
                    $ git push origin main
                
                    $ git push == nie powinien zglaszac zadnego problemu;

                    ---
                    | $ git push <remote> <branch>
                    ---
                
            )";
	}
}