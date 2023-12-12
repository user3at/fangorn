#include <iostream>
namespace function3at
{
    void info()
    {
        std::cout <<
            R"(
            ********************
            *   [git help]  == lista comend
            * 
            * 
                git help <command> == info o tej komendzie
                git --version == printuje wersje git'a;

                [git ls-files] = printowanie listy wszystkich plikow w 'staging area'
                git ls-files == zasadniczo jest narzedziem debugowania, przeznaczonym do sprawdzania stanu indexu przechowalni;
                                            == zwraca liste nazw i sciezek plikow nalezacych aktualnie do indexu;
                            git ls-files (-s / --stage) == printuje dodatkowe metadane plikow w indexie przechowalni;
                                                        == takimi metodami sa
                                                            * bity trybu zawartosci w przechowalni 
                                                            * nazwa obiektu
                                                            * numer w 'staging area'
                                                            100644 e69de29bb2d1d6434b8b29ae775ad8c2e48c5391 0 
                        
                                ***
                                * git ls-file -s
                                ***
                
                
            )";
    }
}