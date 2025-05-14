#include <iostream>
#include<cstdint>

int main()
{

    /**
     * Wenn man alter 0 - 200 speichern wollen
     dafür braucht man 8bit Speicher und das ist gut für char 1byte im vergleich mit int die 4 Byte groß sind 
     mit int würden wir den Speicher vergolden.
     Es git mehrere Integer Type, die genutzt werden können
     en.cppreference.com/w/cpp/types/integer
     *jenachdem wie viel Werte wir speichern wollen müssen wir den Datenytpe aufpassen   
     */   

    std::uint8_t i1= 1;  
    std::uint16_t j1 = 1;
    std::uint32_t k1 = 1;
    std::uint64_t l1 = 1;
    
    std::int8_t i2 = 1;
    std::int16_t j2 = 1;
    std::int32_t k2 = 1;
    std::int64_t l2 = 1;

    return 0;
}