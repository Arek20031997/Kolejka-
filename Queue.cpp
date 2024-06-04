//
// Created by ulaja on 04.06.2024.
//
#include <stdio.h>
#include "Queue.h"
#include "Queue.h"

int array[SIZE];
int r_i = 0;
int w_i = 0;

void menu(void)
{
    printf("\n");
    printf("1 - umieszczenie nowej zmiennej w kolejce (wstaw)\n");
    printf("2 - odczytanie wartosci z poczatku kolejki(odczyt)\n");
    printf("3 - usuniencie wartosci z poczatku kolejki  (usun)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

bool isQueueFull() {
    return ((w_i + 1) % SIZE) == r_i;
}

bool isQueueEmpty() {
    return w_i == r_i;
}

void wstaw(int value) {
    if(!isQueueFull()) {
        array[w_i] = value;
        w_i = (w_i + 1) % SIZE;
    }
}

int odczyt() {
    if(!isQueueEmpty()) {
        int value = array[r_i];
        return value;
    }
    return -1; // or handle error
}

int usun() {
    if(!isQueueEmpty()) {
        int value = array[r_i];
        r_i = (r_i + 1) % SIZE;
        return value;
    }
    return -1; // or handle error
}
