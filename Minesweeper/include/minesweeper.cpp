#include "minesweeper.h"

void minesweeper(string commands, string output) {
	ifstream fin;
	ofstream fout;
	char map[SIZE][SIZE];
	bool touchedMap[SIZE][SIZE];
	bool isGameOver = false;
	string name;
    string load_command;
    int touch = 0;

    fin.open(commands);
    fout.open(output);
	fin >> load_command >> name;

    initMap(map, name);
	initTouched(touchedMap);

	string command;
	int i, j;
	fout << "Command: " << load_command << " " << name << endl;

	int maxTry = 54;
	do {
		fin >> command;
		if (command == "touch" && touch < maxTry) {
			fin >> i >> j;
			touchMap(touchedMap, i, j);
			touch++;
			fout << "Command: " << command << " " << i << " " << j << endl;
			if (map[i - 1][j - 1] == '*') {
				isGameOver = true;
			}
		}
		else if (command == "display"){
			fout << "Command: " << command << endl;
			for (int row = 0; row < SIZE; row++){
				for (int col = 0; col < SIZE; col++){
					if (touchedMap[row][col] == false){
						fout << '.';
					}
					else {
						fout << touchedMap[row][col];
					}
				}
				fout << endl;
			}
			fout << endl;
			isGameOver = true;
		}
		if (fin.eof()){
			isGameOver = true;
		}
	} while (!isGameOver);


	displayMap(fout, map, touchedMap, isGameOver);
    fout << "Spaces touched: " << touch << endl;
	fin.close();
	fout.close();
}

void initMap(char map[][SIZE], string file) {
    ifstream map_file(file);

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            char item;
            map_file >> item;
            map[row][col] = item;
        }
    }
    map_file.close();
}


void displayMap(ostream& fout, char map[][SIZE], bool touchedMap[][SIZE], bool isGameOver) {
	if (isGameOver) {
		fout << "Game Over" << endl
			<< "~~~~~~~~~" << endl
			<< "Final Board" << endl;

		for (int row = 0; row < SIZE; row++) {
			for (int col = 0; col < SIZE; col++) {
				if (!touchedMap[row][col] && map[row][col] == '.') {
					fout << '.';
				}
				else if (!touchedMap[row][col] && map[row][col] == '*') {
					fout << "@";
				}
				else if (touchedMap[row][col] && map[row][col] == '*') {
					fout << '*';
				}
				else if (touchedMap[row][col] && map[row][col] == '.') {
					int count = 0;
					if (row > 0) {
						if (map[row - 1][col] == '*') count++;
						if (col > 0 && map[row - 1][col - 1] == '*') count++;
						if (col < SIZE - 1 && map[row - 1][col + 1] == '*') count++;
					}
					if (row < SIZE - 1) {
						if (map[row + 1][col] == '*') count++;
						if (col > 0 && map[row + 1][col - 1] == '*') count++;
						if (col < SIZE - 1 && map[row + 1][col + 1] == '*') count++;
					}
					if (col > 0 && map[row][col - 1] == '*') count++;
					if (col < SIZE - 1 && map[row][col + 1] == '*') count++;
					fout << count;
				}
			}
			fout << endl;
		}
		fout << endl;
	}
}


void initTouched(bool touchedMap[][SIZE]) {
	for (int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			touchedMap[row][col] = false;
		}
	}
}

void touchMap(bool map[][SIZE], int i, int j) {
	map[i - 1][j - 1] = true;
}

int main() {
	cout << "Testing minesweeper" << endl;
	minesweeper("test1commands.txt", "test1_output_mine.txt");
	minesweeper("test2commands.txt", "test2_output_mine.txt");
	minesweeper("test3commands.txt", "test3_output_mine.txt");
	minesweeper("test4commands.txt", "test4_output_mine.txt");
	minesweeper("test5commands.txt", "test5_output_mine.txt");
	minesweeper("test6commands.txt", "test6_output_mine.txt");
	minesweeper("test7commands.txt", "test7_output_mine.txt");
	minesweeper("test8commands.txt", "test8_output_mine.txt");
	minesweeper("test9commands.txt", "test9_output_mine.txt");
	minesweeper("test10commands.txt", "test10_output_mine.txt");

	return 0;
}
