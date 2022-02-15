#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string convertToString(char* a, int size)
{
    char az[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
              'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
              '0','1','2','3','4','5','6','7','8','9','(',')',' ','-','_','.','&',',','@','/'};
    string s = "";

    bool det = false;
    if (a[0] != '%') {
        s = s + a[0];
        det = true;
    }
    if (det) {
        for (int i = 1; i < size; i++) {
            if (a[i] == '%') {
                break;
            }
            else {
                for (int j = 0; j < sizeof(az); j++) {
                    if (a[i] == az[j]) {
                        s = s + a[i];
                    }
                }
            }
        }   
    } 
    return s;
}

string generarUsuario(char* a, int size)
{
    char num[] = {'0','1','2','3','4','5','6','7','8','9'};
    string usuario;
    int i = 0;
    while(a[i]!=' '){
        char s;
        s = tolower(a[i]);
        usuario = usuario + s;
        i = i + 1;
    }
    while (i < size-1) {
        int x = rand() % 10;
        usuario = usuario + num[x];
        i = i + 1;
    }
    usuario = usuario + '%';
    return usuario;
}

string generarContrasenia() {
    string contrasenia;
    char az[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
              '0','1','2','3','4','5','6','7','8','9'};
    for (int i = 0; i < 10; i++) {
        int x = rand() % 36;
        contrasenia = contrasenia + az[x];
    }
    return contrasenia;
}

string IntToString(int number) {
    std::ostringstream buff;
    buff << number;
    return buff.str();
}