bool search(int value, int values[], int n)
{
    int min, max, mid;
    int count_min = 0;
    int count_max = n - 1;
    int count_mid = (count_max + count_min)/2;
    int m = 0; //счетчик количества итераций (ради интереса)
    bool needle1 = false;

    min = values[count_min];
    max = values[count_max];
    mid = values[(count_max + count_min)/2];

    printf ("n = %i\n", n);

    do
    {
        printf ("min = %i, max = %i, mid = %i\n", min, max, mid);
        m++;


        if (value > mid)
        {
            count_min = count_mid;
            min = values[count_min];
            count_mid = (count_max + count_min)/2;
            mid = values[(count_max + count_min)/2];
            printf(">mid\n");
        }

        if (value < mid)
        {
            count_max = count_mid;
            max = values[count_max];
            count_mid = (count_max + count_min)/2;
            mid = values[(count_max + count_min)/2];
            printf("<mid\n");
        }

        if (mid == value)
        {
            needle1 = true;
            printf("=mid\n");
        }

        if (max == value)
        {
            needle1 = true;
            printf("=max\n");
        }

        if (min == value)
        {
            needle1 = true;
            printf("=min\n");
        }

        if ((count_max - count_min) == 1)
        {
            needle1 = false;
            printf("!=\n");
        }
    } while (min != value && max != value && mid != value && count_max - count_min != 1);

    printf("%i\n", m);
    return needle1;
}
