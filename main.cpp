#include <iostream>
#include "Queue.h"
#include "Queue.h"

int main() {
    int temp = 0;
    int option = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej\n");
    while(1)
    {
        menu();
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                if (!isQueueFull()) {
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    wstaw(temp);
                }
                else {
                    printf("Operacja niedozwolona. Kolejka jest pelna!!!\n\n");
                }
                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = odczyt();
                    printf("Odczytana wartosc: %d\n", temp);
                }
                else {
                    printf("Operacja niedozwolona. Kolejka jest pusta!!!\n\n");
                }
                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = usun();
                    printf("Usunieta wartosc: %d\n", temp);
                }
                else {
                    printf("Operacja niedozwolona. Kolejka jest pusta!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Kolejka jest pusta.\n");
                }
                else {
                    printf("Kolejka nie jest pusta.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Kolejka jest pelna.\n");
                }
                else {
                    printf("Kolejka nie jest pelna.\n");
                }
                break;

            case 6:
                printf("Koniec programu.\n");
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
