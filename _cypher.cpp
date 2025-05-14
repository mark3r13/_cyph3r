#include <iostream>
#include <cstring>

using namespace std;

#define MAX_LEN 101

int choice;

void clearTerminal() {
    #ifdef _WIN32
        system("cls");      // Windows
    #else
        system("clear");    // Linux / macOS
    #endif
}

void choose() {
    cin >> choice;
    getchar();
}

void menu() {
    cout << "Welcome to _cypher!! -- a simple en'\'de_cryption program" << endl;
    cout << "------------------------------------------------///" << endl;
    cout << endl << endl;

    cout << "Simply enter a string to be encrypted :: ";
}

char* _3nc4yp7(int KEY, char s[MAX_LEN]) {
    char* c = (char*) malloc(strlen(s) + 1);
    if(!c) return NULL;

    for(int i = 0; i < strlen(s); i++)
        c[i] = s[i] - KEY;
    c[strlen(s) + 1] = '\0';

    return c;
}

int main() {
    char s[MAX_LEN];

    while(true) {
        clearTerminal();
        menu();
        
        cin.getline(s, MAX_LEN);
        cout << "Encrypted string :: " << _3nc4yp7(12, s);

        getchar();
        getchar();
    }

    return 0;
}