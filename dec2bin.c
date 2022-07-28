#include <stdio.h>


int main()
{
    __uint32_t oi[64] = {};
   __uint8_t bin[64] = {};

    int size = sizeof(oi) / sizeof(oi[0]);
    int execute = 1;
    while (execute = 15)
    {
    printf("\n\nInsira o decimal para ser convertido: ");
    scanf("%d", &oi[0]);

    
    for (int i = 0; i < size; i++)
    {
        bin[i] = 0;
        oi[i + 1] = oi[i] / 2;
        if (oi[i] != 0)
        {
            
            if ((oi[i] / 2) * 2 == oi[i])
            {
                printf("\n| %6d # %6d = %6d }-> 0 |", oi[i], oi[i] / 2, (oi[i] / 2) * 2);
                bin[i] =  0;
            }
            else
            {
                printf("\n| %6d # %6d ! %6d }-> 1 |", oi[i], oi[i] / 2, (oi[i] / 2) * 2);
                bin[i] = 1;
            }
        }
    }

    __uint8_t init = 0;
    printf("\n\nResultado em binario: ");
    for (int i = 64 - 1; i >= 0; i--)
    {
        if (i >= 0)
        {
            
            if (init == 0)
            {
                
                if (bin[i - 1] == 1)
                {
                    printf("%d", bin[i]);
                    init = 1;
                }
            }
            else
            {
                printf("%d", bin[i]);
            }
        }
    }}
    return 0;
}