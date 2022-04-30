#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include "Functions.hpp"
using namespace std;

void CreateCurrent(char* filename, int n, int m, int**array)
{
    ofstream f(filename);
    f << "n = " << n << "; m = " << m << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = 0 + rand() % 100;
            f << setw(4) << array[i][j];
        }
        f << endl;
    }
    f << endl;
}
    
void CreateNew(char* filename, int n, int m, int** array)
{
    int* maxrow = new int[n];
    MaxRow(maxrow, n, m, array);
    ofstream f(filename);
    f << "n = " << n << "; m = " << m << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            f << setw(4) << array[i][j];
        }
        if (i == 0)
        {
            f << endl;
        }
        else
        {
            f << setw(4) << maxrow[i] << endl;
        }
    }
}

void MaxRow(int* maxrow, int n, int m, int** array)
{
    int max = 0;
    maxrow[0] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
        maxrow[i] = max;
        max = 0;
    }
}

void Print(char* filename)
{
    ifstream fin(filename);
    string s;
    while (getline(fin, s))
    {
        cout << s << endl;
    }
}
