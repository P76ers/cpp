#include <iostream>

/*
Als Großhändler bieten wir unseren Kunden verschiedene Rabatte:
- Stammkunden erhalten 5 % Treuerabatt, Neukunden natürlich noch keinen
- Großhändler/Wiederverkäufer bekommen einen Preisnachlass von 15 %
- Bei einem Betrag von mehr als 2.500€ erhalten alle 5 % Rabatt extra,
- bei mehr als 5.000€ sogar 8 %.
- Barzahler erhalten 2% Skonto.

Stammkunden, die auch Großhändler sind, erhalten also generell
- mindestens 20 % Rabatt,
- zusätzlich einen evtl. Mengenrabatt.
- Endverbraucher als Neukunden bekommen zum Beispiel 10% (8+2) Rabatt, wenn sie für mehr 5.000€ einkaufen und
  bar zahlen.

Es handelt sich hier also um "addierende Rabatte";
ein eventueller Skontobetrag bei Barzahlung wird aber erst NACH Berechnung der Endsumme abgezogen.

Erstellen Sie ein Programm, das alle entsprechenden Informationen (Stammkunde? Großhändler? Kaufsumme? Barzahler?)
abfragt und danach die Summe der erhaltenen Rabatte (in % und €),
den Skontobetrag und natürlich den Endpreis anzeigt.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  char stammkunde = 'j';
  char grossHaendler = 'j';
  char barzahler = 'j';
  float kaufsumme = 100;

  // cout << "Sind Sie (S)tamm- oder (N)eukunde?" << endl;
  // cin >> stammkunde;
  // cout << "Sind Sie GrossHaendler (j)a oder (n)ein" << endl;
  // cin >> grossHaendler;
  // cout << "Bitte geben Sie Ihre Kaufsumme an: " << endl;
  // cin >> kaufsumme;
  // cout << "Sind Sie Barzahler (j)a  oder (n)ein " << endl;
  // cin >> barzahler;

  return 0;
}