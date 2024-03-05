#include <stdio.h>
#define PI 3.14159
void super(double, double *, double *);

void main()
{
  double s, v, r;
  char antw;
  do
  {

    printf("\nRadius eingeben: ");
    scanf("%lf", &r); // in C++: cin >> r

    super(r, &s, &v);

    printf("\n Oberflaeche = %10.2lf", s);
    printf("\n Volumen     = %10.2lf\n\n", v);
    printf("\n nochmal? (j/n)");
    fflush(stdin);
    scanf("%c", &antw);

  } while (antw == 'j' || antw == 'J');
}

void super(double r1, double *x, double *v1) /* Definition der Funktion */
{
  *x = 4 * PI * r1 * r1;
  *v1 = 4.0 / 3.0 * PI * r1 * r1 * r1;
}
