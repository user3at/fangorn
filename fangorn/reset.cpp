#include <iostream>

namespace function3at
{
	void reset()
	{
		std::cout <<
R"(
********************
*   [git reset] (III << II) == do cofania commitow, lub migawek z przechowalni;  
*
*
	  # na wspolpracy z ls-files --stage
        Sprawdz wiecej informacji w "info"


    git reset HEAD -- <path/name_of_file> == sciaganie pliku z 'staging area' do 'working directory' 
    
        # flagi --soft, --mixed, --hard: okreslaja sposob modyfikacji drzew indeksu przechowalni i katalogu roboczego;

    git reset --hard == usuniecie wszystkich zmian w projekcie - z ostatniego commit'u;
                     == nieodwracalna kasacja;
                     == najczesciej stosowana;

    git reset --mixed == domyślny tryb dzialania;
                -- hard && -- mixed -> wykonywane jest wzgledem wskaznika HEAD i nie cofaliśmy sie w czasie historii commitow;

    git reset --soft == cofa w czasie historii commitow.

        ***
        * git reset --flag <HEAD == commit>
        ***

)";
	}
}