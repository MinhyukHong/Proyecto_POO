#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cassert>
using namespace std;

const int SIZE = 8;

void minesweeper(string commands, string output);

void initMap(char map[][SIZE], string file);

void displayMap(ostream& fout, char map[][SIZE], bool touchedMap[][SIZE], bool isGameOver = false);

void initTouched(bool touchedMap[][SIZE]);

void touchMap(bool map[][SIZE], int i, int j);
