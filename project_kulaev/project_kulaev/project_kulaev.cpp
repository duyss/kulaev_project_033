﻿#include <iostream>
#include <fstream>
#include <clocale>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "rus");
    int i, counter;
    float name;
    counter = 0;
    i = 0;
    fstream fileToRead;
    string fpath;
    cout << "Введите путь к файлу: ";
    cin >> fpath;
    fileToRead.open(fpath);
    float x;
    while (fileToRead >> x) {
        i++;
    }
    fileToRead.close();
    cout << "Всего в массиве " << i << " элементов." << endl;
    vector<int> myVector(i);
    fileToRead.open(fpath);
    int N = 0;
    while (fileToRead >> x) {
        myVector[N] = x;
        N = N + 1;
    }
    cout << "Введите элемент, который нужно подсчитать в массиве: ";
    cin >> name;
    for (int n = 0; n < i; n++) {
        if (myVector[n] == name) {
            counter++;
        }
    }
    cout << "В массиве " << counter << " заданных элементов!" << endl;
    fileToRead.close();
    system("pause");
    return 0;
}


