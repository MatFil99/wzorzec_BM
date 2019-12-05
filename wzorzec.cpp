#include "wzorzec.h"
#include <iostream>


void createLast(int* Last, string p, int size){
    for(int i=0; i<size;++i){
        Last[i] = -1;
    }
    for(int i = 0; i<p.length(); ++i){
        Last[(int)p[i] - 65] = i;
    }
}

void writeLast(int* Last, int size){
    for(int i = 0; i<size; ++i){
        cout<<"\t"<<Last[i];
        if((i+1)%10 == 0){
            cout<<"\n";
        }
    }
}

void szukanieWzorca( string s, string p){
    int Last[58];
    createLast(Last, p, 58);
    int i=0, j=0;
    int pp = -1; // pozycja wzorca p w lancuchu s
    int m = p.length(); // dlugosc wzorca p
    int n = s.length(); // dlugosc lancucha s
    while(i<= n-m){
        j = m-1;
        while(j>-1 && p[j] == s[j+i]){
            j = j-1;
        }
        if (j>-1){
            i = i + max<int>(1, j-Last[(int)s[i+j] - 65]);
        }else
        {
            pp = i;
            cout<<pp<<"\t";
            i = i+1;
        }
        
    }
    if(pp = -1) cout<<"-1";
}