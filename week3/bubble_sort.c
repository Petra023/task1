void sort(int values[], int n)
{
    int k, i, reg;

    for (i = 0; i < (n - 1); i++)
    {

        for (k = 0; k < n - i - 1; k++)
        {

            if (values[k] > values[k + 1])
            {
                reg = values[k];
                values[k] = values[k + 1];
                values[k + 1] = reg;
            }
        }
    }
}
