#include <cstdio>

int main()
{
    for (int N=2; N<=79; N++)
    {
        for (int fghij=1234; fghij <= 98765/N; fghij++ )
        {
            int abcde = fghij*N;
            int tmp, used = (fghij < 10000);
            tmp = abcde; 
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            tmp = fghij;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            if (used == (1<<10)-1)
                printf("%0.5d / %0.5d = %d\n", abcde, fghij, N);
        }
    }
}
