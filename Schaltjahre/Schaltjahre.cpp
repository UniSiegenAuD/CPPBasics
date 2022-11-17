#include <iostream>

/*
*
* Das Projekt dient als Musterlösung zur Aufgabe, eine Funktion zu erstellen, welche prüft, ob ein bestimmtes Jahr ein Schaltjahr ist.
* Die Funktion wurde so minimiert, dass man keine verschachtelten if-Abfragen mehr benutzt, sondern in einer if-Abfrage direkt alle Fälle überprüft.
*
*/

// Überprüft, ob ein gegebenes Jahr ein Schaltjahr ist.
bool isSchaltjahr (int jahr) {
    if (jahr % 4 != 0 || jahr % 100 == 0 && jahr % 400 != 0) return false;
    else return true;
};

int main () {
    // Eingabe einer Zahl ermöglichen
    int jahr;
    std::cout << "Gib bitte ein Jahr ein: ";
    std::cin >> jahr;
    // Ausgabe erfolgt und unterscheidet zwischen zwei Fällen: Entweder true (jahr ist ein Schaltjahr) oder false (jahr ist kein Schaltjahr)
    std::cout << (isSchaltjahr(jahr) ? "Das Jahr ist ein Schaltjahr." : "Das Jahr ist kein Schaltjahr.");
};