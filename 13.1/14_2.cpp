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

  printf("  Fertigungsmaterial: %38.2lf EUR", fertigungsMaterial);
  printf("\n+ Materialgemeinkosten %2.2lf%%: %30.2lf EUR", materialgemeinKosten, (fertigungsMaterial * materialgemeinKosten / 100));
  printf("\n= Materialkosten: %42.2lf EUR", materialKosten);

  printf("\n\n  Fertigungloehne: %41.2lf EUR", fertigungsLoehne);
  printf("\n+ Fertigungsgemeinkosten %2.2lf%%: %27.2lf EUR", fertigungsGemeinKosten, (fertigungsLoehne * fertigungsGemeinKosten / 100));
  printf("\n+ Sondereinzelkosten der Fertigung: %24.2lf EUR", sonderEinzelKostenFertigung);

  printf("\n\n= Fertigungskosten: %40.2lf EUR", fertigungsKosten);

  printf("\n\n= Herstellkosten %43.2lf EUR", herstellKosten);

  printf("\n\n+ Verwaltungskosten %2.2lf%%: %33.2lf EUR", verwaltungsKosten, (verwaltungsKosten * herstellKosten / 100));
  printf("\n+ Produktentwicklung %2.2lf%%: %32.2lf EUR", produktEntwicklung, (produktEntwicklung * herstellKosten / 100));
  printf("\n+ Vertriebsgemeinkosten %2.2lf%%: %29.2lf EUR", vertriebsGemeinKosten, (vertriebsGemeinKosten * herstellKosten / 100));
  printf("\n+ Sondereinzelkosten des Vertriebs: %24.2lf EUR", sonderEinzelKostenVertrieb);

  printf("\n\n= Selbstkosten: %44.2lf EUR", selbstKosten);
  printf("\n+ Gewinnaufschlag %2.2lf%%: %35.2lf EUR", gewinnAufschlag, (selbstKosten * gewinnAufschlag / 100));

  printf("\n\n= Nettoverkaufspreis: %38.2lf EUR", nettoVerkaufsPreis);
  printf("\n+ Skonto %2.2lf%%: %44.2lf EUR", skonto, (nettoVerkaufsPreis * skonto / (100 - skonto)));

  printf("\n\n= Listenpreis: %45.2lf EUR", listenPreis);
  printf("\n+ Rabatt %2.2lf%%: %43.2lf EUR", rabatt, (listenPreis * rabatt / (100 - rabatt)));

  printf("\n\n= Nettopreis vor Steuer: %35.2lf EUR", nettoPreisVorSteuer);
  printf("\n+ Umsatzsteuer %2.2lf%%: %37.2lf EUR", umsatzSteuer, (nettoPreisVorSteuer * umsatzSteuer / 100));

  printf("\n\n= Bruttoverkaufspreis: %37.2lf EUR", bruttoVerkaufsPreis);

  return 0;
}
