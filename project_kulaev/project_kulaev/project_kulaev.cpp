#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "rus");
    int i, counter;
    float name;
    float* arr;
    counter = 0;
    i = 0;
    fstream fileToRead;
    fileToRead.open("input.txt");
    float x;
    while (fileToRead >> x) {
        i++;
    }
    fileToRead.close();
    arr = new float[i];
    cout << "Всего в массиве " << i << " элементов." << endl;
    int N = 0;
    fileToRead.open("input.txt");
    while (fileToRead >> x) {
        arr[N] = x;
        N = N + 1;
    }
    cout << "Введите элемент, который нужно подсчитать в массиве: ";
    cin >> name;
    for (int n = 0; n < i; n++) {
        if (arr[n] == name) {
            counter++;
        }
    }
    cout << "В массиве " << counter << " заданных элементов!" << endl;
    fileToRead.close();
    system("pause");
    return 0;
}


