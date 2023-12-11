#include <iostream>
namespace function3at
{
	void clone()
	{
		std::cout << 
R"(
********************
*	[git clone] sluzy do pobrania repo zdalnego na lokalny serwer;
*
*
    1. Klonowanie:
        a. wzgledne:
            $ git clone <url_of_repo>
            // Umieszczenie repo w biezacym folderze.
                ---
                | git clone https://github.com/user3at/fangorn.git
                ---
        b. bezwzgledne:
            $ git clone <url> <directory>
            // Umieszczenie repo w filderze o podanej ściezce.
                ---
                | git clone https://github.com/user3at/fangorn.git d/git_project
                ---

    2. Klonowanie plytkie:
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