#include <iostream>
#define ZEILEN 100
#define SPALTEN 50

/*
we.know.it
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double ums[ZEILEN][SPALTEN] = {0};
  int i = 0, j = 0;

  // Array füllen
  for (int i = 0; i < ZEILEN; i++)
  {
    for (int j = 0; j < SPALTEN; j++)
    {
      ums[i][j] = 1;
    }
  }

  // a) Gesamtumsatz dieses Monats
  double summe = 0;

  for (i = 0; i < ZEILEN; i++)
  {
    for (j = 0; j < SPALTEN; j++)
    {
      summe += ums[i][j];
    }
  }

  cout << "a)" << summe << endl;

  // b) Umsatz (Produkt 10 = Zeile 9!)
  i = 9;
  summe = 0;

  for (j = 0; j < SPALTEN; j++)
  {
    summe += ums[i][j];
  }

  cout << "b) Umsatz Winux " << summe << endl;

  // c)

  // Summe Filialen
  int sumProdukt = 0, sumFiliale = 0;
  cout << "c) Umsatz Filialen:" << endl;

  for (i = 0; i < ZEILEN; i++)
  {
    sumFiliale = 0;
    for (j = 0; j < SPALTEN; j++)
    {
      sumFiliale += ums[i][j];
    }
    cout << "Filiale [" << i + 1 << "]" << sumFiliale << endl;
  }

  // Summe Produkt
  for (j = 0; j < SPALTEN; j++)
  {
    sumProdukt = 0;
    for (i = 0; i < ZEILEN; i++)
    {
      sumProdukt += ums[i][j];
    }
    cout << "Produkt [" << j + 1 << "]" << sumProdukt << endl;
  }

  // min Max
  double max = 0, min = 0, best = 0, worst = 0;

  // max
  for (j = 0; j < SPALTEN; j++)
  {
    ums[1][j] = 2;
  }
  // min
  for (j = 0; j < SPALTEN; j++)
  {
    ums[3][j] = 0;
  }

  for (i = 0; i < ZEILEN; i++)
  {
    sumProdukt = 0;
    for (j = 0; j < SPALTEN; j++)
    {
      sumProdukt += ums[i][j];
    }
    if (i == 0)
    {
      min = max = ums[i][j];
      best = worst = i;
    }
    else if (sumProdukt > max)
    {
      max = sumProdukt;
      best = i;
    }
    else if (sumProdukt < min)
    {
      min = sumProdukt;
      worst = i;
    }
  }

  cout << "c) bestProdukt" << best << endl;
  cout << "c) worstProdukt" << worst << endl;

  // e)
  int filiale1k = 0;

  // > 10000
  for (i = 0; i < ZEILEN; i++)
  {
    ums[i][3] = 200;
    ums[i][4] = 200;
  }

  for (j = 0; j < SPALTEN; j++)
  {
    sumFiliale = 0;
    for (i = 0; i < ZEILEN; i++)
    {
      sumFiliale += ums[i][j];
      filiale1k = j;
    }
    if (sumFiliale > 10000)
    {
      cout << "< 1k:" << j << endl;
    }
  }

  return 0;
}