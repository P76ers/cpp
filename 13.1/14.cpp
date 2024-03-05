#include <iostream>
#include <iomanip>

/*
Erstellen Sie das Programm zur Kalkulation in einem Industriebetrieb:
Die farbig (blau) hinterlegten Werte werden eingegeben,
der Rest erscheint danach berechnet auf dem Bildschirm.
*/

using namespace std;

int main(int argc, char const *argv[])
{
  double fertigungsMaterial = 44550.0;
  double fertigungsLoehne = 27500.0;
  double sonderEinzelKostenFertigung = 11325.0;
  double sonderEinzelKostenVertrieb = 3552.50;

  double materialgemeinKosten = 9.00;
  double materialKosten = 0.0;

  double fertigungsGemeinKosten = 98.60;

  double fertigungsKosten = 98.60;
  double herstellKosten = 0.0;
  double verwaltungsKosten = 8.5;
  double produktEntwicklung = 7.75;
  double vertriebsGemeinKosten = 9.25;

  double selbstKosten = 0.0;
  double gewinnAufschlag = 5.00;

  double nettoVerkaufsPreis = 0.0;
  double skonto = 2.00; // vom Listenpreis

  double listenPreis = 0.0;
  double rabatt = 15.00; // von nettoPreisVorSteuer

  double nettoPreisVorSteuer = 0.0;
  double umsatzSteuer = 19.00;

  double bruttoVerkaufsPreis = 0.0;

  cout << fixed << setprecision(2);

  // Eingabe
  // cout << "Bitte Kosten Fertigungsmaterial angeben:" << endl;
  // cin >> fertigungsMaterial;

  // cout
  //     << "Bitte Kosten der Fertigungsloehne eingeben:" << endl;
  // cin >> fertigungsLoehne;

  // cout << "Bitte Sondereinzelkosten der Fertigung eingeben:" << endl;
  // cin >> sonderEinzelKostenFertigung;

  // cout << "Bitte Sondereinzelkosten des Vertriebs eingeben:" << endl;
  // cin >> sonderEinzelKostenVertrieb;

  materialKosten = fertigungsMaterial + (fertigungsMaterial * materialgemeinKosten / 100);
  fertigungsKosten = fertigungsLoehne + (fertigungsLoehne * fertigungsGemeinKosten / 100) + sonderEinzelKostenFertigung;
  herstellKosten = materialKosten + fertigungsKosten;

  selbstKosten = herstellKosten + (verwaltungsKosten * herstellKosten / 100) + (produktEntwicklung * herstellKosten / 100) + (vertriebsGemeinKosten * herstellKosten / 100) + (sonderEinzelKostenVertrieb);

  nettoVerkaufsPreis = selbstKosten + (selbstKosten * gewinnAufschlag / 100);
  listenPreis = nettoVerkaufsPreis + (nettoVerkaufsPreis * skonto / (100 - skonto));
  nettoPreisVorSteuer = listenPreis + (listenPreis * rabatt / (100 - rabatt));
  bruttoVerkaufsPreis = nettoPreisVorSteuer + (nettoPreisVorSteuer * umsatzSteuer / 100);

  cout
      << "  Fertigungsmaterial: \t \t \t \t" << setw(12) << right << fertigungsMaterial << " EUR" << endl;
  cout << "+ Materialgemeinkosten " << materialgemeinKosten << "%: \t \t \t"
       << setw(12) << right << fertigungsMaterial * materialgemeinKosten / 100 << " EUR" << endl;
  cout << "= Materialkosten: \t \t \t \t" << setw(12) << right << materialKosten << " EUR \n"
       << endl;

  cout << "  Fertigungloehne: \t \t \t \t" << setw(12) << right << fertigungsLoehne << " EUR" << endl;
  cout << "+ Fertigungsgemeinkosten " << fertigungsGemeinKosten << "%: \t \t"
       << setw(12) << right << fertigungsLoehne * fertigungsGemeinKosten / 100 << " EUR" << endl;
  cout << "+ Sondereinzelkosten der Fertigung: \t \t" << setw(12) << right << sonderEinzelKostenFertigung << " EUR \n"
       << endl;

  cout << "= Fertigungskosten: \t \t \t \t" << setw(12) << right << fertigungsKosten << " EUR \n"
       << endl;

  cout << "= Herstellkosten: \t \t \t \t" << setw(12) << right << herstellKosten << " EUR\n"
       << endl;

  cout << "+ Verwaltungskosten " << verwaltungsKosten << "%: \t \t \t" << setw(12) << right << verwaltungsKosten * herstellKosten / 100 << " EUR "
       << endl;
  cout << "+ Produktentwicklung " << produktEntwicklung << "%: \t \t \t" << setw(12) << right << produktEntwicklung * herstellKosten / 100 << " EUR"
       << endl;
  cout << "+ Vertriebsgemeinkosten " << vertriebsGemeinKosten << "%: \t \t \t" << setw(12) << right << vertriebsGemeinKosten * herstellKosten / 100 << " EUR"
       << endl;
  cout << "+ Sondereinzelkosten des Vertriebs: \t \t" << setw(12) << right << sonderEinzelKostenVertrieb << " EUR \n"
       << endl;

  cout << "= Selbstkosten: \t \t \t \t" << setw(12) << right << selbstKosten << " EUR"
       << endl;
  cout << "+ Gewinnaufschlag " << gewinnAufschlag << "%: \t \t \t" << setw(12) << right << selbstKosten * gewinnAufschlag / 100 << " EUR \n"
       << endl;

  cout << "= Nettoverkaufspreis: \t \t \t \t" << setw(12) << right << nettoVerkaufsPreis << " EUR"
       << endl;
  cout << "+ Skonto " << skonto << "%: \t \t \t \t" << setw(12) << right << nettoVerkaufsPreis * skonto / (100 - skonto) << " EUR \n"
       << endl;

  cout << "= Listenpreis: \t \t \t \t \t" << setw(12) << right << listenPreis << " EUR"
       << endl;
  cout << "+ Rabatt " << rabatt << "%: \t \t \t \t" << setw(12) << right << listenPreis * rabatt / (100 - rabatt) << " EUR \n"
       << endl;

  cout << "= Nettopreis vor Steuer: \t \t \t" << setw(12) << right << nettoPreisVorSteuer << " EUR"
       << endl;

  cout << "+ Umsatzsteuer " << umsatzSteuer << "%: \t \t \t \t" << setw(12) << right << (nettoPreisVorSteuer * umsatzSteuer / 100) << " EUR \n"
       << endl;

  cout << "= Bruttoverkaufspreis: \t \t \t \t" << setw(12) << right << bruttoVerkaufsPreis << " EUR"
       << endl;

  return 0;
}
