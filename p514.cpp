#include <iostream>
#include <fstream>

using namespace std;
int n, arr[100], b;
void sortArray();
void FiltreazaNrPrime();
void CitesteDatele();
void AfiseazaDatele();

//TODO: scrie enuntul problemei si care e sursa
//Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare 
//  valorile din vector care sunt prime cu ultimul element al vectorului.
int main()
{
    //TODO 2
    //CitesteDatele();
    //FiltreazaNrPrime();
    //sortArray();
    //AfiseazaDatele();

    cout << "ok, done!";

    return 0;
}

void  sortArray()
{

}

void CitesteDatele()
{
    ifstream fin("p514_1.in");
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> arr[i];
    }
    fin.close();
}

void AfiseazaDatele()
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void FiltreazaNrPrime()
{

}