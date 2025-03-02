    // Preenche o grid com as condições dos inputs 1 e 4
    i = 0;
    while (i < 16)
    {
        int index = i % N;  // index que representa a posição dentro da linha/coluna
        if (i < N) // primeira linha
        {
            if (nbr[i] == 1)
                array[0][3] = 4;
            else if (nbr[i] == 4)
            {
                array[0][index] = 1;
                array[1][index] = 2;
                array[2][index] = 3;
                array[3][index] = 4;
            }
        }
        else if (i < N * 2) // segunda linha
        {
            if (nbr[i] == 1)
                array[3][index] = 4;
            else if (nbr[i] == 4)
            {
                array[3][index] = 1;
                array[2][index] = 2;
                array[1][index] = 3;
                array[0][index] = 4;
            }
        }
        else if (i < N * 3) // terceira linha
        {
            if (nbr[i] == 1)
                array[index][0] = 4;
            else if (nbr[i] == 4)
            {
                array[index][0] = 1;
                array[index][1] = 2;
                array[index][2] = 3;
                array[index][3] = 4;
            }
        }
        else if (i < N * 4) // quarta linha
        {
            if (nbr[i] == 1)
                array[index][3] = 4;
            else if (nbr[i] == 4)
            {
                array[index][3] = 1;
                array[index][2] = 2;
                array[index][1] = 3;
                array[index][0] = 4;
            }
        }
        i++;
    }
