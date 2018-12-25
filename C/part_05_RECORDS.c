/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: Parte 5 - RECORDS
 */

 int main()
 {
     struct rec
     {
         int a, b, c;
         float d, e, f;
     };

     struct rec r;

     r.a = 47;
     r.d = (float) 10/3;

     printf("int %d, float %f\n\n", r.a, r.d);

     return 0;
 }
