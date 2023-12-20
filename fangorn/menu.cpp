#include <iostream>
#include <limits>



namespace awiko {
    //funkcja odpowiedzialna za wylistowanie menu
    void disp_menu() {

        std::system("cls");
        std::cout << "=== Menu Git Bash ===\n" << std::endl;
        std::cout << "1. Inicjalizacja i tworzenie repozytorium" << std::endl;
        std::cout << "2. Klonowanie repozytorium" << std::endl;
        std::cout << "3. Konfiguracja git" << std::endl;
        std::cout << "4. Aliasy Git" << std::endl;
        std::cout << "5. Stan Repozytorium" << std::endl;
        std::cout << "6. Dodawanie i zatwierdzanie zmian" << std::endl;
        std::cout << "7. Porownywanie zmian" << std::endl;
        std::cout << "8. Przechowywanie zmian" << std::endl;
        std::cout << "9. Ignorowanie plikow" << std::endl;
        std::cout << "10. Czyszczenie niesledzonych plikow" << std::endl;
        std::cout << "11. Cofanie zmian" << std::endl;
        std::cout << "12. Resetowanie historii" << std::endl;
        std::cout << "13. Przepisywanie historii" << std::endl;
        std::cout << "14. Zarzadzanie repozytorium zdalnym" << std::endl;
        std::cout << "15. Pobieranie zdalnych zmian" << std::endl;
        std::cout << "16. Wysylanie zmian na zdalne repozytorium" << std::endl;
        std::cout << "17. Pobieranie i scalanie zmian z zdalnego repozytorium" << std::endl;
        std::cout << "18. Zarzadzanie galeziami" << std::endl;
        std::cout << "19. Przechowywanie zmian" << std::endl;
        std::cout << "20. Praktyka" << std::endl;
        std::cout << "21. Wyjscie z programu" << std::endl;
    }
    // funkcja odpowiedzialna za powrot do menu
    void back_to() {
        std::cout << "\n\nNacisnij Enter, aby wrocic do menu...";
        std::cin.get();
        std::cin.ignore();
        std::system("cls");
    }

    // funkcja odpowiedzialna za sterowanie menu
    void menu_choice() {



        while (true)
        {
            disp_menu();
            int choice;
            std::cout << "Wybierz pozycje z menu:";

            //Zabezpieczenie programu przed wprowadzeniem liczby spoza zakresu oraz sprawdzenie czy wprowadzona dana jest liczba
            while (!(std::cin >> choice) || choice < 1 || choice > 21) {
                disp_menu();
                std::cout << "Wybierz poprawnie pozycje z menu(1-20): ";
                std::cin >> choice;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorowanie blednych danych w buforze

            }

            switch (choice) {

            case 1:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji inicjalizacja i tworzenie repozytorium!\n" << std::endl;
                //git init

                back_to();
            }
            break;

            case 2:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji klonowanie repozytorium!" << std::endl;
                //git clone

                back_to();
            }
            break;

            case 3:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji konfiguracja Git " << std::endl;
                //git config

                back_to();
            }
            break;

            case 4:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji Aliasy Git" << std::endl;
                //git alias

                back_to();
            }
            break;

            case 5:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji stan repozytorium " << std::endl;
                //git status

                back_to();
            }
            break;

            case 6:

                std::system("cls");
                std::cout << "Witaj w sekcji dodawanie i zatwierdzanie zmian" << std::endl;

                int subchoice_1;
                std::cout << "1. Dodaj pliki do indeksu\n";
                std::cout << "2. Zatwierdz zmiany\n";
                std::cout << "3. Powrot do menu\n";

                std::cout << "Wybierz opcje (1-3): ";

                while (!(std::cin >> subchoice_1) || subchoice_1 < 1 || subchoice_1 > 3) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Wybierz poprawna opcje (1-2): ";
                }

                switch (subchoice_1) {
                case 1:
                    std::system("cls");
                    std::cout << "Witaj w sekcji dodawania plikow do indeksu" << std::endl;
                    //git add

                    back_to();
                    break;

                case 2:
                    std::system("cls");
                    std::cout << "Witaj w sekcji zatwierdzania zmian" << std::endl;
                    //git commit

                    back_to();
                    break;

                case 3:
                    std::system("cls");
                    back_to();
                    break;

                }
                break;

            case 7:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji porownywanie zmian" << std::endl;
                //git diff

                back_to();
            }
            break;

            case 8:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji przechowywanie zmian " << std::endl;
                //git stash
                back_to();
            }
            break;

            case 9:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji ignorowanie plikow" << std::endl;
                //git ignore
                back_to();
            }
            break;

            case 10:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji czyszczenie niesledzonych plikow" << std::endl;
                //git clean
                back_to();
            }
            break;

            case 11:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji cofanie zmian" << std::endl;
                //git revert
                back_to();
            }
            break;

            case 12:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji resetowanie historii" << std::endl;
                //git reset
                back_to();
            }
            break;

            case 13:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji przepisywanie historii" << std::endl;
                //git rebase
                back_to();
            }
            break;

            case 14:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji zarzadzanie repozytorium zdalnym" << std::endl;
                //git remote
                back_to();
            }
            break;

            case 15:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji pobieranie zmian zdalnych" << std::endl;
                //git fetch
                back_to();
            }
            break;

            case 16:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji wysylanie zmian na zdalne repozytorium" << std::endl;
                //git push
                back_to();
            }
            break;

            case 17:
            {
                std::system("cls");
                std::cout << "Witaj w sekcji pobieranie i scalanie zmian z zdalnego repozytorium:" << std::endl;
                //git pull
                back_to();
            }
            break;

            case 18:
                std::system("cls");
                std::cout << "Witaj w sekcji zarzadzanie galeziami:" << std::endl;

                int subchoice_2;
                std::cout << "1. Utworz nowa galaz\n";
                std::cout << "2. Przejdz do innej galezi\n";
                std::cout << "3. Scal zmiany z innej galezi\n";
                std::cout << "4. Powrot do menu\n";

                std::cout << "Wybierz opcje (1-4): ";

                while (!(std::cin >> subchoice_2) || subchoice_2 < 1 || subchoice_2 > 4) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Wybierz poprawnie opcje (1-4): ";
                }

                switch (subchoice_2) {
                case 1:
                    std::system("cls");
                    std::cout << "Witaj w sekcji utworz nowa galaz" << std::endl;
                    //git branch
                    back_to();
                    break;

                case 2:
                    std::system("cls");
                    std::cout << "Witaj w sekcji przejdz do innej galezi" << std::endl;
                    //git checkout
                    back_to();
                    break;

                case 3:
                    std::system("cls");
                    std::cout << "Witaj w sekcji scal zmiany z innej galezi" << std::endl;
                    //git merge
                    back_to();
                    break;

                case 4:
                    std::system("cls");
                    back_to();
                    break;

                }
                break;

            case 19:
                std::system("cls");
                std::cout << "Witaj w sekcji analiza historii i autorstwa plikow" << std::endl;
                ///git blame
                back_to();

                break;

            case 20:
                std::system("cls");
                std::cout << "Witaj w sekcji praktyka" << std::endl;
                //linki  

                back_to();
                break;

            case 21://wyjscie z programu                                
                std::exit(0);
                break;

            default:
                std::cout << "Wystapil nieoczekiwany blad. Prosze sprobowac ponownie." << std::endl;
                break;

            }
        }
    }




}