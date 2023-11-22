//Дан целочисленный массив A размера N. 
//Переписать в новый цело?численный массив B того же размера
// // вначале все элементы исходного мас?сива с четными номерами,
//а затем — с нечетными. ДИНАМИЧЕСКИЙ


#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    const int N = 10;
    int a[N], b[N];
    int  j = 0, k;
    cout << "Введите размер массива";
    cin >> k;//размер массива пользователя

    if (k == 0 || k > N) {
        cerr << "Ошибка, вы вышли из диапазона [1, " << N << "]";
        return 1;
    }


    for (int i = 0; i < k; i++) {
        cout << "a[" << i << "]";
        cin >> a[i];
    }


    for (int i = 0; i < k; i += 2) {//chet
        b[j] = a[i];
        j++;

    }
    for (int i = 0; i < k; i += 2) {//no-chet
        b[j] = a[i];
        j++;


    }
    for (int i = 0; i < k; i++) {
        cout << b[i] << endl;
    }

}