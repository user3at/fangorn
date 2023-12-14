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


	git status s�u�y do wy�wietlania informacji o bie��cym stanie repozytorium. Pozwala zobaczy�, jakie zmiany zosta�y wprowadzone, kt�re pliki s� w trakcie �ledzenia, a kt�re s� nie�ledzone. Pokazuje tak�e aktualn� ga���, na kt�rej si� znajdujesz, oraz czy s� dost�pne nowe zmiany w zdalnym repozytorium.

	1. Przyk�ad zastosowania

		Po u�yciu komendy git status

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
	

		W powy�szym przyk�adzie:

		Informacja "On branch main" wskazuje, �e obecnie znajdujesz si� na ga��zi "main".
		"Your branch is up to date with 'origin/main'"  - oznacza, �e lokalna ga��� jest zsynchronizowana z ga��zi� "main" w zdalnym repozytorium.
		"Changes not staged for commit" informuje, �e istniej� zmienione pliki, kt�re nie zosta�y dodane do indeksu (staging area).
		"Untracked files" wskazuje na nowe pliki, kt�re nie s� jeszcze �ledzone przez Git.


	2. Opcje

		-s, --short: Wy�wietla skr�cony, bardziej zwi�z�y format statusu.
		-b, --branch: Wy�wietla informacje o ga��zi w bardziej zwi�z�y spos�b.


)";
	}
}