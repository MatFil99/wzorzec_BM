#include <iostream>
#include "wzorzec.h"
using namespace std;


int main(){
    int Last[58];
    string a = "Kotekuuukotekukotekot";
    //createLast(Last, a, 58);
    //writeLast(Last, 58);
    szukanieWzorca(a, "uu");
    return 0;
}