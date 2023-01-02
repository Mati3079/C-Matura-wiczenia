#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;
int a, b, c, d;
unsigned int e, f, g;
int liczba;
int Nr_zdania;
char Wybor;
float mil;
string wyraz;
float Dane[];
int wybor_uzytkownika;
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

float bok1, bok2, wysokosc;
float pole_trojkata(float a, float h)
{
    return bok1 * wysokosc / 2;
}

float promien_kola;
float pole_kola(float pole1)
{
    return 3, 14 * pow(promien_kola, 1);
}

int losuj()
{
    int m, n, a;
    cout << "Witaj w losowaniu!" << endl;
    cout << "Podaj zakres liczb" << endl;
    cout << "od" << endl;
    cin >> m;
    cout << "do" << endl;
    cin >> n;
    cout << "Ile razy?" << endl;
    cin >> a;
    Sleep(2000);
    cout << "     " << endl;
    srand(time(NULL));
    for (int i = 1; i <= a; i++)
    {
        liczba = rand() % n + m;
        Sleep(1000);
        cout << liczba << endl;
    }
    return 0;
}

int wizytówka()
{
    string imie, nazwisko;
    int nr_tel;
    cout << "Witaj w kreatorze wizytowek teraz poprosze cie o podanie twoich dannych do wizytowki" << endl;
    cout << "Podaj Swoje Imie: " << endl;
    cin >> imie;
    cout << "Podaj Swoje Nazwisko: " << endl;
    cin >> nazwisko;
    cout << "Podaj Swoje Dane kontaktowe" << endl;
    cin >> nr_tel;
    fstream wizytowka;
    wizytowka.open("wizytowka.txt", ios::out | ios::app);
    wizytowka << imie << endl;
    wizytowka << nazwisko << endl;
    wizytowka << nr_tel << endl;
    wizytowka.close();
    return 0;
}
float liczby[4];
int maxliczba()
{
   
   cout << "Podaj 3 liczb po spacji:" << endl;
   cin >> liczby[0] >> liczby[1]>>liczby[2]>>liczby[3];
   if ((liczby[0] > liczby[1]) && (liczby[0] > liczby[2]) && (liczby[0] > liczby[3]))
   {
       cout << "Najwieksza liczba z podanych to" << liczby[0] << endl;
   }
   else if ((liczby[1] > liczby[0]) && (liczby[1] > liczby[2]) && (liczby[1] > liczby[3]))
   {
       cout << "Najwieksza liczba z podanych to" << liczby[1] << endl;
   }
   else if ((liczby[2] > liczby[0]) && (liczby[2] > liczby[1]) && (liczby[2] > liczby[3]))
       cout << "Najwieksza liczba z podanych to" << liczby[2] << endl;
   else if ((liczby[3] > liczby[0]) && (liczby[3] > liczby[1]) && (liczby[3] > liczby[2]))
       cout << "Najwieksza liczba z podanych to" << liczby[3] << endl;
   return 0;
};

int sredniapredkosc()
{
    float pierwszykm, drugikm;
    cout << "Wpisz pierwsza predkosc :" << endl;
    cin >> pierwszykm;
    cout << "Wpisz druga predkosc :" << endl;
    cin >> drugikm;
    cout << (pierwszykm + drugikm) / 2 << endl;
    return 0;
}

void Sortowanie(float* Dane, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; i--)
        {
            if (Dane[j] < Dane[j - 1])
            {
                float bufor; bufor = Dane[j - 1];
                Dane[j - 1] = Dane[j];
                Dane[j] = bufor;
            }
        }
    }
};

int srednia() {
    cout << "Witaj dzisaj pomoge ci obliczyc Srednia artytmetyczna 3 dowolnych liczb" << endl;
    cout << "Teraz prosze cie o podanie 3 dowolnych liczb " << endl;
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >> a;
    cout << "Podaj druga liczbe:" << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe:" << endl;
    cin >> c;
    d = (a + b + c) / 3;
    cout << "Srednia tych liczb to:" << d;
    return 0;
}
int trojkat()
{

    cout << "Podaj 3 długosci bokow a powiem ci czy da sie stworzyc z nich trojkata " << endl;
    cout << "Wpisz 1 dlugosc" << endl;
    cin >> e;
    cout << "wpisz 2 dlugosc" << endl;
    cin >> f;
    cout << "Wpisz 3 dlugosc" << endl;
    cin >> g;
    if (e + f > g && e + g > f && f + g > e)
        cout << "Mozna stworzyc trojkat" << endl;
    else
        cout << "Nie mozna stworzyc trojkata" << endl;
    return 0;
}
int delta() 
{
    cout << "Wzor na delte to delta = b^2-4ac " << endl;
    cout << "Pozwol ze oblicze ja za ciebie i podam ci ile twoja funkcja ma rozwiazan" << endl;
    cout << "Wpisz B:" << endl;
    cin >> b;
    cout << "Wpisz A:";
    cin >> a;
    cout << "Wpisz C:" << endl;
    cin >> c;
    d = b * b - (4 * a * c);
    cout << "Twoja delta to" << d;

    if (d == 0)
    {
        cout << "Twoja funckja ma jedno rozwiazanie" << endl;
    }
    else if (d < 0)
    {
        cout << "Twoja funkcja nie ma rozwiazan" << endl;
    }
    else if (d > 0)
    {
        cout << "Twoja funkcja ma nieskoncienie wiele rozwiozan" << endl;
    }
    return 0;
}
int prostokat()
{
    cout << "Wiaj ten program narusuje dany prostokat" << endl;
    int i, j, m, n;
    cout << "Podaj wymiary prostokata: " << endl;
    cout << "Podaj 1 bok" << endl;
    cin >> m;
    cout << "Podaj 2 bok" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
            cout << 'x';
        cout << endl;
    }
    return 0;
}
int pole_trojkat()
{
    cout << "Witaj Ten program pozwala na szybkie obliczenie pola trojkata" << endl;
    cout << "Prosze cie teraz o podanie a " << endl;
    cin >> bok1;
    cout << "Podaj teraz wysokosc tego trojkata" << endl;
    cin >> wysokosc;
    cout << "Pole tego trojkata to:" << pole_trojkata(bok1, wysokosc) << endl;
    return 0;
}
int pole_kola()
{
    cout << "Witaj Ten program pomoze ci szybko obliczyc pole kola" << endl;
    cout << "Jedyne o co cie poprosze to promien tego kola" << endl;
    cin >> promien_kola;
    cout << "Pole tego kola to:" << pole_kola(promien_kola) << endl;
    return 0;
}
string odwracanie()
{
    cin >> wyraz;
    int dlugosc = wyraz.length();

    for (int i = dlugosc - 1; i >= 0; i--)
    {
        cout << wyraz[i];
    }
    return 0;
}
int NWD(int a, int b)
{
    int pom;

    while (b != 0)
    {
        pom = b;
        b = a % b;
        a = pom;
    }

    return a;
}
int AlgorytmEuklidesa()
{
    int a, b;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;

    return 0;
}

int main()
{
   
    cout << endl;
    cout << "Spis Tresci" << endl;
    cout << "-----------------" << endl;
    cout << "1. Srednia arytmetyczna" << endl;
    cout << "-----------------" << endl;
    cout << "2. Tworzenie Trojkata" << endl;
    cout << "-----------------" << endl;
    cout << "3. Kalkulator delty" << endl;
    cout << "-----------------" << endl;
    cout << "4. Rysowanie Prostokata" << endl;
    cout << "-----------------" << endl;
    cout << "5. Pole Trojkat" << endl;
    cout << "-----------------" << endl;
    cout << "6.Pole Kola" << endl;
    cout << "-----------------" << endl;
    cout << "7. Odwrocenie wyrazu" << endl;
    cout << "-----------------" << endl;
    cout << "8. Liczby pseudolosowe" << endl;
    cout << "-----------------" << endl;
    cout << "9.Wizytowka" << endl;
    cout << "-----------------" << endl;
    cout << "10.Maksymalna liczba" << endl;
    cout << "-----------------" << endl;
    cout << "11.Srednia predkosc" << endl;
    cout << "-----------------" << endl;
    cout << "12.Sortowanie Dannych" << endl;
    cout << "-----------------" << endl;
    cout << "13.Wskazniki" << endl;
    cout << "-----------------" << endl;
    cout << "14.Algorytm Euklidesa" << endl;
    cout << "-----------------" << endl;
    system("Pause");
    system("cls");
    srednia();
    system("Pause");
    system("cls");
    trojkat();
    system("Pause");
    system("cls");
    delta();
    system("Pause");
    system("cls");
    prostokat();
    system("Pause");
    system("cls");
    pole_trojkat();
    system("Pause");
    system("cls");
    pole_kola();
    system("Pause");
    system("cls");
    //odwracanie();
   // system("Pause");
   // system("cls");
    struct Samochod
    {
        string marka;
        string model;
        int rok_produkcji;
        double pojemnosc;
    };

    Samochod auto1;
    auto1.marka = "Ford";
    auto1.model = "Focus";
    auto1.rok_produkcji = 2002;
    auto1.pojemnosc = 1, 8;

    Samochod auto2;
    auto2.marka = "Opel";
    auto2.model = "Calibra";
    auto2.rok_produkcji = 2005;
    auto2.pojemnosc = 3;

    cout << "Marka to:" << auto1.marka << endl;
    cout << "Model to:" << auto1.model << endl;
    cout << "Rok produkcji to:" << auto1.rok_produkcji << endl;
    cout << "Pojemnosc to:" << auto1.pojemnosc << endl;
    system("pause");
    system("cls");
    cout << "Marka to:" << auto2.marka << endl;
    cout << "Model to:" << auto2.model << endl;
    cout << "Rok produkcji to:" << auto2.rok_produkcji << endl;
    cout << "Pojemnosc to:" << auto2.pojemnosc << endl;
    system("pause");
    system("cls");

    losuj();
    system("pause");
    system("cls");
    wizytówka();
    system("pause");
    system("cls");
    system("pause");
    system("cls");
    sredniapredkosc();
    system("pause");
    system("cls");
    AlgorytmEuklidesa();
    system("pause");
    system("cls");
   
    return 0;
}