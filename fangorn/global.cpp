#include <iostream>
#include <string>
#include "global.h"

namespace function3at
{
    enum class command : int
    {
        info = 1,
        init = 2,
        clone = 3,
        config = 4,
        alias = 5,
        status = 6,
        add = 7,
        commit = 8,
        diff = 9,
        stash = 10,
        ignore = 11,
        clean = 12,
        revert = 13,
        reset = 14,
        rm = 15,
        rebase = 16,
        reflog = 17,
        remote = 18,
        fetch = 19,
        push = 20,
        pull = 21,
        branch = 22, 
        checkout = 23, 
        merge = 24,
        blame

    };
    command polecenie{};

    void print_page()
    {
        std::cout << "do ktorego polecenia mam isc? :";
        std::string choice;
        getline(std::cin, choice);

        przypisujaca_do_zmiennej_polecenie(choice, polecenie);
        wybor_operacji(polecenie);
    }
    
    void przypisujaca_do_zmiennej_polecenie(std::string choice, command& operacja_polecenia)
    {
        if (choice == "git info")
            { operacja_polecenia = command::info; }
        else if (choice == "git init")
            { operacja_polecenia = command::info; }
        else if (choice == "git clone")
        { operacja_polecenia = command::clone; }
        else if (choice == "git config")
            { operacja_polecenia = command::config; }
        else if (choice == "git alias")
            { operacja_polecenia = command::alias; }
        else if (choice == "git status")
            { operacja_polecenia = command::status; }
        else if (choice == "git add")
            { operacja_polecenia = command::add; }
        else if (choice == "git commit")
            { operacja_polecenia = command::commit; }
        else if (choice == "git diff")
            { operacja_polecenia = command::diff; }
        else if (choice == "git stash")
            { operacja_polecenia = command::stash; }
        else if (choice == "git ignore")
            { operacja_polecenia = command::ignore; }
        else if (choice == "git clean")
            { operacja_polecenia = command::clean; }
        else if (choice == "git revert")
            { operacja_polecenia = command::revert; }
        else if (choice == "git reset")
            { operacja_polecenia = command::reset; }
        else if (choice == "git rebase")
            { operacja_polecenia = command::rebase; }
        else if (choice == "git remote")
            { operacja_polecenia = command::remote; }
        else if (choice == "git fetch")
            { operacja_polecenia = command::fetch; }
        else if (choice == "git push")
            { operacja_polecenia = command::push; }
        else if (choice == "git pull")
            { operacja_polecenia = command::pull; }
        else if (choice == "git branch")
            { operacja_polecenia = command::branch; }
        else if (choice == "git checkout")
            { operacja_polecenia = command::checkout; }
        else if (choice == "git merge")
            { operacja_polecenia = command::merge; }
        else if (choice == "git blame")
            { operacja_polecenia = command::blame; }
        else
            { std::cout << "somthing was wrong \n"; }

    
    }
    void wybor_operacji(command operacja_polecenie)
    {
        system("clear");
        switch (operacja_polecenie)
        {
            case command::info:
                { function3at::info(); }
                break;
            case command::init:
                { function3at::init(); }
                break;
            case command::clone:
                { function3at::clone(); }
                break;
            case command::config:
                { function3at::config(); }
                break;
            case command::alias:
                { function3at::alias(); }
                break;
            case command::status:
                { awiko::status(); }
                break;
            case command::add:
                { add(); }
                break;
            case command::commit:
                //{ awiko::commit(); }
                break;
            case command::diff:
                //{ awiko::diff(); }
                break;
            case command::stash:
                { function3at::stash(); }
                break;
            case command::ignore:
                { function3at::ignore(); }
                break;
            case command::clean:
                { awiko::clean(); }
                break;
            case command::revert:
                { awiko::revert(); }
                break;
            case command::reset:
                { function3at::reset(); }
                break;
            case command::rm:
                { awiko::rm(); }
                break;
            case command::rebase:
                { awiko::rebase(); }
                break;
            case command::reflog:
                { awiko::reflog(); }
                break;
            case command::remote:
                { awiko::remote(); }
                break;
            case command::fetch:
                { function3at::fetch(); }
                break;
            case command::push:
                { function3at::push(); }
                break;
            case command::pull:
                { function3at::pull(); }
                break;
            case command::branch:
                { function3at::branch_create(); }
                break;
            case command::merge:
                { function3at::merge(); }
                break;
            case command::blame:
                { awiko::blame(); }
                break;
            case command::checkout:
                { function3at::checkout(); }
                break;
        }
    }
}

















