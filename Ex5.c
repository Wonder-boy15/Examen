# include < stdio.h >
int main () 
{
     /* Maravilla Méndez Oscar
    Equipo los burros dorados del 17
    */
   float numerodepersonas, numerodealimentos, porciones;
   printf ("\n\n Maravilla Méndez Oscar");
   printf ("\n\n Dame el numero de personas");
   scanf ("%f",&numerodepersonas);
   printf ("\n\n Dame el numero de alimentos disponibles");
   scanf ("%f",&numerodealimentos);
   porciones=numerodealimentos/numerodepersonas;
   printf ("\n\n La porcion para dividir equitativamente a cada persona es %f",porciones);
    return 0;
}