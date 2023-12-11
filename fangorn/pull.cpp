#include <iostream>
namespace function3at
{
	void pull()
	{
        std::cout <<
            R"(
	********************
    *   IV. [git pull] download from repository
    * 
    * 
    
    0. Pobieranie plikow do lokalnego repozytorium
    git fetch;
    git checkout origin/pobranie_plikow;
    git pull origin pobranie_plikow;

    $ git pull == najpierw uruchamia pocecenie git fetch, ktore sluzy do pobrania zawartosci z okreslonego repozytorium zdalnego. Nastepnie wykonywane jest "$ git merge", aby scalic referencje i koncowki galezi zdalnej, tworzac nowy lokalny commit scalenia.        
        * 
        # 1. Dzialanie
        # 2. Synchronizacja git fetch && git pull
        # 3. Czesto wybierane mozliwosci:
        # 4. sciaganie ze zmiania bazy:

    1. Dzialanie
        $ git pull == polaczenie git getch && git merge (default);
            == do pobierania zawartosc ze zdalnego repo, oraz natychmiastowej aktualizacji lokalnego repo zgodnie z ta zawartoscia.
            == jest to wlasciwie kombinacja dwoch polecen:
                - git fetch (bezpiecznie)
                - git merge (mniej bezpiecznie)
                    == mozna myslec jak o wersji polecenia "$ svn update" w systemie git. To prosty sposob na synchronizacje lokalnego repozytorium ze zmianami w galezi nadrzednej. 


    2. Synchronizacja git fetch && git pull
        == roznia sie od siebie pod wzgledem bezpiecznenstwa.
        "$ git fetch" == pobiera zdalna zawartosc bez zmiany stanu lokalnego repozytorium;
        "$ git pull" == powoduje pobranie zdalnej zawartosci i podjecie niewlocznej proby zmiany stanu lokalnego zgotnie z ta zawartoscia - (mozna w ten sposo niemymyslnie doprowadzic do stanu konfliktu w lokalnym repozytorium);
            == mozna rozumiec jak roznice miedzy 'staging area' && 'remote repo';

    3. Czesto wybierane mozliwosci:
        $ git pull <skrot>  == pobiera kopie wskazanej zawartosci (<skrot>) zdalnej BIEzaCEJ / AKTUALNEJ galezi i natyczmiast scala ja z kopia lokalna;
        $ git pull --no-commit <skrot> == podognie do wywolania domyslnego. Pobiera zawartosc zdalna, ale nie tworzy nowego commita scalenia.
        $ git pull --rebase <skrot>    == dziala jak $ git pull --no-commit <skrot>, ale zamiast integrowania galezi zdalnej z lokalna z pomoca polecenia "$ git merge", wykorzystje polecenie "$ git rebase";
        $ git pull --rebase == flaga dzieki ktorej scalanie nastepuje przez zmiane bazy, a nie scalanie commita;
                            == rezultat taki sam, jak uzycie :
                                1. $ git fetch <skrot>
                                2. $ git merge origin/<current-branch>
        $ git pull --verbose    == zwraca pelne dany wyjsciowe w trakcie, co oznacza wyswietlenie sciaganej zawartosci oraz szczegolow scalenia.
                                == wyswietla liste galezi;

    4. sciaganie ze zmiania bazy:
        $ git pull --rebase == pozwala zapoewnic, ze historia pozostanie liniowa, zapobiegajac tworzeniu niepitrzebnych commitow scalenia.
            == Operacje zmiany bazy zamiast scalania, wyglada, jakby powiedziec „Chce wprowadzic swoje zmiany do tego, co zrobili wszyscy inni”. Pod tym wzgledem uzycie polecenia git pull z flaga --rebase bardziej przypomina operacje svn update niz zwykle polecenie git pull.
            == jest tak powszechnym przeplywem pracy, ze opracowano dedykowana opcje konfiguracji dla tej opcji:

                ---
                | git config --global branch.autosetuprebase always
                ---
        
)";
	}
}