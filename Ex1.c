# include < stdio.h >
int main()
{

        /* Maravilla Méndez Oscar
     Equipo Los burros dorados del 17
    */ 

    float primer, segundo, multiplicacion, division;
    printf("\n\n Maravilla Méndez Oscar");
    printf("\n\n Saca el promedio de valores reales");
    printf("\n\n Dame el primer valor real");
    scanf("%f", &primer);
    printf("\n\n Dame el segundo valor real");
    scanf("%f", &segundo);
    multiplicacion = primer * segundo;
    division = primer / segundo ;
    printf("\n\n El producto es %f", multiplicacion);
    printf("\n\n El producto es %f", division);

    return 0;
}