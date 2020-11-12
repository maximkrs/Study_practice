#pragma once

void sort_str(int mas[10][10])
{
    int sum[10], isum[10];
    int new_mas[10][10];
    for (int i = 0; i < 10; i++)
    {
        isum[i] = i;
        sum[i] = 0;
        for (int j = 0; j < 10; j++)
        {
            sum[i] += mas[i][j];
        }
    }
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (sum[j] > sum[j + 1]) {
                temp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = temp;
                temp = isum[j];
                isum[j] = isum[j + 1];
                isum[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            new_mas[i][j] = mas[isum[i]][j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mas[i][j] = new_mas[i][j];
        }
    }

}