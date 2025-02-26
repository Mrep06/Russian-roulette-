#include <iostream>
#include <string>
#include <locale>
using namespace std;
void drawscena(int player,string action,int alive = 1){
    if(action == "PLAYCARD"){
        switch(player){
            case 1:
                cout << endl;
                cout << "        XXXXXXXXX        " << endl;
                cout << "     XXX         XXX     " << endl;
                cout << "   XX               XX   " << endl;
                cout << "  X                   X  " << endl;
                cout << " X      X       X      X " << endl;
                cout << "X      XXX     XXX      X" << endl;
                cout << "X       X       X       X" << endl;
                cout << "X                       X" << endl;
                cout << " X                     X " << endl;
                cout << "  X      XXXXXXX      X  " << endl;
                cout << "   XX               XX   " << endl;
                cout << "     XXX         XXX     " << endl;
                cout << "        XXXXXXXXX        " << endl;
                cout << "           X  X          " << endl;
                cout << "       XXXXXXXXXXXX      " << endl;
                cout << "    XXX            XXX   " << endl;
                cout << "   X                  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << endl;
                break;
                    
            case 2:
                cout << endl;
                cout << "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    " << endl;
                cout << "    X                            X    " << endl;
                cout << "    X                            X    " << endl;
                cout << "XXXXX    XXXXX          XXXXX    XXXXX" << endl;
                cout << "X   X    X   X          X   X    X   X" << endl;
                cout << "X   X    X   X          X   X    X   X" << endl;
                cout << "X   X    XXXXX          XXXXX    X   X" << endl;
                cout << "XXXXX                            XXXXX" << endl;
                cout << "    X         XXXXXXXXXX         X    " << endl;
                cout << "    X                            X    " << endl;
                cout << "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    " << endl;
                cout << "                 X  X                  " << endl;
                cout << "           XXXXXXXXXXXXXXXX           " << endl;
                cout << "        XXXX              XXXX        " << endl;
                cout << "        X  X              X  X        " << endl;
                cout << "        XXXX              XXXX        " << endl;
                cout << "        X  X              X  X        " << endl;
                cout << "        X  X              X  X        " << endl;
                cout << "        XXXX              XXXX        " << endl;
                cout << "        X  X  XXXXXXXXXX  X  X        " << endl;
                cout << "        X  X  X        X  X  X        " << endl;
                cout << "        X  X  X        X  X  X        " << endl;
                cout << "        XXXXXXXXXXXXXXXXXXXXXX        " << endl;
                cout << endl;
                break;
            case 3:
                cout << endl;
                cout << "            X            " << endl;
                cout << "           X X           " << endl;
                cout << "         XX   XX         " << endl;
                cout << "        X       X        " << endl;
                cout << "       X         X       " << endl;
                cout << "     XX  O     O  XX     " << endl;
                cout << "    X               X    " << endl;
                cout << "   X      -----      X   " << endl;
                cout << " X                     X " << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "           X  X          " << endl;
                cout << "       XXXXXXXXXXXX      " << endl;
                cout << "    XXX            XXX   " << endl;
                cout << "   X                  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << endl;
                break;
            case 4:
                cout << endl;
                cout << " X                     X " << endl;
                cout << "X X                   X X" << endl;
                cout << "X  XXXXXXXXXXXXXXXXXXX  X" << endl;
                cout << "X                       X" << endl;
                cout << "X                       X" << endl;
                cout << "X      XXX     XXX      X" << endl;
                cout << "X                       X" << endl;
                cout << " X                     X " << endl;
                cout << "  X      XXXXXXX      X  " << endl;
                cout << "   XX               XX   " << endl;
                cout << "     XXX         XXX     " << endl;
                cout << "        XXXXXXXXX        " << endl;
                cout << "           X  X          " << endl;
                cout << "       XXXXXXXXXXXX      " << endl;
                cout << "    XXX            XXX   " << endl;
                cout << "   X                  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << "   X  X            X  X  " << endl;
                cout << endl;
                break;
        }        
    }
    
    if(action == "CHALLENGE"){
        if(alive == 1){
            switch(player){
                case 1:
                wcout << endl;
                wcout << L"        XXXXXXXXX                   " << endl;
                wcout << L"     XXX         XXX                " << endl;
                wcout << L"   XX               XX              " << endl;
                wcout << L"  X                   X             " << endl;
                wcout << L" X      X       X      X           " << endl;
                wcout << L"X      XXX     XXX      X          /" << endl;
                wcout << L"X       X       X   l-------------/ " << endl;
                wcout << L"X                   l-----l----   l " << endl;
                wcout << L" X                     X  \\--l-l  l " << endl;
                wcout << L"  X      XXXXXXX      X      X\\l  l " << endl;
                wcout << L"   XX               XX       X lXXl " << endl;
                wcout << L"     XXX         XXX         X   X  " << endl;
                wcout << L"        XXXXXXXXX            X   X  " << endl;
                wcout << L"           X  X             XX   X  " << endl;
                wcout << L"       XXXXXXXXXXXXXXXXXXXXXX    X  " << endl;
                wcout << L"    XXX                         XX " << endl;
                wcout << L"   X               XXXXXXXXXXXXXX  " << endl;
                wcout << L"   X  X            X                " << endl;
                wcout << L"   X  X            X                " << endl;
                wcout << L"   X  X            X                " << endl;
                wcout << L"   X  X            X                " << endl;
                wcout << L"   X  X            X                " << endl;
                wcout << L"   X  X            X                " << endl;
                wcout << endl;
                
                    break;
                case 2:
                    wcout << endl;
                    wcout << L"    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX               " << endl;
                    wcout << L"    X                            X               " << endl;
                    wcout << L"    X                            X               " << endl;
                    wcout << L"XXXXX    XXXXX          XXXXX    XXXXX           /" << endl;
                    wcout << L"X   X    X   X          X   X    X   Xl---------/ " << endl;
                    wcout << L"X   X    X   X          X   X    X   Xl----\\    l" << endl;
                    wcout << L"X   X    XXXXX          XXXXX    X   X      \\l  l" << endl;
                    wcout << L"XXXXX                            XXXXX       l  l" << endl;
                    wcout << L"    X         XXXXXXXXXX         X          XXXXX" << endl;
                    wcout << L"    X                            X          X   X" << endl;
                    wcout << L"    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX          X   X" << endl;
                    wcout << L"                 X  X                       X   X" << endl;
                    wcout << L"           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   X" << endl;
                    wcout << L"        XXXX              X                     X" << endl;
                    wcout << L"        X  X              XXXXXXXXXXXXXXXXXXXXXXX" << endl;
                    wcout << L"        XXXX              X                       " << endl;
                    wcout << L"        X  X              X                       " << endl;
                    wcout << L"        X  X              X                       " << endl;
                    wcout << L"        XXXX              X                       " << endl;
                    wcout << L"        X  X  XXXXXXXXXX  X                       " << endl;
                    wcout << L"        X  X  X        X  X                       " << endl;
                    wcout << L"        X  X  X        X  X                       " << endl;
                    wcout << L"        XXXXXXXXXXXXXXXXXXX                      " << endl;
                    wcout << endl;
                
                
                    break;
                case 3:
                    wcout << endl;
                    wcout << L"            X            " << endl;
                    wcout << L"           X X           " << endl;
                    wcout << L"         XX   XX                  /" << endl;
                    wcout << L"        X       X  l-------------/" << endl;
                    wcout << L"       X         X l-----l----   l " << endl;
                    wcout << L"     XX  O     O  XX     \\--l-l  l" << endl;
                    wcout << L"    X               X       X\\l  l" << endl;
                    wcout << L"   X      -----      X      X lXXl" << endl;
                    wcout << L" X                     X    X    X" << endl;
                    wcout << L"XXXXXXXXXXXXXXXXXXXXXXXXX   X    X" << endl;
                    wcout << L"           X  X            XX    X" << endl;
                    wcout << L"       XXXXXXXXXXXXXXXXXXXXX     X" << endl;
                    wcout << L"    XXX                         XX" << endl;
                    wcout << L"   X                XXXXXXXXXXXX" << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << endl;

                    break;
                case 4:
                    wcout << endl;
                    wcout << L" X                     X          " << endl;
                    wcout << L"X X                   X X           " << endl;
                    wcout << L"X  XXXXXXXXXXXXXXXXXXX  X" << endl;
                    wcout << L"X                       X           " << endl;
                    wcout << L"X                       X         " << endl;
                    wcout << L"X      XXX     XXX      X          /" << endl;
                    wcout << L"X                   l-------------/ " << endl;
                    wcout << L"X                   l-----l----   l " << endl;
                    wcout << L" X                     X  \\--l-l  l " << endl;
                    wcout << L"  X      XXXXXXX      X      X\\l  l " << endl;
                    wcout << L"   XX               XX       X lXXl " << endl;
                    wcout << L"     XXX         XXX         X   X  " << endl;
                    wcout << L"        XXXXXXXXX            X   X  " << endl;
                    wcout << L"           X  X             XX   X  " << endl;
                    wcout << L"       XXXXXXXXXXXXXXXXXXXXXX    X  " << endl;
                    wcout << L"    XXX                         XX " << endl;
                    wcout << L"   X               XXXXXXXXXXXXXX  " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << endl;
                    break;
            }    
        }
        
        else{
            switch(player){
                case 1:
                wcout << endl;
                    wcout << L"        XXXXXXXXX                   " << endl;
                    wcout << L"     XXX         XXX                " << endl;
                    wcout << L"   XX               XX              " << endl;
                    wcout << L"  X                   X             " << endl;
                    wcout << L" X     X X     X X   X              " << endl;
                    wcout << L"X       X       X   X             /" << endl;
                    wcout << L"X      X X     X X  l------------/ " << endl;
                    wcout << L"X                   l-----l----   l " << endl;
                    wcout << L" X                  X     \\--l-l  l " << endl;
                    wcout << L"  X      XXXXXXX     X       X\\l  l " << endl;
                    wcout << L"   XX       X X     XX       X lXXl " << endl;
                    wcout << L"     XXX     X   XXX         X   X  " << endl;
                    wcout << L"        XXXXXXXXX            X   X  " << endl;
                    wcout << L"           X  X             XX   X  " << endl;
                    wcout << L"       XXXXXXXXXXXXXXXXXXXXXX    X  " << endl;
                    wcout << L"    XXX            X            XX " << endl;
                    wcout << L"   X               XXXXXXXXXXXXXX  " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << endl;
                    break;
                
                case 2:
                    wcout << endl;
                    wcout << L"    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX               " << endl;
                    wcout << L"    X                           XX               " << endl;
                    wcout << L"    X                          XX                " << endl;
                    wcout << L"XXXXX    XXXXX          XXXXX  X                  " << endl;
                    wcout << L"X   X    XXXXX          XXXXX XX      l----------/ " << endl;
                    wcout << L"X   X    XXXXX          XXXXX X       l----\\    l" << endl;
                    wcout << L"X   X    XXXXX          XXXXX XX            \\l  l" << endl;
                    wcout << L"XXXXX                          XXX           l  l" << endl;
                    wcout << L"    X         XXXXXXXXXX        XX          XXXXX" << endl;
                    wcout << L"    X                           XX          X   X" << endl;
                    wcout << L"    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX          X   X" << endl;
                    wcout << L"                 X  X                       X   X" << endl;
                    wcout << L"           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   X" << endl;
                    wcout << L"        XXXX              X                     X" << endl;
                    wcout << L"        X  X              XXXXXXXXXXXXXXXXXXXXXXX" << endl;
                    wcout << L"        XXXX              X                       " << endl;
                    wcout << L"        X  X              X                       " << endl;
                    wcout << L"        X  X              X                       " << endl;
                    wcout << L"        XXXX              X                       " << endl;
                    wcout << L"        X  X  XXXXXXXXXX  X                       " << endl;
                    wcout << L"        X  X  X        X  X                       " << endl;
                    wcout << L"        X  X  X        X  X                       " << endl;
                    wcout << L"        XXXXXXXXXXXXXXXXXXX                      " << endl;
                    wcout << endl;
                    break;
                case 3:
                    wcout << endl;
                    wcout << L"            X            " << endl;
                    wcout << L"           X X           " << endl;
                    wcout << L"         XX   X                    /" << endl;
                    wcout << L"        X    X      l-------------/" << endl;
                    wcout << L"       X      X     l-----l----   l " << endl;
                    wcout << L"     XX  X      XXXX     \\--l-l  l" << endl;
                    wcout << L"    X               X       X\\l  l" << endl;
                    wcout << L"   X      -----       X      X lXXl" << endl;
                    wcout << L" X                     X    X    X" << endl;
                    wcout << L"XXXXXXXXXXXXXXXXXXXXXXXXX   X    X" << endl;
                    wcout << L"           X  X            XX    X" << endl;
                    wcout << L"       XXXXXXXXXXXXXXXXXXXXX     X" << endl;
                    wcout << L"    XXX                         XX" << endl;
                    wcout << L"   X                XXXXXXXXXXXX" << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << L"   X  X            X  " << endl;
                    wcout << endl;

                    break;
                case 4:
                    wcout << endl;
                    wcout << L" X                                      " << endl;
                    wcout << L"X X                                 " << endl;
                    wcout << L"X  XXXXXXXXXXXXXXXXXX              XX              " << endl;
                    wcout << L"X                 X                 " << endl;
                    wcout << L"X      X X     X X                   " << endl;
                    wcout << L"X       X       X                   /" << endl;
                    wcout << L"X      X X     X X  l--------------/ " << endl;
                    wcout << L"X                X  l----------    l " << endl;
                    wcout << L" X                XXX     \\--l-l  l " << endl;
                    wcout << L"  X      XXXXXXX     X       X\\l  l " << endl;
                    wcout << L"   XX       X X     XX       X lXXl " << endl;
                    wcout << L"     XXX     X   XXX         X   X  " << endl;
                    wcout << L"        XXXXXXXXX            X   X  " << endl;
                    wcout << L"           X  X             XX   X  " << endl;
                    wcout << L"       XXXXXXXXXXXXXXXXXXXXXX    X  " << endl;
                    wcout << L"    XXX            X            XX " << endl;
                    wcout << L"   X               XXXXXXXXXXXXXX  " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << L"   X  X            X                " << endl;
                    wcout << endl;

                    break;
            }    
        }
    }
    
    if(action == "WIN"){
        switch(player){
            case 1:
                cout << endl;
                cout << "                   XXXXXXXXX                    " << endl;
                cout << "                XXX         XXX                " << endl;
                cout << "              XX               XX              " << endl;
                cout << "             X                   X             " << endl;
                cout << "  XXX       X      X       X      X       XXX  " << endl;
                cout << " XX XX     X      XXX     XXX      X     XX XXX" << endl;
                cout << "XX   XX    X       X       X       X    XX    X" << endl;
                cout << " XX   XX   X                       X    X    X " << endl;
                cout << "  XX   XXX  X                     X    XX   XX " << endl;
                cout << "   XX    XX  X     XX      XX    X    XX  XXX " << endl;
                cout << "    XX    XX  XX    XXXXXXXX   XX   XX   XX   " << endl;
                cout << "      X    XX   XXX         XXX    XX   XX    " << endl;
                cout << "      XX    XX     XXXXXXXXX     XX   XXX     " << endl;
                cout << "       XXX   XXX      X  X      XX   XX        " << endl;
                cout << "         XX    XXXXXXXXXXXXXXXXX   XXX          " << endl;
                cout << "          XXX                    XXX           " << endl;
                cout << "            XXX                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << endl;
                break;
            case 2:
                wcout << endl;
                wcout << L"--     --       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        --     --" << endl;
                wcout << L"ll     ll       X                            X        ll     ll" << endl;
                wcout << L"---------       X                            X        ---------" << endl;
                wcout << L"   X  X     XXXXX    XXXXX          XXXXX    XXXXX      X  X   " << endl;
                wcout << L"   X  X     X   X    X   X          X   X    X   X      X  X   " << endl;
                wcout << L"   X  X     X   X    X   X          X   X    X   X      X  X   " << endl;
                wcout << L"   X  X     X   X    XXXXX          XXXXX    X   X      XXXX   " << endl;
                wcout << L"   XXXX     XXXXX         X        X         XXXXX      X  X   " << endl;
                wcout << L"   X  X         X         XXXXXXXXXX         X          X  X   " << endl;
                wcout << L"   X  X         X                            X          X  X   " << endl;
                wcout << L"   XXXX         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX          XXXX   " << endl;
                wcout << L"   X  X                      X  X                       X  X   " << endl;
                wcout << L"   X  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  X   " << endl;
                wcout << L"   X      X    X       X              X      X       X     X   " << endl;
                wcout << L"   XXXXXXXXXXXXXXXXXXXXX              XXXXXXXXXXXXXXXXXXXXXX   " << endl;
                wcout << L"                       X              X                        " << endl;
                wcout << L"                       X              X                        " << endl;
                wcout << L"                       X              X                        " << endl;
                wcout << L"                       X              X                        " << endl;
                wcout << L"                       X  XXXXXXXXXX  X                        " << endl;
                wcout << L"                       X  X        X  X                        " << endl;
                wcout << L"                       X  X        X  X                        " << endl;
                wcout << L"                       XXXXXXXXXXXXXXXX                        " << endl;
                wcout << endl;
            

                break;
            case 3:
                cout << endl;
                cout << "                        X               " << endl;
                cout << "                       X  X                    " << endl;
                cout << "                     X      X                   " << endl;
                cout << "                   XX        XX                 " << endl;
                cout << "  XXX             X            X            XXX  " << endl;
                cout << " XX XX          X                X        XX XX" << endl;
                cout << "XX   XX        X                  X      XX   X" << endl;
                cout << " XX   XX     XX    O          O    XX   XX   XX " << endl;
                cout << "  XX   XXX  X                        X XX   XX " << endl;
                cout << "   XX    XX         ________/         XXX  XXX " << endl;
                cout << "    XX    XX                          XX   XX   " << endl;
                cout << "      X    XX                       XX   XX    " << endl;
                cout << "      XX    XXXXXXXXXXXXXXXXXXXXXXXX   XXX     " << endl;
                cout << "       XXX   XXX      X  X      XX   XX        " << endl;
                cout << "         XX    XXXXXXXXXXXXXXXXX   XXX          " << endl;
                cout << "          XXX                    XXX           " << endl;
                cout << "            XXX                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << endl;

                break;
            case 4:
                cout << endl;
                cout << "            X                     X            " << endl;
                cout << "           X X                   X X           " << endl;
                cout << "           X  XXXXXXXXXXXXXXXXXXX  X           " << endl;
                cout << "           X                       X           " << endl;
                cout << "  XXX      X      XX       XX      X      XXX  " << endl;
                cout << " XX XX     X     X  X     X  X     X     XX  XX" << endl;
                cout << "XX   XX    X        X     X        X    XX    X" << endl;
                cout << " XX   XX   X                       X    X    X " << endl;
                cout << "  XX   XXX  X                     X    XX   XX " << endl;
                cout << "   XX    XX  X     X        X    X    XX  XXX " << endl;
                cout << "    XX    XX  XX    XXXXXXXX   XX   XX   XX   " << endl;
                cout << "      X    XX   XXX         XXX    XX   XX    " << endl;
                cout << "      XX    XX     XXXXXXXXX     XX   XXX     " << endl;
                cout << "       XXX   XXX     X   X      XX   XX        " << endl;
                cout << "         XX    XXXXXXXXXXXXXXXXX   XXX          " << endl;
                cout << "          XXX                    XXX           " << endl;
                cout << "            XXX                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << "              X                  X              " << endl;
                cout << endl;

                break;
        }        
    }
}
    
