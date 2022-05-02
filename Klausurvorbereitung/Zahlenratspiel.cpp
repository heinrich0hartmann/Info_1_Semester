#include <iostream>

int main() {
    int min, max; // Variablen für den möglichen Zahlenbereich
    int zahl;     // Zahl die der Rechner vermutet

    std::cout << "Wo fängt die Zahlenreihe an?: ";     // Zahlenbereich abfragen
    std::cin >> min;                                   // Benutzereingabe einlesen

    std::cout << "Wo hört die Zahlenreihe auf?: ";     // Zahlenbereich abfragen
    std::cin >> max;                                   // Benutzereingabe einlesen

    for (char eingabe = '0'; eingabe != '=';) {        // Abbrechen wenn eingabe '=' ist
        zahl = min + (max - min) / 2;                  // Mittlere Zahl berechnen
        std::cout << "Denken Sie an " << zahl << "? "; // Vermutung ausgeben
        std::cin >> eingabe;                           // Antwort einlesen

        if (eingabe == '<')                        // Ist die Zahl kleiner?
            max = zahl;                            // Setzte max auf den zu großen Wert zahl
        else if (eingabe == '>')                   // Ist die Zahl größer?
            min = zahl;                            // Setzte min auf den zu kleinen Wert zahl
        else if (eingabe != '=')                   // Ist Eingabe auch kein Gleichheitszeichen
            std::cout << "Sie haben ein unzulässiges Zeichen eingegeben!\n"; // Fehlerhafte Eingabe melden

        if (min + 1 >= max) {                        // Keine Zahl mehr im gültigen Bereich
            std::cout << "Sie sind ein Lügner!\n"; // Das Programm ist äußert entsetzt
            break;                                 // Schleife wird abgebrochen
        }
    }

    std::cout << "Die von Ihnen gemerkte Zahl ist " << zahl << "!" << std::endl; // Ausgabe der erratenen Zahl
    system("pause");
}
