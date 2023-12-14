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
        if (choice == "info")
            { operacja_polecenia = command::info; }
        else if (choice == "init")
            { operacja_polecenia = command::info; }
        else if (choice == "clone")
        { operacja_polecenia = command::clone; }
        else if (choice == "config")
            { operacja_polecenia = command::config; }
        else if (choice == "alias")
            { operacja_polecenia = command::alias; }
        else if (choice == "status")
            { operacja_polecenia = command::status; }
        else if (choice == "add")
            { operacja_polecenia = command::add; }
        else if (choice == "commit")
            { operacja_polecenia = command::commit; }
        else if (choice == "diff")
            { operacja_polecenia = command::diff; }
        else if (choice == "stash")
            { operacja_polecenia = command::stash; }
        else if (choice == "ignore")
            { operacja_polecenia = command::ignore; }
        else if (choice == "clean")
            { operacja_polecenia = command::clean; }
        else if (choice == "revert")
            { operacja_polecenia = command::revert; }
        else if (choice == "reset")
            { operacja_polecenia = command::reset; }
        else if (choice == "rebase")
            { operacja_polecenia = command::rebase; }
        else if (choice == "remote")
            { operacja_polecenia = command::remote; }
        else if (choice == "fetch")
            { operacja_polecenia = command::fetch; }
        else if (choice == "push")
            { operacja_polecenia = command::push; }
        else if (choice == "pull")
            { operacja_polecenia = command::pull; }
        else if (choice == "branch")
            { operacja_polecenia = command::branch; }
        else if (choice == "checkout")
            { operacja_polecenia = command::checkout; }
        else if (choice == "merge")
            { operacja_polecenia = command::merge; }
        else if (choice == "blame")
            { operacja_polecenia == command::blame; }
        else
            { std::cout << "somthing was wrong \n"; }

    
    }
    void wybor_operacji(command operacja_polecenie)
    {
        system("clear");
        switch (operacja_polecenie)
        {
            case command::info:
                { info(); }
                break;
            case command::init:
                { init(); }
            break;
            case command::clone:
            { clone(); }
            break;
            case command::config:
            { config(); }
            break;
            case command::alias:
            { alias(); }
            break;
            case command::status:
            //{ status(); }
            break;
            case command::add:
            { add(); }
            break;
            case command::commit:
            //{ commit(); }
            break;
            case command::diff:
            //{ diff(); }
            break;
            case command::stash:
            { stash(); }
            break;
            case command::ignore:
            { ignore(); }
            break;
            case command::clean:
            //{ clean(); }
            break;
            case command::revert:
            //{ revert(); }
            break;
            case command::reset:
            { reset(); }
            break;
            case command::rm:
            //{ rm(); }
            break;
            case command::rebase:
            //{ rebase(); }
            break;
            case command::reflog:
            //{ reflog(); }
            break;
            case command::remote:
            //{ remote(); }
            break;
            case command::fetch:
            { fetch(); }
            break;
            case command::push:
            { push(); }
            break;
            case command::pull:
            { pull(); }
            break;
            case command::branch:
            { checkout(); }
            break;
            case command::merge:
            { merge(); }
            case command::blame:
            //{ blame(); }
            break;
        }
    }
}

















