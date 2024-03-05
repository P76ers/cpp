#include <stdio.h>
#define PI 3.14159   /* Def. von PI als Konstante */
double ober(double); /* Prototyp der Function ober */
double vol(double);  /* Prototyp der Function vol */

/*
Erstellen Sie aus folgendem C-Code die passenden Struktogramme.
*/

void main()
{ /* "Hauptprogramm" */
  double s, v, r;
  printf("\nRadius eingeben: ");
  scanf("%lf", &r); // in C++: cin >> r
  s = ober(r);
  v = vol(r);
  printf("\n Oberflaeche = %10.2lf", s);
  printf("\n Volumen = %10.2lf\n\n", v);
}
double ober(double r) /* Definition der Funktion */
{
  double s;
  s = 4 * PI * r * r;
  return s;
}
double vol(double r1) /* Definition der Funktion */
{
  double v1;
  v1 = 4.0 / 3.0 * PI * r1 * r1 * r1;
  /* Achtung: 4/3 ergibt das ganzzahlige Resultat 1 */
  return v1;
}