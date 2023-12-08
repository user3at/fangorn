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
	  # na współpracy z ls-files --stage
        Sprawdz wiecej informacji w "info"


    git reset HEAD -- <path/name_of_file> == sciaganie pliku z 'staging area' do 'working directory' 
    
        # flagi --soft, --mixed, --hard: okreslaja sposob modyfikacji drzew indeksu przechowalni i katalogu roboczego;

    git reset --hard == usunięcie wszystkich zmian w projekcie - z ostatniego commit'u;
                     == nieodwracalna kasacja;
                     == najczesciej stosowana;

    git reset --mixed == domyślny tryb działania;
                -- hard && -- mixed -> wykonywane jest względem wskaźnika HEAD i nie cofaliśmy się w czasie historii commitow;

    git reset --soft == cofa w czasie historii commitów.

        ***
        * git reset --flag <HEAD == commit>
        ***

)";
	}
}