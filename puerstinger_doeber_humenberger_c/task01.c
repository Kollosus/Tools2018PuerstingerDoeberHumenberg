#include <stdio.h>

void printme();

int main ()
{
    printf("-------------------------------------------\n");
    printf("            Firma Rein und Fein!\n");
    printf("-------------------------------------------\n");

    int boden;
    printf("Bitte die Gesamtflaeche (Quadratmeter) des zu reinigenden Boden eingeben:");
    scanf("%i", &boden);

    int raum15m2;
    printf("Bitte die Anzahl der Raeume eingeben die maximal 15m2 groß sind:");
    scanf("%i", &raum15m2);

    int raum25m2;
    printf("Bitte die Anzahl der Raeume eingeben die zwischen 15m2 und 25m2 groß sind:");
    scanf("%i", &raum25m2);

    int raum40m2;
    printf("Bitte die Anzahl der Raeume eingeben die zwischen 25m2 und 40m2 groß sind:");
    scanf("%i", &raum40m2);

    int summeraum15m2;
    summeraum15m2 = raum15m2 * 1740;

    int summeraum25m2;
    summeraum25m2 = raum25m2 * 1140;

    int summeraum40m2;
    summeraum40m2 = raum40m2 * 740;

    int summeBoden;
    summeBoden = boden * 420;

    int summe;
    summe = summeBoden + summeraum15m2 + summeraum25m2 + summeraum40m2;

    int ust;
    ust = summe * 0.2;

    int brutto;
    brutto = summe + ust;

    printf("\nAutomatisch erstelltes Angebot der Firma Rein und Fein:\n");
    printf("\nGesamtflaeche:           %im2 \t %i,%iEUR", boden, summeBoden/100, summeBoden%100 );
    printf("\nAnzahl der 15m2 Raeume:  %i   \t %i,%iEUR", raum15m2, summeraum15m2/100, summeraum15m2%100 );
    printf("\nAnzahl der 25m2 Raeume:  %i   \t %i,%iEUR", raum25m2, summeraum25m2/100, summeraum25m2%100 );
    printf("\nAnzahl der 40m2 Raeume:  %i   \t %i,%iEUR", raum40m2, summeraum40m2/100, summeraum40m2%100 );
    printf("\n-------------------------------------------\n");
    printf("Netto Summe:                 \t %i,%iEUR\n", summe/100, summe%100 );
    printf("20ig Prozent Ust:            \t %i,%iEUR\n", ust/100, ust%100 );
    printf("-------------------------------------------\n");
    printf("Brutto Summe:                \t %i,%iEUR\n", brutto/100, brutto%100 );

    printf("\n");
    return 0;
}

void printme(){}