#include <iostream>
#include <Windows.h>
#include "Complex.h"
#include "ComplexPublic.h"
#include "ComplexPrivate.h"

using namespace std;

#pragma pack(push, 1)
class ComplexPacked {
    double x;
    double y;
};
#pragma pack(pop)

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "=== 1. ÄÅÌÎÍÑÒÐÀÖ²ß Â²ÄÊÐÈÒÎÃÎ ÓÑÏÀÄÊÓÂÀÍÍß (ComplexPublic) ===" << endl;

    ComplexPublic pub1;
    ComplexPublic pub2(3.0, 4.0);
    ComplexPublic pub3(pub2);

    cout << "pub1 (çà çàìîâ÷óâàííÿì): " << (string)pub1 << endl;
    cout << "pub2 (³í³ö³àë³çàö³ÿ): " << (string)pub2 << endl;
    cout << "pub3 (êîï³ÿ pub2): " << (string)pub3 << endl;

    ComplexPublic sum = pub1 + pub2;
    ComplexPublic mul = pub1 * pub2;

    cout << "\nÑóìà pub1 + pub2 = " << (string)sum << endl;
    cout << "Äîáóòîê pub1 * pub2 = " << (string)mul << endl;

    if (pub2 == pub3) {
        cout << "Ïîð³âíÿííÿ: pub2 òà pub3 îäíàêîâ³!" << endl;
    }

    cout << "\npub2 äî ³íêðåìåíòó: " << (string)pub2 << endl;
    pub2++;
    cout << "pub2 ï³ñëÿ ïîñòô³êñíîãî (pub2++): " << (string)pub2 << endl;
    ++pub2;
    cout << "pub2 ï³ñëÿ ïðåô³êñíîãî (++pub2): " << (string)pub2 << endl;

    cout << "\n--- Ìàñèâ îá'ºêò³â ComplexPublic ---" << endl;
    ComplexPublic arr[2];
    arr[0] = ComplexPublic(1.5, 2.5);
    arr[1] = ComplexPublic(5.0, 6.0);
    for (int i = 0; i < 2; i++) {
        cout << "arr[" << i << "] = " << (string)arr[i] << endl;
    }


    cout << "\n=== 2. ÄÅÌÎÍÑÒÐÀÖ²ß ÇÀÊÐÈÒÎÃÎ ÓÑÏÀÄÊÓÂÀÍÍß (ComplexPrivate) ===" << endl;
    ComplexPrivate priv1(7.0, 8.0);
    ComplexPrivate priv2;

    cout << "Ââåä³òü êîîðäèíàòè äëÿ îá'ºêòà priv2:" << endl;
    cin >> priv2;

    cout << "\nÂè ââåëè priv2: " << priv2 << endl;
    cout << "Çíà÷åííÿ priv1: " << priv1 << endl;

    ComplexPrivate privSum = priv1 + priv2;
    cout << "Ñóìà priv1 + priv2 = " << privSum << endl;


    cout << "\n=== 3. ÄÅÌÎÍÑÒÐÀÖ²ß ÐÎÇÌ²Ð²Â ÊËÀÑÓ (sizeof) ===" << endl;
    cout << "Ðîçì³ð Complex (áàçîâèé): " << sizeof(Complex) << " áàéò" << endl;
    cout << "Ðîçì³ð ComplexPublic: " << sizeof(ComplexPublic) << " áàéò" << endl;
    cout << "Ðîçì³ð ComplexPrivate: " << sizeof(ComplexPrivate) << " áàéò" << endl;
    cout << "Ðîçì³ð êëàñó ç #pragma pack(1): " << sizeof(ComplexPacked) << " áàéò" << endl;

    return 0;
}