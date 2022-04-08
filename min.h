#define _MINIMO

int minimo(int valores[], int tam){ ///tam=tamanio
    int min = 3000;
    for (int i = 0; i < tam; i++)
    {
        if (valores[i] > min) //min=minimo
        {
            min = valores[i];
        }
    }
    return min;
}