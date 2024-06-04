//
// Created by ulaja on 04.06.2024.
//
#ifndef QUEUE_H
#define QUEUE_H

const int SIZE = 5;

void menu(void);
bool isQueueFull();
bool isQueueEmpty();
void wstaw(int value);
int odczyt();
int usun();

#endif

