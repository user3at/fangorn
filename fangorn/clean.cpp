#include <iostream>
namespace awiko
{
	void clean()
	{
		std::cout <<
		R"(
		********************
		*
		*
		$ git clean to polecenie, ktore sluzy do usuwania plikow i katalogow, ktore nie sa sledzone przez repozytorium.         

    1. Przyklad wykorzystania w praktyce

        Zalomy, ze masz projekt Git i w katalogu roboczym znajduja sie pliki tymczasowe lub pliki wygenerowane przez kompilacje, ktore nie sa sledzone przez Git. Chcialbys oczywcie katalog roboczy z tych plikow. W takim przypadku mozesz uzyc git clean. 

    2. Przyklady

        a) Wyswietlenie listy plikow i katalogow, ktore zostana usuniete

            git clean -n

        b) Usuniecie rzeczywistych plikow i katalogow

            git clean -f


    3. Opcje dodatkowe

        -n, --dry-run: Wyswietla liste plikow i katalogow do usuniecia, ale nie usuwa ich.

        -f, --force: Rzeczywiste usuwanie plikow i katalogow. Bez tej opcji git clean dziala w trybie bezpiecznym i nie usuwa niczego.

        -d: Usuwa rowniez katalogi.

        -x: Usuwa rowniez pliki zignorowane przez .gitignore.

        -X: Usuwa tylko pliki niezignorowane przez .gitignore.

        -i, --interactive: Tryb interaktywny, ktory pozwala na wybor, ktore pliki i katalogi chcesz usunac.
    



    4. Uwagi 
    
        Badz bardzo ostrozny przy uzywaniu git clean, zwlaszcza z opcja -f, aby uniknac utraty danych. 
        Upewnij sie, ze dokladnie wiesz, co zostanie usuniete, szczegolnie przed uzyciem opcji bezpieczenstwa.
	
		)";
	}
}