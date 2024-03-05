#include <iostream>
using namespace std;

/*
Gegeben ist folgendes JavaScript. "Übersetzen" Sie das Script in ein entsprechendes
vollständiges C++-Programm.
<html>
  <head>
    <title></title>
    <meta name="author" content="kuhn" />
  </head>
  <body text="#000000" bgcolor="#FFFFFF" link="#FF0000">
    <script language="JavaScript">
      <!--
      var a = 10;
      var s = 0;
      var V = 0;
      var Vmax = 0;
      var Smax = 0;
      var l = 0.1; // Schnittlänge
      while (V >= Vmax) {
        V = (a - 2 * s) * (a - 2 * s) * s;
        // Zeile für Zwischenausgabe der Werte
        document.write("Schnittlänge ", s, " akt. Vol. ", V, ".<br>");
        if (Vmax < V) {
          Vmax = V;
          Smax = s;
        }
        s = s + l;
      }
      document.write("Maximales Volumen von ", Vmax, " bei ", Smax);
      //-->
    </script>
  </body>
</html>
*/

int main()
{
  double a = 10, s = 0, v = 0, vmax = 0, smax = 0, l = 0.01;
  while (v >= vmax)
  {
    v = (a - 2 * s) * (a - 2 * s) * s;
    cout << "Schnittl\204nge " << s << " akt. Volumen " << v << endl;
    if (vmax < v)
    {
      vmax = v;
      smax = s;
    }
    s += l;
  }
  cout << "Maximales Volumen von " << vmax << " bei " << smax;

  return 0;
}
