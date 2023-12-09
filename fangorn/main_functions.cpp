#include <iostream>
#include <limits>

namespace function3at
{
	void hello()
	{
		std::cout <<
			R"(
********************
*	Witaj serdecznie w projekcie fangorn;
*	Poswiecony pacy nad git zarzadzaniem;
*	Stworzmy pierwsza galaz!;

	W trakcie tworzenia lokalnego repo, ktora docelowo wyslemy na zdalny serwer warto zastanowic sie na plikiem konfiguracyjnym '.gitignore';
	Nasza pierwsza stworzona galezia bedzie 'clone_b';
		---
		| $ git checkout -b clone_b;
		| $ git branch ignore_b && git checkout clone_b;
		---
		
 			Wiecej informacji na temat tworzenia galezi znajdziesz: "git branch"

)";
	}
}

