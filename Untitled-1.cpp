
#include <iostream>
#include <string>
using namespace std;
void drawscena(int player,string action,bool alive = TRUE){
    if(action == "PLAYCARD"){
        switch(player){
            case 1:
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
                break;
                    
            case 2:
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
                break;
            case 3:
            
                break;
            case 4:
            
                break;
        }        
    }
    
    if(action == "CHALLENGE"){
        if(alive){
            switch(player){
                case 1:
                    cout << "        XXXXXXXXX                   " << endl;
                    cout << "     XXX         XXX                " << endl;
                    cout << "   XX               XX              " << endl;
                    cout << "  X                   X             " << endl;
                    cout << " X      X       X      X           " << endl;
                    cout << "X      XXX     XXX      X          /" << endl;
                    cout << "X       X       X   │─────────────/ " << endl;
                    cout << "X                   │──── │────   │ " << endl;
                    cout << " X                     X  \\──│─│  │ " << endl;
                    cout << "  X      XXXXXXX      X      X\\│  │ " << endl;
                    cout << "   XX               XX       X │XX│ " << endl;
                    cout << "     XXX         XXX         X   X  " << endl;
                    cout << "        XXXXXXXXX            X   X  " << endl;
                    cout << "           X  X             XX   X  " << endl;
                    cout << "       XXXXXXXXXXXXXXXXXXXXXX    X  " << endl;
                    cout << "    XXX            X            XX " << endl;
                    cout << "   X               XXXXXXXXXXXXXX  " << endl;
                    cout << "   X  X            X                " << endl;
                    cout << "   X  X            X                " << endl;
                    cout << "   X  X            X                " << endl;
                    cout << "   X  X            X                " << endl;
                    cout << "   X  X            X                " << endl;
                    cout << "   X  X            X                " << endl;
                
                    break;
                case 2:
                        cout << "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX               " << endl;
                        cout << "    X                            X               " << endl;
                        cout << "    X                            X               " << endl;
                        cout << "XXXXX    XXXXX          XXXXX    XXXXX          " << endl;
                        cout << "X   X    X   X          X   X    X   X│─────────/ " << endl;
                        cout << "X   X    X   X          X   X    X   X│────\\    │" << endl;
                        cout << "X   X    XXXXX          XXXXX    X   X      \\│  │" << endl;
                        cout << "XXXXX                            XXXXX       │  │" << endl;
                        cout << "    X         XXXXXXXXXX         X          XXXXX" << endl;
                        cout << "    X                            X          X   X" << endl;
                        cout << "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX          X   X" << endl;
                        cout << "                 X  X                       X   X" << endl;
                        cout << "           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   X" << endl;
                        cout << "        XXXX              X                     X" << endl;
                        cout << "        X  X              XXXXXXXXXXXXXXXXXXXXXXX" << endl;
                        cout << "        XXXX              X                       " << endl;
                        cout << "        X  X              X                       " << endl;
                        cout << "        X  X              X                       " << endl;
                        cout << "        XXXX              X                       " << endl;
                        cout << "        X  X  XXXXXXXXXX  X                       " << endl;
                        cout << "        X  X  X        X  X                       " << endl;
                        cout << "        X  X  X        X  X                       " << endl;
                        cout << "        XXXXXXXXXXXXXXXXXXX                      " << endl;

                
                    break;
                case 3:
                
                    break;
                case 4:
                
                    break;
            }    
        }
        
        else{
            switch(player){
                case 1:
                cout << "        XXXXXXXXX                   " << endl;
                cout << "     XXX         XXX                " << endl;
                cout << "   XX               XX              " << endl;
                cout << "  X                   X             " << endl;
                cout << " X     X X     X X   X              " << endl;
                cout << "X       X       X   X             /" << endl;
                cout << "X      X X     X X  │─────────────/ " << endl;
                cout << "X                   │──── │────   │ " << endl;
                cout << " X                  X     \\──│─│  │ " << endl;
                cout << "  X      XXXXXXX     X       X\\│  │ " << endl;
                cout << "   XX       X X     XX       X │XX│ " << endl;
                cout << "     XXX     X   XXX         X   X  " << endl;
                cout << "        XXXXXXXXX            X   X  " << endl;
                cout << "           X  X             XX   X  " << endl;
                cout << "       XXXXXXXXXXXXXXXXXXXXXX    X  " << endl;
                cout << "    XXX            X            XX " << endl;
                cout << "   X               XXXXXXXXXXXXXX  " << endl;
                cout << "   X  X            X                " << endl;
                cout << "   X  X            X                " << endl;
                cout << "   X  X            X                " << endl;
                cout << "   X  X            X                " << endl;
                cout << "   X  X            X                " << endl;
                cout << "   X  X            X                " << endl;
                
                    break;
                
                case 2:
                    cout << "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX               " << endl;
                    cout << "    X                           XX               " << endl;
                    cout << "    X                          XX                " << endl;
                    cout << "XXXXX    XXXXX          XXXXX  X                  " << endl;
                    cout << "X   X    XXXXX          XXXXX XX      │─────────/ " << endl;
                    cout << "X   X    XXXXX          XXXXX X       │────\\    │" << endl;
                    cout << "X   X    XXXXX          XXXXX XX            \\│  │" << endl;
                    cout << "XXXXX                          XXX           │  │" << endl;
                    cout << "    X         XXXXXXXXXX        XX          XXXXX" << endl;
                    cout << "    X                           XX          X   X" << endl;
                    cout << "    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX          X   X" << endl;
                    cout << "                 X  X                       X   X" << endl;
                    cout << "           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   X" << endl;
                    cout << "        XXXX              X                     X" << endl;
                    cout << "        X  X              XXXXXXXXXXXXXXXXXXXXXXX" << endl;
                    cout << "        XXXX              X                       " << endl;
                    cout << "        X  X              X                       " << endl;
                    cout << "        X  X              X                       " << endl;
                    cout << "        XXXX              X                       " << endl;
                    cout << "        X  X  XXXXXXXXXX  X                       " << endl;
                    cout << "        X  X  X        X  X                       " << endl;
                    cout << "        X  X  X        X  X                       " << endl;
                    cout << "        XXXXXXXXXXXXXXXXXXX                      " << endl;
                    break;
                case 3:
                
                    break;
                case 4:
                
                    break;
            }    
        }
    }
    
    if(action == "WIN"){
        switch(player){
            case 1:
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
                break;
            case 2:
                cout << "──     ──       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        ──     ──" << endl;
                cout << "││     ││       X                            X        ││     ││" << endl;
                cout << "─────────       X                            X        ─────────" << endl;
                cout << "   X  X     XXXXX    XXXXX          XXXXX    XXXXX      X  X   " << endl;
                cout << "   X  X     X   X    X   X          X   X    X   X      X  X   " << endl;
                cout << "   X  X     X   X    X   X          X   X    X   X      X  X   " << endl;
                cout << "   X  X     X   X    XXXXX          XXXXX    X   X      XXXX   " << endl;
                cout << "   XXXX     XXXXX         X        X         XXXXX      X  X   " << endl;
                cout << "   X  X         X         XXXXXXXXXX         X          X  X   " << endl;
                cout << "   X  X         X                            X          X  X   " << endl;
                cout << "   XXXX         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX          XXXX   " << endl;
                cout << "   X  X                      X  X                       X  X   " << endl;
                cout << "   X  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  X   " << endl;
                cout << "   X      X    X       X              X      X       X     X   " << endl;
                cout << "   XXXXXXXXXXXXXXXXXXXXX              XXXXXXXXXXXXXXXXXXXXXX   " << endl;
                cout << "                       X              X                        " << endl;
                cout << "                       X              X                        " << endl;
                cout << "                       X              X                        " << endl;
                cout << "                       X              X                        " << endl;
                cout << "                       X  XXXXXXXXXX  X                        " << endl;
                cout << "                       X  X        X  X                        " << endl;
                cout << "                       X  X        X  X                        " << endl;
                cout << "                       XXXXXXXXXXXXXXXX                        " << endl;
                break;
            case 3:
            
                break;
            case 4:
            
                break;
        }        
    }
    
int main() {

    return 0;
}
