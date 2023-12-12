#include <iostream>

namespace function3at
{

    void branch_create()
    {
        std::cout <<
            R"(
******************** /
*   II. [git branch] create && check
*	git branch <name_of_branch>          == tworzy branch
*
                
$ git show-branch                      == lista galezi;
$ git branch -a                        == printuje wszystkie galezie(lokalne i zdalne);
$ git branch -r                        == printuje galezie zdalne;
$ git branch --merged                  == printuje zmergowane galezie;
$ git branch --no-merged               == printuje niezmergowane;
$ git branch -m <new_name>             == zmiana nazwy aktualnego branch'u;
$ git branch -m <old_name> <new_name>  == zmiana nazwy z dowolnego miejsca;
    ---
    | git branch <name_of_branch>
    ---

        Wiecej informacji jak zmienic aktualny branch znajdziesz: "git checkout";

    I. Tworzenie galezi w oparciu o 'remote'
        $ git checkout -b <remotebranch> origin/<remotebranch>;

    II. Wyewidencjonowanie nowej galezi lokalnej i zresetowanie jej do ostatniego commita galezi zdalnej:
        $ git checkout -b <branch_name>;
        $ git reset --hard origin/<branch_name>;
)";
    }
}