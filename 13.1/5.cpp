#include <iostream>

/*
Ein Programm soll den Benzinverbrauch eines Kfz auf 100 km berechnen.
Dies lässt sich nach folgender Formel durchführen:
Treibstoffmenge \* 100 / gefahrene Strecke = Verbrauch pro 100km

Die gefahrene Strecke ergibt sich aus der Differenz vom KM-Stand beim letzten Tanken
und neuen KM-Stand beim Auftanken. Erstellen Sie das dazugehörige Programm,
das nach Eingabe von Anfangskilometerstand,
Endkilometerstand und getankten Litern den Verbrauch berechnet und ausgibt.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  float anfangsStand = 0;
  float endStand = 0;
  float getankt = 0;
  float benzinVerbrauch = 0;

  cout << "Bitte Anfangskilometerstand eingeben" << endl;
  cin >> anfangsStand;

  cout << "Bitte Endkilometer eingeben: " << endl;
  cin >> endStand;

  cout << "Bitte Tankmenge in Liter eingeben: " << endl;
  cin >> getankt;

  benzinVerbrauch = getankt * 100 / (endStand - anfangsStand);

  cout << "Sie fuhren: " << endStand - anfangsStand << " km." << endl;
  cout << "Ihr Benzinverbrauch pro 100km betrug: " << benzinVerbrauch << "l" << endl;

  return 0;
}