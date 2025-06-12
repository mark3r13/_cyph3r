#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <ctime>
#include <conio.h>
#include <cstring>
#include <random>

using namespace std;

#define MAX_LEN 101
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

time_t timestamp;

void getTime() {
    time(&timestamp);
    ctime(&timestamp);
}

ifstream cr1("p466");

int choice, ctb6 = 0;
char b1[82];

void clearTerminal() {
    #ifdef _WIN32
        system("cls");      // Windows
    #else
        system("clear");    // Linux / macOS
    #endif
}

int navigateMenu() {
    int option = 1;
    int ch;

    while (1) {
        clearTerminal();
        cout << GREEN << "   ________________________________\n";
        cout << GREEN << "  |                                \n";
        cout << GREEN << "  |" << RESET << "      _cyph3r" << RESET << " \n";
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |" << RESET << "              by                \n";
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |" << RESET << "             M4$50              \n";
        cout << GREEN << "  |" << RESET << "             &%()               \n";
        cout << GREEN << "  |________________________________\n" << RESET;
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |" << RESET << "           *--Menu--*           \n";
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |" << RESET << "     " << (option == 1 ? GREEN "->" RESET : "  ") << " 1. 3ncrp7           \n";
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |" << RESET << "     " << (option == 2 ? GREEN "->" RESET : "  ") << " 2. p4%$                 \n";
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |" << RESET << "     " << (option == 3 ? GREEN "->" RESET : "  ") << " 3. 3x7                 \n";
        cout << GREEN << "  |" << RESET << "                                \n";
        cout << GREEN << "  |________________________________\n" << RESET;

        ch = getch();
        if (ch == 224) {
            ch = getch();
            if (ch == 72 && option > 1) option--;
            if (ch == 80 && option < 3) option++;
        } else if (ch == 13) {
            return option;
        }
    }
}

void choose() {
    choice = navigateMenu();
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

void hC7(int *nk) {
    (*nk)++;
    if(*nk > 9)
        (*nk) %= 10;
}

void bs(char *s[]) {
    cr1 >> *s;
}

int b3() {
    int k;
    std::random_device rd;
    k = rd();
    k %= 82;
    if(k < 0)
        k = -k;
    return k;
}

void b4() {
    ctb6++;
    if(ctb6 == 1)
        cr1 >> b1;
    cout << b1 << endl;
}

void p467(int ml) {
    b4();
    char s33d00[11] = "$jd&2)-4&L";
    int mi = 0;
    getTime();
    for(int i = 0; i < ml; i++) {
        cout << b1[b3()];
        hC7(&mi);
    }
    cout << endl;
}

void p466() {
    cout << "n# -f cars :: ";
    int n0;
    cin >> n0;
    cout << endl;
    p467(n0);
    getchar();
}

int main() {
    char s[MAX_LEN];

    do {
        choose();

        switch(choice) {
            case 1: //3ncrp7
                clearTerminal();
                cout << "_3ncrp7:" << endl;
                getchar();
                break;
            case 2: //p4%$
                clearTerminal();
                p466();
                getchar();
                clearTerminal();
                break;
            case 3: //3x7
                clearTerminal();
                cout << "_ex1tng.(.." << endl;
                getchar();
                clearTerminal();
                break;
            default:
                clearTerminal();
                cout << "438FHejaoiOIIO(($))" << endl;
                getchar();
                clearTerminal();
                break;
        }
    } while(choice != 3);

    // while(true) {
    //     choose();
        
    //     // cin.getline(s, MAX_LEN);
    //     // cout << "Encrypted string :: " << _3nc4yp7(12, s);

    //     getchar();
    // }

    return 0;
}