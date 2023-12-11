#include <iostream>
namespace function3at
{
    void merge()

    {
        std::cout <<
            R"(
    ********************   
    * [$ git merge] ponowne polaczenie podzielonej historii.
    * 
    
       $ git merge == pozwala zebrac niezalezne linie prac utworzonych przez 'git branch' i zintegrowac je w pojedyncza galaz.
                   == polecenie powoduje scalenie z biezaca galezia, ktora zostatnie zaktualizowana, docelowa galaz zostanie nienaruszona.

        I. Dzialanie
            $ git merge powoduje polaczenie wielu sekwencji commitow w pojedyncza ujednolicona historie. Najcześciej wykorzystuje sie do scalenia dwoch galezi. 
                == wykorzystuje dwa wskazniki commitow, zazwyczan  kon cowki galezi i wyszukuje ich wspolny commit bazowy. Gdy go znajdzie, git utworzy nowy 'commit scalenia', ktory obejmuje polaczone zmiany z poszczegolnych dodanych do kolejki sekwencji commitow scalenia. 

                git merge branch
                git merge --no-ff branch 

                //
                $ git branch
                # *master
                # feature
                $ git merge feature

                git merge feature == spowoduje scalenie wskazanej galezi z biezaca galezia. git określi algorytmem scalania automatycznie. Commity scalenia roznia sie od innych commitow tym, ze maja DWA COMMITY NADRZEDNE. Git sprobuje w automatyczny sposob scalic odrebne historie, podczas tworzenia commita scalenia. Jeśli napotka dany fragment, ktory zostal zmieniony w obu historiach, nie bedzie w stanie polaczyc ich automatycznie. Taki scenariusz oznacza konflikt kontroli wersji i kontynuowanie procesu bedzie wymagac interwencji ze strony usr.



        II. Przygotowanie do scalenia
            1. Potwierdzenie galezi odbiorczej:
                $ git branch
                $ *master == operator '*' wskazuje na galaz docelowa;
                    W przeciwnym wypadku:
                    $ git checkout master
            
            2. Pobieranie najnowszych commitow zdalnych:
                Chcesz zobaczyc rozwiazanie, napisz "lecimy to sprawdzic";
            3. Scalanie
                $ git branch
                # *master
                $ git merge branch_for_merge

        III. Scalanie z przewijaniem:

            1. Scalanie z przewijaniem moze wystepowac:
            == gdy miedzy koncowkami <biezacej galezi>, a <galezia docelowa> istnieje sciezka liniowa;
            == Zamiast scalenia galezi, git integruje historie, przewijajac (przenoszac) koncowke <biezacej galezi> do kon cowki <galezi docelowej>;
            == W ten sposob mozna skutecznie polaczyc historie, poniewaz wszystki commity osiagalne z poziomu <galezi docelowej> sa teraz dostepne za pośrednictwem <galezi biezacej>;
        
            Przyklad 1
            $ mkdir loriens;
            $ cd liriens;
            $ touch tree;
            $ git init;
            $ git add tree;
            $ git commit -m "tree structured";

            $ git branch cherry;
            $ git checkout cherry;
            $ git log;
            $ > jam;
            $ git add .;
            $ git commit -m "jam was tasty";

            $ echo "buy next jam" >> jam
            $ git add .
            $ git commit -m "we have another jam";

            $ git checkout master;
            $ git merge cherry;
            $ git log;
            $ git branch -d cherry <- Git nie zwroci bledow poniewaz <branch> jest teraz dostepny w galezi <master>;

            Jest to przeplyw pracy stosowany powszechnie w odniesieniu do krotkich galezi tematycznych, ktore sa wykorzystywane raczej do prowadzenia odizolowanych prac programistycznych niz jako narzedzie organizacyjne dla dluzej rozwijanych funkcji;
            ?? Tutaj nie pojawia sie konflikty scalenia; ??

                ---
                | git merge <branch>
                ---

            2. Scalanie fast-forward:
            
            == ulatwia operacje ZMIANY BAZY;
            == dziala tak w przypadku niewielkich funkcji, lub poprawek bledow, zachowujac scalenia trojstronne na potrzeby integracji funkcji, nad ktorymi prace trwaja dluzej. 


            3. Scalanie z commitem scalenia:
                    ---
                    | git merge --no-ff <branch> -m "content of commit";
                    ---

                == To polecenie powoduje scalenie konkretnej galezi z galezia biezaca, ale zawsze generuje commit scalenia (nawet w przypadku SCALANIA Z PRZEWIJANIEM);
                == To dobry sposob dokumentowania wszystkich scalen  w repo;

            == Scalanie z przewijaniem nie bedzie mozliwe, jeśli galezie zostaly rozdzielone;
            == dlatego wykorzystywana jest metoda:

                ---
                | git merge --no-ff <branch>
                ---

        IV. Scalanie trojstronne:
            == Jesli nie ma ściezki liniowej wiodacej do <galezi docelowej>:
                == Git polaczy galezie w wyniku SCALANIA TRoJSTRONNEGO;
                == laczy sie ze soba dwie historie za pomoca <specjalnego commita>.
                == Git generuje commit scalenia i laczy ze soba:
                    * dwoch kon cowek galezi
                    * ich wspolnego elementu nadrzednego. 
                
                Proces zachodzi gdy galaz <master> i inne galezie sa w toku. Jest to typowy scenariusz dla duzych projektow, lub gdy kilku programistow pracuje jednocześnie nad projektem;
                ?? Tutaj pojawia sie konflikty scalenia; ??

            Przyklad 2
            $ mkdir workshop;
            $ cd workshop;
            $ > workshop;
            $ git init;
            $ git add workshop;
            $ git commit -m "workshop structured";

            $ git checkout -b speed_cars
            $ > black_car;
            $ git add .;
            $ git commit -m "start off black car";

            > green_car;
            $ git add .;
            $ git commit -m "start off green car";

            $ git checkout master;
            $ > meta
            $ git add .
            $ git commit -m "you are win";
            $ git merge speed_cars;
            $ git log;
            
        
            Nalezy zwrocic uwage, ze Git nie jest w stanie wykonac scalenia z przwijaniem, ponieaz nie da sie przenieśc galezi master w gore do galezi speed_cars bez cofania (BACKTRACKING);

            W przypadku wiekszości przeplywow pracy galaz speed_cars bylaby znacznie wieksza, i dlatego w miedzy czasie w galezi master pojawilyby sie commity. Gdyby galaz funkcji bylaby tak mala jak 'przyklad 2':
                * lepszym rozwiazaniem byloby polaczenie jej z galezia main za pomoca operacji <git rebase == ZMIANA BAZY>, a nastepnie wykonanie scalania z przewijaniem. Pozwoliloby to uniknac zaśmiecania historii porojektu niepotrzebnmi commitami scalenia.

        V. Rozwiazywanie konfliktow 
            Jeśli git napotka konflikt w trakcie scalania, przejdzie do edycja zawartości problematycznych plikow, stosujac wskazniki wizualne:
            <<<<<<<
                // zawartośc nad tym wskaznikiem pochodzi z <galezi odbiorcze>
            ======= 
                // zawartośc pod tym wskaznikiem pochodzi z <galezi docelowej>
            >>>>>>>
            Oznacza w taki sposob sprzeczności w plikach 'biezacej galezi' i 'galezi docelowej';

            Przyklad 3
            $ mkdir konflikty; cd konflikty;
            $ git init;
            $ > forge;
            $ git add forge;
            $ git commit -m "forge structured";
            
            $ git checkout -b smith;
            $ ls+
            $ echo "smith hits his hummer againts" > forge;
            $ git add .;
            $ git commit -m "hi is comming";

            $ git checkout master;
            $ git echo "what does smith do?";
            $ git add .;
            $ git commit -m "you have to decide which comes first";
            $ git merge smith;

            (master | MERGING)
            $ nano forge;
            # usun  wskazniki wizualne, ustaw ktora linija ma byc na gorze, dopisz 'anvil' po 'against';
            $ git add .;
            $ git commit -m "works done";

            Przeczytaj wiecej informacji na temat "git rebase";

        VI. Podsumowanie
            1. Scanie w Git polega na laczeniu sekwencji commitow w pojedyncza, ujednolicona historie commitow.
            2. W Git isnieja dwa glowne spsoby scalania:
                * fast-forward
                * trojstronne
            3. Git scala commity automatycznie, chyba ze w obydu sekwencjach commitow wystepuja sprzeczne zmiany.
    )";
        /*
        std::cout << "faktycznie wybierz, 1 == y or 0 == n \n";

        int x{};
        std::cin >> x;
        if (x == 1)
            aktualizacja_commitow();
        */
    }

}