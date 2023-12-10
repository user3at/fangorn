#include <iostream>
namespace function3at
{
    void merge()

    {
        std::cout <<
            R"(
    ********************   
    * [$ git merge] ponowne połączenie podzielonej historii.
    * 
    
       $ git merge == pozwala zebrać niezależne linie prac utworzonych przez 'git branch' i zintegrować je w pojedynczą gałąź.
                   == polecenie powoduje scalenie z bieżącą gałęzią, która zostatnie zaktualizowana, docelowa gałąź zostanie nienaruszona.

        I. Działanie
            $ git merge powoduje połączenie wielu sekwencji commitów w pojedynczą ujednoliconą historię. Najczęściej wykorzystuje się do scalenia dwóch gałęzi. 
                == wykorzystuje dwa wskaźniki commitów, zazwyczań końcówki gałęzi i wyszukuje ich wspólny commit bazowy. Gdy go znajdzie, git utworzy nowy 'commit scalenia', który obejmuje połączone zmiany z poszczególnych dodanych do kolejki sekwencji commitów scalenia. 

                git merge branch
                git merge --no-ff branch 

                //
                $ git branch
                # *master
                # feature
                $ git merge feature

                git merge feature == spowoduje scalenie wskazanej gałęzi z bieżącą gałęzią. git określi algorytmem scalania automatycznie. Commity scalenia różnią się od innych commitów tym, że mają DWA COMMITY NADRZEDNE. Git spróbuje w automatyczny sposób scalić odrębne historię, podczas tworzenia commita scalenia. Jeśli napotka dany fragment, który został zmieniony w obu historiach, nie będzie w stanie połączyć ich automatycznie. Taki scenariusz oznacza konflikt kontroli wersji i kontynuowanie procesu będzie wymagać interwencji ze strony usr.



        II. Przygotowanie do scalenia
            1. Potwierdzenie gałęzi odbiorczej:
                $ git branch
                $ *master == operator '*' wskazuje na gałąź docelową;
                    W przeciwnym wypadku:
                    $ git checkout master
            
            2. Pobieranie najnowszych commitów zdalnych:
                Chcesz zobaczyć rozwiązanie, napisz "lecimy to sprawdzić";
            3. Scalanie
                $ git branch
                # *master
                $ git merge branch_for_merge

        III. Scalanie z przewijaniem:

            1. Scalanie z przewijaniem moze wystepowac:
            == gdy miedzy koncowkami <biezacej galezi>, a <galezia docelowa> istnieje sciezka liniowa;
            == Zamiast scalenia galezi, git integruje historie, przewijajac (przenoszac) koncowke <biezącej gałęzi> do końcówki <gałęzi docelowej>;
            == W ten sposób można skutecznie połączyć historię, ponieważ wszystki commity osiagalne z poziomu <gałęzi docelowej> są teraz dostępne za pośrednictwem <gałęzi bieżącej>;
        
            Przykład 1
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
            $ git branch -d cherry <- Git nie zwróci błędów ponieważ <branch> jest teraz dostępny w gałęzi <master>;

            Jest to przepływ pracy stosowany powszechnie w odniesieniu do krótkich gałęzi tematycznych, które są wykorzystywane raczej do prowadzenia odizolowanych prac programistycznych niż jako narzędzie organizacyjne dla dłużej rozwijanych funkcji;
            ?? Tutaj nie pojawią się konflikty scalenia; ??

                ---
                | git merge <branch>
                ---

            2. Scalanie fast-forward:
            
            == ułatwia operację ZMIANY BAZY;
            == działa tak w przypadku niewielkich funkcji, lub poprawek błędów, zachowując scalenia trójstronne na potrzeby integracji funkcji, nad którymi prace trwają dłużej. 


            3. Scalanie z commitem scalenia:
                    ---
                    | git merge --no-ff <branch> -m "content of commit";
                    ---

                == To polecenie powoduje scalenie konkretnej gałęzi z gałęzią bieżącą, ale zawsze generuje commit scalenia (nawet w przypadku SCALANIA Z PRZEWIJANIEM);
                == To dobry sposób dokumentowania wszystkich scaleń w repo;

            == Scalanie z przewijaniem nie będzie możliwę, jeśli gałęzie zostały rozdzielone;
            == dlatego wykorzystywana jest metoda:

                ---
                | git merge --no-ff <branch>
                ---

        IV. Scalanie trójstronne:
            == Jesli nie ma ścieżki liniowej wiodącej do <gałęzi docelowej>:
                == Git połączy gałęzie w wyniku SCALANIA TRÓJSTRONNEGO;
                == Łączy się ze sobą dwie historię za pomocą <specjalnego commita>.
                == Git generuje commit scalenia i łączy ze sobą:
                    * dwóch końcówek gałęzi
                    * ich wspólnego elementu nadrzędnego. 
                
                Proces zachodzi gdy gałąź <master> i inne gałęzie są w toku. Jest to typowy scenariusz dla dużych projektów, lub gdy kilku programistów pracuje jednocześnie nad projektem;
                ?? Tutaj pojawią się konflikty scalenia; ??

            Przykład 2
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
            
        
            Należy zwrócić uwagę, że Git nie jest w stanie wykonać scalenia z przwijaniem, ponieaż nie da się przenieść gałęzi master w górę do gałęzi speed_cars bez cofania (BACKTRACKING);

            W przypadku większości przepływów pracy gałąź speed_cars byłaby znacznie większa, i dlatego w między czasie w gałęzi master pojawiłyby się commity. Gdyby gałąź funkcji byłaby tak mała jak 'przyklad 2':
                * lepszym rozwiązaniem byłoby połączenie jej z gałęzią main za pomocą operacji <git rebase == ZMIANA BAZY>, a następnie wykonanie scalania z przewijaniem. Pozwoliłoby to uniknąc zaśmiecania historii porojektu niepotrzebnmi commitami scalenia.

        V. Rozwiązywanie konfliktów 
            Jeśli git napotka konflikt w trakcie scalania, przejdzie do edycja zawartości problematycznych plików, stosując wskaźniki wizualne:
            <<<<<<<
                // zawartość nad tym wskaźnikiem pochodzi z <gałęzi odbiorcze>
            ======= 
                // zawartośc pod tym wskaźnikiem pochodzi z <gałęzi docelowej>
            >>>>>>>
            Oznacza w taki sposób sprzeczności w plikach 'bieżącej gałęzi' i 'gałęzi docelowej';

            Przykład 3
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
            # usuń wskaźniki wizualne, ustaw która linija ma być na górze, dopisz 'anvil' po 'against';
            $ git add .;
            $ git commit -m "works done";

            Przeczytaj więcej informacji na temat "git rebase";

        VI. Podsumowanie
            1. Scanie w Git polega na łączeniu sekwencji commitów w pojedyncza, ujednoliconą historię commitów.
            2. W Git isnieją dwa główne spsoby scalania:
                * fast-forward
                * trójstronne
            3. Git scala commity automatycznie, chyba że w obydu sekwencjach commitów występują sprzeczne zmiany.
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