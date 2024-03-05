#include <iostream>

/*
Bei der Handelskammerprüfung fallen insgesamt 7 Noten an;
jede Bewertung geht immer von 0 bis maximal 100 Punkte.
Davon werden die Noten ähnlich folgendem Berechnungsschema zu einer zusammengerechnet,
diese beiden Werte werden dann am Ende wiederum addiert und daraus der Durchschnitt ergibt
die Gesamtnote der Kammerprüfung.

Teil A Dokumentation = N1
Präsentation = N2
Fachgespräch = N3
(N2+N3)/2 = Zw1
(N1*50 + Zw1*50)/100 = E1

Teil B
AP1 S1 * 40 = Zw1
AP2a S2 * 20 = Zw2
AP2b S3 * 20 = Zw3
WiSo S4 * 20 = Zw4
(Zw1 + Zw2 + Zw3+Zw4)/100 = E2

Gesamt (E1 + E2)/2 = Erg

Erstellen Sie ein Programm, dass nach Eingabe der 6 Werte (N1 bis N3, S1 bis S4)
die Ergebnisse für Teil A (E1) und B (E2) sowie das Gesamtergebnis (Erg) ausgibt.

Erweiterung 1:
Die Prüfung ist bestanden, wenn beide Teile A und B mit jeweils mindestens 50% absolviert wurden.

Erweiterung 2:
Wenn auch nur ein Teilergebnis (N1, N2, N3, Zw1, Zw2 oder Zw3) unter 30% liegt,
gilt die gesamte Prüfung als nicht bestanden!
*/

using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}