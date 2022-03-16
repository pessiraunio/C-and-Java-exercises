#include <iostream>
#include <vector>

using namespace std;

// Erilaisia funktioita, ja funktiotyyppejä
void tervehdi() {
    cout << "Hello!" << endl;
}
void morota() {
    cout << "Moro" << endl;
}
int multiply(int x) {
    return x * x;
}
// Määritellään publisher- funktion parametriksi osoitin johonkin funktioon
// Annetaan parametrin paluuarvoksi sama kuin parametrinä olevalla funktiolla on eli "void.
// (*ptr) nimellinen arvo funktio- osoittimelle
// () funktio- osoittimen omaavan funktion parametrit, tässä tapauksessa tyhjä.
void publisher(void (*ptr)()) {
    cout << "Using publisher to publish... " << endl;
    ptr(); // Tässä kutsutaan annettua funktiota
}

void int_publisher(int (*ptr)(int)) {
    cout << "Using publisher for int functions..." << endl;
    int value = ptr(10);
    cout << "Value: " << value << endl;
}
int main() {

    // Annetaan parametrifunktion osoite publisherille
    // tervehdi kuuntelee publisherissä tapahtuvaa tapahtumaa (tulostus "Using publi.. etc")
    publisher(&tervehdi);
    // morota kuuntelee myös publisherissä tapahtuvaa tapahtumaa (tulostus "Using publi.. etc")
    publisher(&morota);
    
    // Er§ 
    // multiply kuuntelee myös publisherissä tapahtuvaa tapahtumaa (Palauttaa multiplyn laskeman arvon.")
    int_publisher(&multiply);
    return 0;
}