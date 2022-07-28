#include <stdio.h>


int main()
{
    __uint32_t in[64] = {};
   __uint8_t bin[64] = {};

    int size = sizeof(in) / sizeof(in[0]);
    int execute = 1;
    while (execute = 15)
    {
    printf("\n\nInsira o decimal para ser convertido: ");
    scanf("%d", &in[0]);

    
    for (int i = 0; i < size; i++)
    {
        bin[i] = 0;
        in[i + 1] = in[i] / 2;
        if (in[i] != 0)
        {
            
            if ((in[i] / 2) * 2 == in[i])
            {
                printf("\n| %6d # %6d = %6d }-> 0 |", in[i], in[i] / 2, (in[i] / 2) * 2);
                bin[i] =  0;
            }
            else
            {
                printf("\n| %6d # %6d ! %6d }-> 1 |", in[i], in[i] / 2, (in[i] / 2) * 2);
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