#include <iostream>
#include <vector>
using namespace std;

void placeParticle(vector<vector<int> > &matrix, int row, int col);
void placeRandomParticle(vector<vector<int> > &matrix, int row, int col, int radius);
void printMatrix(vector<vector<int> > matrix);

int main(int argc, char **argv) {
    int radius = 0;
    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int originRow = rows / 2;
    int originCol = cols / 2;

    vector<int> singleRow(cols, 0);
    vector<vector<int> > simulationGrid(rows, singleRow);

    placeParticle(simulationGrid, originRow, originCol);
    printMatrix(simulationGrid);

}

void placeParticle(vector<vector<int> > &matrix, int row, int col) {
    matrix[row][col] = 1;
}

void printMatrix(vector<vector<int> > matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
}