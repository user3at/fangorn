#include <iostream>
namespace function3at
{
	void clone()
	{
		std::cout << 
R"(
	[git clone] służy do pobrania repo zdalnego na lokalny serwer;

    1. Klonowanie:
        a. względne:
            $ git clone <url_of_repo>
            // Umieszczenie repo w bieżącym folderze.
                ---
                | git clone https://github.com/user3at/fangorn.git
                ---
        b. bezwzględne:
            $ git clone <url> <directory>
            // Umieszczenie repo w filderze o podanej ścieżce.
                ---
                | git clone https://github.com/user3at/fangorn.git d/git_project
                ---

    2. Klonowanie płytkie:
                ---
                | git clone --depth=1 <url_of_repo>
                ---

    3. Klonowanie tagu
                ---
                | git clone --branch <tag> <url_of_repo>
                ---
)";
	}
}