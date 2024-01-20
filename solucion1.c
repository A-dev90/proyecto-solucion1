// Ana Paula López//
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float peso[40], alt[40], dosis[40];
    int edad[40], genero[40], i, cant;
    do
    {
        printf("Ingrese la cantidad de estudiantes que desea registrar: \n ");
        scanf("%i", &cant);
        if (cant <= 0)
        {
            printf("Cantidad ingresada incorrecta.\n  ");
        }
    } while (cant <= 0);

    for (i = 1; i <= cant; i++)
    {
        do
        {
            printf("Ingrese la edad del estudiante %i:\n", i);
            scanf("%i", &edad[i]);
            if (edad[i] < 3 || edad[i] > 60)
            {
                printf("Edad ingresada incorrecta. \n");
            }
        } while (edad[i] < 3 || edad[i] > 60);
        if (edad[i] > 18)
        {
            printf("Para continuar, por favor indique el género del estudiante.\n");
            printf("1) Para género femenino \n");
            printf("2) Para género masculino \n");
            scanf("%i", &genero[i]);

            if (genero[i] == 2)
            {
                do
                {
                    printf("Ingrese el peso en libras (lb) del estudiante varón: \n");
                    scanf("%f", &peso[i]);
                    if (peso[i] < 111 || peso[i] > 177)
                    {
                        printf("Cantidad ingresada incorrecta.\n");
                    }
                } while (peso[i] < 111 || peso[i] > 177);

                do
                {
                    printf("Ingrese la estatura (m) del estudiante varón: \n");
                    scanf("%f", &alt[i]);
                    if (alt[i] < 1.55 || alt[i] > 1.90)
                    {
                        printf("Cantidad ingresada incorrecta.\n");
                    }
                } while (alt[i] < 1.55 || alt[i] > 1.90);

                if (alt[i] > 1.60 && peso[i] >= 150)
                {
                    dosis[i] = alt[i] * 0.20 + peso[i] * 0.80;
                }
                else
                {
                    dosis[i] = alt[i] * 0.30 + peso[i] * 0.70;
                }
            }
            else
            {
                do
                {
                    printf("Ingrese el peso en libras (lb) de la estudiante mujer: \n");
                    scanf("%f", &peso[i]);
                    if (peso[i] < 100 || peso[i] > 155)
                    {
                        printf("Cantidad ingresada incorrecta.\n");
                    }
                } while (peso[i] < 100 || peso[i] > 155);

                do
                {
                    printf("Ingrese la estatura (m) de la estudiante mujer: \n");
                    scanf("%f", &alt[i]);
                    if (alt[i] < 1.45 || alt[i] > 1.75)
                    {
                        printf("Cantidad ingresada incorrecta.\n");
                    }
                } while (alt[i] < 1.45 || alt[i] > 1.75);

                if (alt[i] > 1.50 && peso[i] >= 130)
                {
                    dosis[i] = alt[i] * 0.25 + peso[i] * 0.75;
                }
                else
                {
                    dosis[i] = alt[i] * 0.35 + peso[i] * 0.65;
                }
            }
        }
        else
        {
            printf("El estudiante aún no puede consumir las vitaminas.\n");
        }
    }

    printf("\n---RESUMEN DE DOSIS DE VITAMINAS PARA LOS ESTUDIANTES---\n");

    for (i = 1; i <= cant; i++)
    {
        if (edad[i] > 18)
        {
            printf("El estudiante %i debe consumir: %.2f gramos de vitaminas.\n", i, dosis[i]);
        }
        else
        {
            printf("El estudiante %i debe ser mayor de 18 años para consumir las vitaminas.\n", i);
        }
    }
    return 0;
}
