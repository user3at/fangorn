#include <iostream>

namespace Awiko
{
	void status()
	{
		std::cout <<
			R"(
    ********************
    *     
    *
    *


	git status s³u¿y do wyœwietlania informacji o bie¿¹cym stanie repozytorium. Pozwala zobaczyæ, jakie zmiany zosta³y wprowadzone, które pliki s¹ w trakcie œledzenia, a które s¹ nieœledzone. Pokazuje tak¿e aktualn¹ ga³¹Ÿ, na której siê znajdujesz, oraz czy s¹ dostêpne nowe zmiany w zdalnym repozytorium.

	1. Przyk³ad zastosowania

		Po u¿yciu komendy git status

		****

		On branch main
		Your branch is up to date with 'origin/main'.

		Changes not staged for commit:
 		   (use "git add <file>..." to update what will be committed)
  		   (use "git checkout -- <file>..." to discard changes in working directory)

       			modified:   plik.txt

		Untracked files:
  		   (use "git add <file>..." to include in what will be committed)

        			nowy_plik.txt

		no changes added to commit (use "git add" and/or "git commit -a")

		****
	

		W powy¿szym przyk³adzie:

		Informacja "On branch main" wskazuje, ¿e obecnie znajdujesz siê na ga³êzi "main".
		"Your branch is up to date with 'origin/main'"  - oznacza, ¿e lokalna ga³¹Ÿ jest zsynchronizowana z ga³êzi¹ "main" w zdalnym repozytorium.
		"Changes not staged for commit" informuje, ¿e istniej¹ zmienione pliki, które nie zosta³y dodane do indeksu (staging area).
		"Untracked files" wskazuje na nowe pliki, które nie s¹ jeszcze œledzone przez Git.


	2. Opcje

		-s, --short: Wyœwietla skrócony, bardziej zwiêz³y format statusu.
		-b, --branch: Wyœwietla informacje o ga³êzi w bardziej zwiêz³y sposób.


)";
	}
}