bool search(int value, int values[], int n)
{
    int min, max, mid;
    int count_min = 0; 
    int count_max = n - 1;
    int count_mid = (count_max + count_min)/2;
    int m = 0; //счетчик количества итераций (ради интереса)
    bool stop = false;

    min = values[count_min];
    max = values[count_max];
    mid = values[(count_max + count_min)/2];

    printf ("n = %i\n", n);

    do
    {
        printf ("min = %i, max = %i, mid = %i\n", min, max, mid);
        m++;


        if ((count_max - count_min) == 1)
        {
            if (max == value)
            {
                stop = true;
                printf("max=\n");

            }

            else if (min == value)
            {
                stop = true;
                printf("min=\n");

            }


            else
            {
                stop = false;
                printf("!=\n");
                break;
            }
        }

        else if (value > mid)
        {
            count_min = count_mid;
            min = values[count_min];
            count_mid = (count_max + count_min)/2;
            mid = values[(count_max + count_min)/2];
            printf(">mid\n");
        }

        else if (value < mid)
        {
            count_max = count_mid;
            max = values[count_max];
            count_mid = (count_max + count_min)/2;
            mid = values[(count_max + count_min)/2];
            printf("<mid\n");

        }

        if (mid == value)
            {
            stop = true;
            printf("=mid\n");

            }

    } while (mid != value || ((count_max - count_min) == 1 && max == value) || ((count_max - count_min) == 1 && min == value));

    printf("%i\n", m);
    return stop;

}
