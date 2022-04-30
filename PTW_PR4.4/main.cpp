#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "Functions.hpp"
using namespace std;

int main()
{
    char currentfile[100], newfile[100];
    int n, m;
    cout << "Set the sizing" << endl;
    do
    {
        cout << " n = "; cin >> n;
        if (n <= 0)
        {
            cout << "Can't be equal or less than 0!" << endl;
        }
    }
    while(n <= 0);
    do
    {
        cout << " m = "; cin >> m;
        if (m <= 0)
        {
            cout << "Can't be equal or less than 0!" << endl;
        }
    }
    while(m <= 0);
    cout << endl;
    int** array = new int* [n];
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[m];
    }
    
    cout << "Set current file's path: "; cin >> currentfile;
    cout << "Set new file's path: "; cin >> newfile;
    cout << endl;
    
    int key;
    do
    {
        cout << " [1] - Create array in current file" << endl;
        cout << " [2] - Create array in new file" << endl;
        cout << " [3] - Print array from current file" << endl;
        cout << " [4] - Print array from new file" << endl;
        cout << " [0] - Terminate the program" << endl;
        cout << "Choose option: "; cin >> key;
        cout << endl;
        
        switch (key) {
            case 1:
            {
                CreateCurrent(currentfile, n, m, array);
                break;
            }
            case 2:
            {
                CreateNew(newfile, n, m, array);
                break;
            }
            case 3:
            {
                Print(currentfile);
                break;
            }
            case 4:
            {
                Print(newfile);
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                cout << "Wrong option!" << endl;
                break;
            }
        }
    } while (key != 0);

}

// /Users/mac/Desktop/Student/PTW/4/PTW_PR4.4/PTW_PR4.4/t1.txt 
// /Users/mac/Desktop/Student/PTW/4/PTW_PR4.4/PTW_PR4.4/t2.txt
