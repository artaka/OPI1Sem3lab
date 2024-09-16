//MyshkovetsArtem2007 
//Win-1251: 4D 79 73 68 6B 6F 76 65 74 73 41 72 74 65 6D 32 30 30 37
//UTF-8: 4D 79 73 68 6B 6F 76 65 74 73 41 72 74 65 6D 32 30 30 37
//UTF-16: 004D 0079 0073 0068 006B 006F 0076 0065 0074 0073 0041 0072 0074 0065 006D 0032 0030 0030 0037
//МышковецАртёмВитальевич2007
//Win-1251: CC FB F8 EA EE E2 E5 F6 C0 F0 F2 B8 EC C2 E8 F2 E0 EB FC E5 E2 E8 F7 32 30 30 37
//UTF-8: D0 9C D1 8B D1 88 D0 BA D0 BE D1 86 D0 90 D1 80 D1 82 D0 B5 D0 BC D0 B2 D0 B8 D1 87 D0 B8 D0 B2 D0 B8 D1 87 32 30 30 37
//UTF-16: 041C 044B 0448 043A 043E 0432 0435 0446 0410 0440 0442 0450 043C 0412 0438 0442 0430 043B 044C 0435 0432 0438 0447 0032 0030 0030 0037
//Мышковец2007Artem
//Win-1251: CC FB F8 EA EE E2 E5 F6 32 30 30 37 41 72 74 65 6D
//UTF-8: D0 9C D1 8B D1 88 D0 BA D0 BE D1 86 32 30 30 37 41 72 74 65 6D
//UTF-16: 041C 044B 0448 043A 043E 0432 0435 0446 0032 0030 0030 0037 0041 0072 0074 0065 006D
#include <iostream>

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "MyshkovetsArtem2007";
    char rfie[] = "МышковецАртёмВитальевич2007";
    char lr[] = "Мышковец2007Artem";

    wchar_t Lfie[] = L"MyshkovetsArtem2007";
    wchar_t Rfie[] = L"МышковецАртёмВитальевич2007";
    wchar_t LR[] = L"Мышковец2007Artem";
    std::cout << hello << lfie << std::endl;
    return 0;
}