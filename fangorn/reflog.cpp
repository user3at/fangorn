#include <iostream>
namespace awiko
{
	void reflog()
	{
		std::cout <<
		R"(
		********************
		*
		*
    $ git reflog =  to narzedzie, ktore przechowuje historie referencji (takich jak branchy czy HEAD). Git reflog pozwala na przegladanie historii zmian referencji, nawet jezli zostaly one usuniete.               

    1. Sprawdza historie zmian brancha (np. master)

        git reflog show master

    2. Przywraca branch do poprzedniego stanu

        git reset --hard HEAD@{n}
    
    3. Sprawdz historie zmian HEAD

        git reflog
    
    4. Wywolywanie kompletnego dziennika wszystkich odwolan

        git reflog show --all

    5. Podpolecenie wygaszania czysci stare lub nieosiagalne wpisy dziennika reflog

        git reflog expire

    6. Usuwa przekazany wpis dziennika reflog

        git reflog delete
    
    




    # Przyklady

    a) Uzycie wzgledem schowka. Spowoduje to wyswietlenie dziennika schowka Git.

        git reflog stash

    b) Wykorzystanie znacznikow czasu w polaczeniu z komenda diff. Przedstawia wykaz zmian w biezacej galezi glownej wzgledem jej stanu sprzed 5 dni.

        git diff main@{0} main@{5.days.ago} 

    

    # Uwagi
        
        HEAD@{n} odnosi sie do n-tego wpisu w historii zmian HEAD.

        git reset --hard jest uzywane do bezwarunkowego przywracania referencji do okreslonego stanu.    
               

		)";
	}
}