#define Functions_h
#include <iostream>
#include <string>
using namespace std;

void CreateCurrent(char* filename, int n, int m, int**a);
void CreateNew(char* filename, int n, int m, int** a);
void MaxRow(int* maxrow, int n, int m, int** a);
void Print(char* filename);
