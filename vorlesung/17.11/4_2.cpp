#include <iostream>
#include <string>

/*
Eine Anzahl Bytes gegeben als int-Wert soll so mit Hilfe der metrischen Einheiten (K, M, G)
auf dem Bildschirm ausgegeben werden, dass höchstens 3 Vorkommastellen angezeigt werden.
Die Ausgabe soll in etwa wie folgt aussehen:
- 123 Byte sind 123.0 Byte
- 15323 Byte sind 15.323 KByte
- 15323000 Byte sind 15.323 Mbyte
- 1532300001 Byte sind 1.532300001 GByte

Verwenden Sie keine Schleifen (nur if-else). Die Ausgabeanweisungen dürfen ausschließlich am Ende
der main-Funktion sein.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  int eingabe[4] = {123, 15323, 15323000, 1532300001};
  double ergebnis[4] = {0.0, 0.0, 0.0, 0.0};
  string text[4]{"", "", "", ""};

  for (int i = 0; i < 4; i++)
  {
    if (eingabe[i] < 1000)
    {
      ergebnis[i] = eingabe[i];
      text[i] = printf("%i        Byte sind %5.1lf         Byte", eingabe[i], ergebnis[i]);
    }
    else if (eingabe[i] < 1000000)
    {
      ergebnis[i] = eingabe[i] / 1000.0;
      text[i] = printf("\n%i      Byte sind %7.3lf       KByte", eingabe[i], ergebnis[i]);
    }
    else if (eingabe[i] < 1000000000)
    {
      ergebnis[i] = eingabe[i] / 1000000.0;
      text[i] = printf("\n%i   Byte sind %7.3lf       MByte", eingabe[i], ergebnis[i]);
    }
    else if (eingabe[i] < 1000000000000)
    {
      ergebnis[i] = eingabe[i] / 1000000000.0;
      text[i] = printf("\n%i Byte sind %13.9lf GByte", eingabe[i], ergebnis[i]);
    }
  }

  for (int i = 0; i < 4; i++)
  {
    cout << text[i];
  }

  return 0;
}