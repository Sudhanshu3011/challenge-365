#include <stdio.h>

int main() {
    int Matrix[6][7] = {
        {0, 0, 0, 0, 45, 0, 0},
        {0, 4, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 34, 0},
        {0, 0, 2, 0, 5, 0, 0},
        {0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 6},
    };

    int count = 0;

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) {
            if(Matrix[i][j] != 0) {
                count++;
            }
        }
    }

    //  printf("%d\n", count);

    int sparse_matrix[count + 1][4];  

    sparse_matrix[0][0] = 0;
    sparse_matrix[0][1] = 6;  // Number of rows Matrix
    sparse_matrix[0][2] = 7;  // Number of columns Matrix
    sparse_matrix[0][3] = count;  // Corrected number of non-zero elements

    int k = 1;

    printf("The elements in the Matrix:\n");
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (Matrix[i][j] != 0) {
                sparse_matrix[k][0] = k;
                sparse_matrix[k][1] = i;
                sparse_matrix[k][2] = j;
                sparse_matrix[k][3] = Matrix[i][j];
                k++;
            }
        }
    }

    printf("Index\tRow\tColumn\tValue\n");

    for (int i = 0; i < count + 1; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", sparse_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
