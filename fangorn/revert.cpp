#include <iostream>
namespace awiko
{
	void revert()
	{
		std::cout <<
		R"(
		********************
		*
		*
		$ git revert to polecenie, ktore sluzy do tworzenia nowego commita, ktory cofa zmiany wprowadzone w poprzednich commitach. Jest to bezpieczny sposob na anulowanie zmian bez naruszania historii projektu.

        1. Przykaad wykorzystania w praktyce

            Zalozmy, ze masz historie commitow w swoim repozytorium, a jeden z commitow wprowadzil zmiany, ktore chcesz cofnac. Uzyjemy git revert w celu stworzenia nowego commita, ktory cofnie te zmiany.

            Krok 1: Sprawdz Aktualna historie Commitow i  zidentyfikuj commit, ktory wprowadzic zmiany, ktore chcesz cofnac.

                git log      


            Krok 2: Uzyj git revert:

                git revert SHA_commita

            Krok 3: Zatwierdz nowy commit. Po uzyciu git revert, Git otworzy edytor tekstu, aby umozliwic dodanie opcjonalnego komunikatu dla nowego commita. Wprowadz komunikat, zapisz i zamknij edytor.


            Krok 4: Zakoncz Proces. Po zatwierdzeniu commita, proces git revert zostanie zakonczony, a zmiany zostana zapisane w historii projektu. Teraz mozesz kontynuowac praca na biezacej galezi.


        2. Przyklady

            a) Wyswietlenie listy plikow i katalogow, ktore zostana usuniete

                git clean -n

            b) Usuniecie rzeczywistych plikow i katalogow

                git clean -f


        3. Opcje dodatkowe

           --no-edit: Przywrocenie nie spowoduje otwarcia edytora.

            -n; --no-commit: Uzycie tej opcji uniemozliwi poleceniu git revert utworzenie nowego commita, ktory odwroci docelowy commit. 
    



        4. Uwagi 
    
            Git revert moze prowadzic do konfliktow, zwlaszcza jezli od czasu commita, ktory chcesz cofnac, byly wprowadzone nowe zmiany. W takim przypadku Git moze poprosic cie o reczne rozwizzanie konfliktow.
            Jezli masz pewnosc, ze chcesz cofnac ostatni commit i nie zalezy ci na jego historii, moze byl bardziej odpowiednie uzywanie git reset lub git commit --amend.
        

		)";
	}
}