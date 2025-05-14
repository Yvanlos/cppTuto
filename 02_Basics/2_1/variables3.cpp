#include <iostream>
// was für ein Werte Bereich brauche ich in meine Variable
int main()
{
    // 1 Byte = 8 bit
    bool my_bool1 = true;
    bool my_bool2 = false;

    // 1 Byte = 8 Bit (2^8 = 256) mögliche Werte
    // von -128 bis +128
    char my_char = 10;

    //Geeignet um integer darzustellen
    // 2 Byte = 16 Bit (2^16 ca. 65.000)
    short my_short = 300;

    //Geeignet für Integer
    // 4 Byte = 32 Bit (2^32^ca. 4.000.000.000)
    int my_int = 100'000; // ' ersetzt den comma oder .

    // 8 Byte = 64 Bit (2^64 ca. viel) 
    //Z.B. Arbeitsspeicher aus 64 Bit kann 2^64 mögliche adresse haben.
    long long my_ll = 5'000'000'000;

    // 4 Bte = 32 Bit
    float my_float = 10.0;

    // 8 Byte = 64 Bit
    double my_double = 10.0;

    return 0;
}