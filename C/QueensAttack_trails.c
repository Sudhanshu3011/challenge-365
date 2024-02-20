#include <stdio.h>
#include <stdlib.h>
int queensAttack(int n, int k, int r_q, int c_q, int obstacles_rows, int obstacles_columns, int **obstacles)
{
    int up, down, left, right, leftup, rightup, leftdown, rightdown;

    // trasversing up and down
    up = n - r_q;
    down = r_q - 1;

    // trasversing left and right
    right = n - c_q;
    left = c_q - 1;

    // trasversing the left up daigonal
    if (left <= up)
    {
        leftup = left;
    }
    else
    {
        leftup = up;
    }

    // traversing the right up daigonal
    if (right <= up)
    {
        rightup = right;
    }
    else
    {
        rightup = up;
    }

    // traversing the right down daigonal
    if (right <= down)
    {
        rightdown = right;
    }
    else
    {
        rightdown = down;
    }

    // traversing the left down daigonal
    if (left <= down)
    {
        leftdown = left;
    }
    else
    {
        leftdown = down;
    }

    printf("up-%d ", up);
    printf("down-%d ", down);
    printf("left-%d ", left);
    printf("right-%d ", right);
    printf("leftup-%d ", leftup);
    printf("rightup%-d ", rightup);
    printf("rightdown-%d ", rightdown);
    printf("leftdown-%d ", leftdown);
    printf("\n");
    // now tackling with the obstacles

    for (int i = 0; i < k; i++)
    {
        int rowobs, colobs;

        rowobs = obstacles[i][0];
        colobs = obstacles[i][1];

        // left obstacle
        if (r_q == rowobs && c_q > colobs)
        {
            if (left > c_q - colobs - 1)
            {
                left = c_q - colobs - 1;
            }
        }
        // left obstacle

        // right obstacle
        else if (r_q == rowobs && c_q < colobs)
        {
            if (right > colobs - c_q - 1)
            {
                right = colobs - c_q - 1;
            }
        }

        // up obstacle
        else if (c_q == colobs && r_q < rowobs)
        {
            if (up > rowobs - r_q - 1)
            {
                up = rowobs - r_q - 1;
            }
        }

        // down obstacle
        else if (c_q == colobs && r_q > rowobs)
        {
            if (down > r_q - rowobs - 1)
            {
                down = r_q - rowobs - 1;
            }
        }

        // upleft obstacle
        else if ((rowobs > r_q) && (c_q > colobs))
        {
            if ((rowobs - r_q) == (c_q - colobs))
            {
                if (rowobs - r_q - 1 < leftup)
                {
                    leftup = rowobs - r_q - 1;
                }
            }
        }

        // upright obstacle
        else if ((rowobs > r_q) && (c_q < colobs))
        {

            if ((rowobs - r_q) == (colobs - c_q))
            {
                if (colobs - c_q - 1 < rightup)
                {
                    rightup = rowobs - r_q - 1;
                }
            }
        }
        // downright obstacle
        else if ((rowobs < r_q) && (c_q < colobs))
        {
            printf("##%d ", colobs - c_q - 1);
            if ((r_q - rowobs) == (colobs - c_q))
            {
                printf("##%d ", colobs - c_q - 1);
                if (colobs - c_q - 1 < rightdown)
                {
                    printf("##");
                    rightdown = colobs - c_q - 1;
                }
            }
        }

        // leftdown obstacle
        //  else ((r_q-rowobs)==(c_q-colobs))
        else if ((rowobs < r_q) && (c_q > colobs))
        {
            if ((r_q - rowobs) == (c_q - colobs))
            {
                if (c_q - colobs - 1 < leftdown)
                {
                    leftdown = c_q - colobs - 1;
                }
            }
        }
    }
    printf("up-%d ", up);
    printf("down-%d ", down);
    printf("left-%d ", left);
    printf("right-%d ", right);
    printf("leftup-%d ", leftup);
    printf("rightup%-d ", rightup);
    printf("rightdown-%d ", rightdown);
    printf("leftdown-%d ", leftdown);

    int result = (up + down + left + right + leftup + rightup + leftdown + rightdown);
    return result;
}

int main()
{
    // Sample Input
    int n = 88587;
    int k = 9;
    int r_q = 20001;
    int c_q = 20003;

    int **obstacles = malloc(k * sizeof(int *));
    for (int i = 0; i < k; i++)
    {
        *(obstacles + i) = malloc(2 * sizeof(int));
    }

    obstacles[0][0] = 20001;
    obstacles[0][1] = 20002;

    obstacles[1][0] = 20001;
    obstacles[1][1] = 20004;

    obstacles[2][0] = 20000;
    obstacles[2][1] = 20003;

    obstacles[3][0] = 20002;
    obstacles[3][1] = 20003;

    obstacles[4][0] = 20000;
    obstacles[4][1] = 20004;

    obstacles[5][0] = 20000;
    obstacles[5][1] = 20002;

    obstacles[6][0] = 20002;
    obstacles[6][1] = 20004;

    obstacles[7][0] = 20002;
    obstacles[7][1] = 20002;

    obstacles[8][0] = 524;
    obstacles[8][1] = 323;

    // obstacles[9][0] = 3;
    // obstacles[9][1] = 3;

    // Call the queensAttack function
    int result = queensAttack(n, k, r_q, c_q, k, 2, obstacles);

    // Print the result
    printf("%d\n", result);

    return 0;
}
// 88587 9
// 20001 20003
// 20001 20002
// 20001 20004
// 20000 20003
// 20002 20003
// 20000 20004
// 20000 20002
// 20002 20004
// 20002 20002
// 564 323
