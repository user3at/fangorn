#include <iostream>

namespace Awiko {

    void rm() {

        std::cout <<
        R"(    
        $ git rm to polecenie, ktore sluzy do usuniecia plikow lub katalogow z zarzadzanego przez Git repozytorium. Uzywane jest w kontekscie przemieszczania, usuwania lub reorganizacji plikow w projekcie.    

        1. Usuniecie plikow z repozytorium. Polecenie to usuwa plik o nazwie nazwa_pliku zarowno z katalogu roboczego, jak i z indeksu (staging area). Nastepnie, aby zatwierdzic te zmiane, musisz wykonac commit (git commit).

            git rm nazwa_pliku
    
        2. Rekurencyjne Usuniecie Katalogu. Uzywajac flagi -r (lub -rf), mozesz usunac caly katalog wraz z jego zawartoscia.

            git rm -r nazwa_katalogu

        3. Usuniecie Pliku Bez Fizycznego Usuwania z Dysku. Flaga --cached usuwasz plik tylko z indeksu, pozostawiajac go w katalogu roboczym. Jest to przydatne, jezli chcesz przestac sledzic plik, ale zachowac go lokalnie.

            git rm --cached nazwa_pliku    


        4. Opcje dodatkowe

           -f: sluzy do wymuszenia wykonania polecenia

           -n: Opcja rozruchu testowego dry-run stanowi zabezpieczenie pozwalajace wykonac polecenie git rm bez faktycznego usuwania plikow. Zamiast tego zostaje wyswietlona lista plikow, kt�re mialyby zostac usuniete
    
           --: Separator sluzy do wyra�nego oddzielenia listy nazw plikow od argumentow przekazywanych do git rm. Jest to przydatne w przypadku nazw plikow przypominajacych opcje polecen.

           --ignore-unmatch:  Ta opcja powoduje zakonczenie polecenia ze statusem sigterm 0 nawet wtedy, gdy pliki nie zostana dopasowane

           -q: Opcja quiet pozwala ukryc wynik polecenia git rm. Standardowo polecenie wyswietla jeden wiersz dla kazdego usunietego pliku.


        5. Uwagi 
    
            git rm usuwa sledzenie plikow w repozytorium, ale nie usuwa fizycznie plikow z systemu plikow. Jezli chcesz usunac pliki z systemu plikow, musisz to zrobic osobno po uzyciu git rm.

            git rm jest czesto uzywane w kontekscie przygotowywania projektu do nowej struktury, eliminowania niepotrzebnych plik�w lub przygotowywania projektu do zatwierdzenia.
        





       )";
    }
}