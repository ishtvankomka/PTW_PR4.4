#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Functions.cpp"
#include "Functions.hpp"

TEST_CASE( "Arguments initialized") {
    int** array = new int* [3];
    for (int i = 0; i < 3; i++)
    {
        array[i] = new int[3];
    }
    array[1][0] = 99;
    array[1][1] = 35;
    array[1][2] = 80;
    array[2][0] = 88;
    array[2][1] = 22;
    array[2][2] = 89;
    int* maxrow = new int[3];
    MaxRow(maxrow, 3, 3, array);
    REQUIRE( maxrow[1] == 99);
    REQUIRE( maxrow[2] == 89);
}
