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
    
    $ git pull == najpierw uruchamia pocecenie git fetch, które służy do pobrania zawartości z okreslonego repozytorium zdalnego. Następnie wykonywane jest "$ git merge", aby scalić referencje i końcówki gałęzi zdalnej, tworząc nowy lokalny commit scalenia.        
        * 
        # 1. Działanie
        # 2. Synchronizacja git fetch && git pull
        # 3. Często wybierane możliwości:
        # 4. Ściąganie ze zmianią bazy:

    1. Działanie
        $ git pull == polączenie git getch && git merge (default);
            == do pobierania zawartosc ze zdalnego repo, oraz natychmiastowej aktualizacji lokalnego repo zgodnie z ta zawartoscia.
            == jest to wlasciwie kombinacja dwoch polecen:
                - git fetch (bezpiecznie)
                - git merge (mniej bezpiecznie)
                    == można myśleć jak o wersji polecenia "$ svn update" w systemie git. To prosty sposób na synchronizację lokalnego repozytorium ze zmianami w gałęzi nadrzędnej. 


    2. Synchronizacja git fetch && git pull
        == różnią się od siebie pod względem bezpieczneństwa.
        "$ git fetch" == pobiera zdalną zawartość bez zmiany stanu lokalnego repozytorium;
        "$ git pull" == powoduje pobranie zdalnej zawartości i podjęcie niewłocznej próby zmiany stanu lokalnego zgotnie z ta zawartością - (można w ten sposó niemymyslnie doprowadzić do stanu konfliktu w lokalnym repozytorium);
            == można rozumieć jak róznice między 'staging area' && 'remote repo';

    3. Często wybierane możliwości:
        $ git pull <skrót>  == pobiera kopię wskazanej zawartości (<skrót>) zdalnej BIEŻĄCEJ / AKTUALNEJ gałęzi i natyczmiast scala ją z kopią lokalną;
        $ git pull --no-commit <skrót> == podognie do wywołania domyślnego. Pobiera zawartość zdalną, ale nie tworzy nowego commita scalenia.
        $ git pull --rebase <skrót>    == działa jak $ git pull --no-commit <skrót>, ale zamiast integrowania gałęzi zdalnej z lokalną z pomocą polecenia "$ git merge", wykorzystje polecenie "$ git rebase";
        $ git pull --rebase == flaga dzięki której scalanie następuje przez zmianę bazy, a nie scalanie commita;
                            == rezultat taki sam, jak użycie :
                                1. $ git fetch <skrót>
                                2. $ git merge origin/<current-branch>
        $ git pull --verbose    == zwraca pełne dany wyjściowe w trakcie, co oznacza wyświetlenie ściąganej zawartości oraz szczegółów scalenia.
                                == wyświetla listę gałęzi;

    4. Ściąganie ze zmianią bazy:
        $ git pull --rebase == pozwala zapoewnić, że historia pozostanie liniowa, zapobiegając tworzeniu niepitrzebnych commitów scalenia.
            == Operację zmiany bazy zamiast scalania, wygląda, jakby powiedzieć „Chcę wprowadzić swoje zmiany do tego, co zrobili wszyscy inni”. Pod tym względem użycie polecenia git pull z flagą --rebase bardziej przypomina operację svn update niż zwykłe polecenie git pull.
            == jest tak powszechnym przepływem pracy, że opracowano dedykowaną opcję konfiguracji dla tej opcji:

                ---
                | git config --global branch.autosetuprebase always
                ---
        
)";
	}
}