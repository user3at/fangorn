#include <iostream>
namespace awiko
{
	void blame()
	{
		std::cout <<
	R"(
	********************
	*
	*
	$ git blame to polecenie, ktore sluzy do analizy historii zmian w pliku. Pozwala na sledzenie, ktora linijka w pliku zostala zmieniona, kto dokonal tej zmiany, oraz w ktorym commicie ta zmiana zostala wprowadzona. 


        git blame nazwa_pliku

        

    1. Przyklad wykorzystania w praktyce:

        Zalomy, ze pracujesz nad projektem i napotykasz trudnosci z pewnym fragmentem kodu. Moze to byc blad, niezrozumiala logika, lub po prostu potrzebujesz zrozumiec, dlaczego dany fragment wyglada tak, a nie inaczej. Wtedy git blame moze byc pomocne.
        Wynik bedzie wygladac mniej wiecej tak:

        ^2d3g1 (Author 1 2019-01-01 12:00:00) pierwsza linijka kodu
        ^2d3g1 (Author 1 2019-01-01 12:00:00) druga linijka kodu
        ^7a8b9 (Author 2 2019-02-15 14:30:00) trzecia linijka kodu
        ^2d3g1 (Author 1 2019-01-01 12:00:00) czwarta linijka kodu

        Gdzie:

        ' ^2d3g1 '                       -  to identyfikator commita, ktory wprowadzic dane zmiany.
        ' Author 1 2019-01-01 12:00:00 ' -  to informacje o autorze oraz dacie commita.
    




    2. Przyklady 
        
        a) Odczytanie okreslonego zakresu wierszy
            
            git blame -L 1,5 nazwa_pliku.md

        b) Pokazanie adresu e-mail autorow zamiast nazw uzytkownikow

            git blame -e nazwa_pliku.md

        c) Ignorowanie zmiana w znakach odstepu (zamiana spacji na tabulator)

            git blame -w nazwa_pliku.md

        d) Wykrywanie przeniesione lub skopiowanie wiersze wewnatrz pliku. Spowoduje to zgloszenie oryginalnego autora wierszy zamiast ostatniego autora, ktory przeniosl lub skopiowac wiersze.

            git blame -C nazwa_pliku.md      
    
	
	)";
	}
}