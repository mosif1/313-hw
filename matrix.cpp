#include <stdio.h>
#include <iostream>

using namespace std;
extern "C" {
    #include "matrix.c"
}

int main() {
    int A[2][2] = {{6, 4}, {8, 3}};
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int C[2][3] = {{2, 4, 6}, {1, 3, 5}};

    int scalarB[2][3];
    int transposeC[3][2];
    int product[2][2];
    int D[2][2];

    scalarMultiplication(2, 3, B, 3, scalarB);
    transpose(2, 3, C, transposeC);
    matrixMultiplcation(2, 3, scalarB, 3, 2, transposeC, product);
    matrixAdditon(2, 2, A, product, D);

    cout << "Solving for the matrix in hw8" << endl;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j)
            cout << D[i][j] << " " << endl;
        cout << endl;
    }

    return 0;
}





int main(){

}
