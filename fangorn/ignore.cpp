#include <iostream>
namespace function3at
{
    void ignore()
    {

        std::cout <<
            R"(
            ********************
            * [.gitignore] plik w ktorym okresla sie jeden z 3 statusow dla plikow w 'working directory'
            *
            *
            >> sledzony  == plik, ktory zostal juz dodany do przechwalini, lub zatwierdzony;
            >> niesledzony == plik, ktory nie zostal dodany do przechowalni, ani zatwierdzony;
            >> ignorowany == plik, ktory zgodnie z wyraznym poleceniem Git ma ignorowac;

            I. Wzorce ignorowania Git
            Pilik ".gitignore" wykorzystuje wzorce z obluga symboli wieloznacznych do porownywania z nazwami plikow. Mozna tworzyc wlasne wzorce, uzywajac roznych symboli:

            >> wzorzez <<        >> przykladowe dopasowania << 
            **/logs             | logs/debug.log               |
                                | logs/monday/foo.bar          |
                        
            *.log               | debug.log                    |                   
                                  ale nie                      |
                                  logs/debug.log               |


            II. Osobiste reguly ignorowania Git
            .git/info/exclude == definuje osobiste wzorce ignorowania;
                                == nie sa one wersjonowa ani dystrybuowane z repo;
                                    == idealne miejsce dla wzorcow, ktore beda przydatne wylacznie w lokalnym repo;
                                        == przygladowo kozystajac z narzedzia programistycznego, ktore generuje pliki w 'working directory', np. .vs;

            III. Ignorowanie wczesniej zatwierdzonego pliku

                1. $ echo "excluded_file" >> .gitignore;
                2. $ git rm --cached excluded_file == polecenie z ta flaga usunie plik z repozytorium, ale pozostawi go w katalogu roboczym jako plik ignorowany;
                                                    == pominiecie tego kroku pozwoli trwale usunac plik z lokalnego repo;
                3. $ rm excluded_file;
                4. $ git commit;

            IV. Wymuszenie zatwierdzonego pliku
                
                1. $ git add -f exluded_file;
                2. $ git commit;

            V. Definiowanie wyjatku od globalnej reguly
                $ echo "$!important.vs/nazwa_projektu/file.log
                    ---
                    | # !important.vs/nazwa_projektu/*/*.vsidx == umozliwia sledzenie tego pliku (odpowiedzialny za katalogi w projecie)
                    ---
            
            VII. Ustalanie wzorca odpowiedzialnego za wskazany plik:
                1. $ git check-ignore -v <file> 
                    $ git check-ignore --verbose == wskazuje ktory wzorzec powoduje ignorowanie okreslonego pliku; 

                    ---
                    | $ git check-ingore -v file.log;
                    --- 
                        WYNIK:
                        $ .gitignore:3:*.log == 3 oznacza wiersz w pliku .gitignore;
                    

            )";
    }
}