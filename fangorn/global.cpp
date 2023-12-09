#include <iostream>
#include "branch_create.h"


namespace Awiko {

    void Menu() {
        std::cout << "=== Menu Git Bash ===" << std::endl;
        std::cout << "1. Inicjalizacja repozytorium" << std::endl;
        std::cout << "2. Dodanie plikow do indeksu" << std::endl;
        std::cout << "3. Zatwierdzenie zmian" << std::endl;
        std::cout << "4. Sprawdzenie stanu repozytorium" << std::endl;
        std::cout << "5. Przegladanie historii zmian" << std::endl;
        std::cout << "6. Przywracanie poprzednich wersji plikow" << std::endl;
        std::cout << "7. Tworzenie galezi" << std::endl;
        std::cout << "8. Przelaczanie sie miedzy galeziami" << std::endl;
        std::cout << "9. Scalanie galezi" << std::endl;
        std::cout << "10. Pobieranie zmian z repozytorium zdalnego" << std::endl;
        std::cout << "11. Wysylanie zmian do repozytorium zdalnego" << std::endl;
        std::cout << "12. Krok po kroku" << std::endl;
        std::cout << "13. Jezyk" << std::endl;
        std::cout << "14. Praktyka" << std::endl;
        std::cout << "15. Wyjscie z programu" << std::endl;


        int choice;

        std::cout << "Wybierz pozycje z menu: ";
        std::cin >> choice;

        //Zabezpieczenie programu przed wprowadzeniem liczby spoza zakresu oraz sprawdzenie czy wprowadzona dana jest liczba
        while (!(std::cin >> choice) || choice < 1 || choice > 15) {
            std::cout << "Wybierz poprawnie pozycje z menu(1-15): ";
            std::cin >> choice;
            std::cin.clear(); //wyczyszczenie flag bledow
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorowanie b³êdnych danych w buforze
            std::system("cls");
        }


        switch (choice) {
        case 1:
            //1. Inicjalizacja repozytorium

            break;


        case 2:
            //2. Dodanie plików do indeksu

            break;


        case 3:
            //3. Zatwierdzenie zmian

            break;


        case 4:
            //4. Sprawdzenie stanu repozytorium

            break;


        case 5:
            //5. Przegl¹danie historii zmian

            break;


        case 6:
            //6. Przywracanie poprzednich wersji plików

            break;


        case 7:
            //7. Tworzenie ga³êzi
            function3at::branch_create();

            break;


        case 8:
            //8. Prze³¹czanie siê miêdzy ga³êziami

            break;


        case 9:
            //9. Scalanie ga³êzi

            break;


        case 10:
            //10. Pobieranie zmian z repozytorium zdalnego

            break;


        case 11:
            //11. Wysy³anie zmian do repozytorium zdalnego

            break;


        case 12:
            //12. Krok po kroku

            break;


        case 13:
            //13. Jezyk

            break;


        case 14:
            //14. Praktyka
            //linki do polskiego spoju, codewars etc
            break;


        case 15:
            //15. Wyjœcie z programu

            break;
        }



        



    }


}