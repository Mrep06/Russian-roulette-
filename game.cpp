#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits>
#include "Untitled-1.cpp"
#include <random>
#include <locale>
using namespace std;

vector<char> createDeck();
int countSurvivors(const vector<bool>& alive);
void displayHand(const vector<char>& hand);
void dealNewHands(vector<vector<char>>& hands, vector<char>& deck, int numPlayers);
void gameLoop(vector<string>& players, int numPlayers);
void playTurn(int currentPlayer, vector<vector<char>>& hands, vector<char>& deck, vector<string>& players, vector<bool>& alive, vector<char>& tableCards, vector<char>& discardedCards, int& roundCount, bool& changeRound, vector<int>& shootCount,int numPlayers);
bool challengePlayer(int currentPlayer, int nextPlayer, vector<char>& tableCards, vector<vector<char>>& hands, vector<string>& players, vector<bool>& alive, vector<char>& discardedCards, int& roundCount, vector<int>& shootCount);
void processChallenge(bool lying, int currentPlayer, int nextPlayer, vector<string>& players, vector<bool>& alive, int& roundCount, vector<int>& shootCount);
bool checkIfAllHandsEmpty(const vector<vector<char>>& hands);
void reshuffleDeck(vector<char>& deck, vector<char>& discardedCards);
bool checkIfHandEmpty(const vector<vector<char>>& hands,int currentPlayer);
void clearScreen() ;
   

int main() {
    srand(time(0));
    setlocale(LC_ALL, "");
    cout << "Welcome to Liar's Bar!" << endl;

    vector<string> players;
    int numPlayers;

    do {
        cout << "Enter number of players (2-4): ";
        cin >> numPlayers;
        cin.ignore();
    } while (numPlayers < 2 || numPlayers > 4);

    for (int i = 0; i < numPlayers; ++i) {
        clearScreen(); 
        string name;
        drawscena(i+1,"PLAYCARD");
        cout << "Enter name of player " << i + 1 << ": ";
        getline(cin, name);
        players.push_back(name);
    }

    gameLoop(players, numPlayers);

    cout << "Game over! Thanks for playing Liar's Bar." << endl;
    return 0;
}

vector<char> tableCards{'Q', 'K', 'A'};
bool changeRound = false;
char tableCard ;
void gameLoop(vector<string>& players, int numPlayers) {
    int currentPlayer = 0;
    bool gameRunning = true;
    vector<bool> alive(numPlayers, true);
    vector<char> discardedCards;
    int roundCount = 1;
    vector<vector<char>> hands(numPlayers); 
    vector<char> deck = createDeck();  // deck
    vector<int> shootCount(numPlayers, 0);  // เก็บจำนวนการยิงของผู้เล่นแต่ละคน

    tableCard = tableCards[rand() % tableCards.size()];
    clearScreen();   
    cout << "\n=== Round " << roundCount << " ===" << endl;
    cout << "The table card is set. Players must claim to play: " << tableCard << endl;
    dealNewHands(hands, deck, players.size());

    while (gameRunning) {
        int survivors = countSurvivors(alive);
        if (survivors == 1) {
            // แสดงผู้ชนะเมื่อเหลือผู้เล่นคนเดียว
            for (int i = 0; i < numPlayers; ++i) {
                if (alive[i]) {
                    cout << players[i] << " is the winner!" << endl;
                    drawscena(i+1,"WIN");
                    gameRunning = false;
                    break;
                }
            }
            break;
        }

        // ถ้ามีผู้เล่นยังเหลือ
        while (!alive[currentPlayer]) {
            currentPlayer = (currentPlayer + 1) % numPlayers;
        }

        playTurn(currentPlayer, hands, deck, players, alive, tableCards, discardedCards, roundCount, changeRound, shootCount, numPlayers);
        reshuffleDeck(deck, discardedCards);

        if (changeRound) {
            dealNewHands(hands, deck, numPlayers);
            reshuffleDeck(deck, discardedCards);

            roundCount++;
            if (roundCount > 1 && countSurvivors(alive) > 1) {
                tableCard = tableCards[rand() % tableCards.size()];
                
                cout << "\n=== Round " << roundCount << " ===" << endl;
                cout << "The table card is set. Players must claim to play: " << tableCard << endl;
               
            }
        }

        if (checkIfAllHandsEmpty(hands)) {
            cout << "\nAll hands are empty! Starting a new round..." << endl;
            tableCard = tableCards[rand() % tableCards.size()];
            dealNewHands(hands, deck, numPlayers);
            reshuffleDeck(deck, discardedCards);
            roundCount++;
            
            cout << "\n=== Round " << roundCount << " ===" << endl;
            cout << "The table card is set. Players must claim to play: " << tableCard << endl;
           
        }

        currentPlayer = (currentPlayer + 1) % numPlayers;
    }
}


void playTurn(int currentPlayer, vector<vector<char>>& hands, vector<char>& deck, vector<string>& players, vector<bool>& alive, vector<char>& tableCards, vector<char>& discardedCards, int& roundCount, bool& changeRound, vector<int>& shootCount,int numPlayers) {
    
    
    if (checkIfHandEmpty(hands , currentPlayer)){
        currentPlayer = (currentPlayer + 1) % numPlayers;
    }



    string player = players[currentPlayer];
    drawscena(currentPlayer+1,"PLAYCARD");
    cout << "\n" << player << "'s turn!" << endl;
    cout << "Your hand: ";
    displayHand(hands[currentPlayer]);



    int numCards;
    do {
        cout << "How many cards will you play (1-3)? ";
        while (!(cin >> numCards) || numCards < 1 || numCards > 3) {
            cout << "Invalid input! Please enter a number between 1 and 3: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (numCards < 1 || numCards > 3);



//การรับไพ่ที่ผู้เล่นต้องการลง และตรวจสอบว่าไพ่ที่เลือกเป็นไพ่ที่ผู้เล่นมีอยู่จริงหรือไม่ หากไม่มี จะให้ผู้เล่นกรอกใหม่   
    vector<char> inputCards;
    char cardInput;
    cout << "Enter the cards you claim to play (e.g., Q K A): ";
    cin.ignore();
    string input;
    getline(cin, input);
    stringstream ss(input);
    while (ss >> cardInput) {
        inputCards.push_back(cardInput);
    }

    bool valid = true;
    for (char card : inputCards) {
        if (find(hands[currentPlayer].begin(), hands[currentPlayer].end(), card) == hands[currentPlayer].end()) {
            valid = false;
            break;
        }
    }

    while (!valid || inputCards.size() != numCards) {
        cout << "You don't have those cards! Please enter valid cards (e.g., Q K A): ";
        getline(cin, input);
        cin.ignore();
        stringstream ss(input);
        inputCards.clear();
        while (ss >> cardInput) {
            inputCards.push_back(cardInput);
        }

        valid = true;
        for (char card : inputCards) {
            if (find(hands[currentPlayer].begin(), hands[currentPlayer].end(), card) == hands[currentPlayer].end()) {
                valid = false;
                break;
            }
        }
    }

    for (char card : inputCards) {
        hands[currentPlayer].erase(find(hands[currentPlayer].begin(), hands[currentPlayer].end(), card));
        discardedCards.push_back(card);
    }

    

    int nextPlayer = (currentPlayer + 1) % players.size();
    while (!alive[nextPlayer]) {
        nextPlayer = (nextPlayer + 1) % players.size();
    }
    clearScreen(); 
    cout << players[nextPlayer] << ", do you challenge " << players[currentPlayer] << "'s play? (X to challenge, any key to continue): ";
    char challenge;
    cin >> challenge;
    cin.ignore();

    if (challenge == 'X' || challenge == 'x') {
        if (challengePlayer(currentPlayer, nextPlayer, tableCards, hands, players, alive, discardedCards, roundCount, shootCount)) {
            changeRound = true;
        
        }
    }
    else{
        changeRound = false;
    }
    
    
}

bool challengePlayer(int currentPlayer, int nextPlayer, vector<char>& tableCards, vector<vector<char>>& hands, vector<string>& players, vector<bool>& alive, vector<char>& discardedCards, int& roundCount, vector<int>& shootCount) {
    cout << players[nextPlayer] << " is challenging " << players[currentPlayer] << "'s play!" << endl;

    // ตรวจสอบว่าไพ่ที่ claim ถูกต้องตามหัวโต๊ะหรือไม่

    bool lying = false;
    changeRound = true; // เปลี่ยน round ทุกรอบเมื่อ challenge

    // ตรวจสอบการ์ดที่ claim โดยใช้ tableCard
    for (char card : discardedCards) {
        if (card != tableCard && card != 'J') {  // ถ้าไม่ใช่การ์ดที่ตั้งโต๊ะและไม่ใช่ 'J' (การโกหก)
            lying = true;
            break;
        }
    }

    if (lying) {
        cout << players[currentPlayer] << " was lying!" << endl;
    } else {
        cout << players[currentPlayer] << " was honest!" << endl;
    }

    
    processChallenge(lying, currentPlayer, nextPlayer, players, alive, roundCount, shootCount);
    return lying;
}




// กระบวนการลงโทษผู้โกหก
void processChallenge(bool lying, int currentPlayer, int nextPlayer, vector<string>& players, vector<bool>& alive, int& roundCount, vector<int>& shootCount) {
    int victimIndex = lying ? currentPlayer : nextPlayer;
    clearScreen(); 
    // ผู้ที่ท้าทายผิดจะต้องถูกยิง
    if (!lying) {
        victimIndex = nextPlayer;  // ถ้าผู้ท้าทายผิด, ผู้ท้าทายจะถูกยิง
    }

    cout << players[victimIndex] << " must take a bullet!" << endl;

    // เกมยิงลูกกระสุน
    int russianRoulette = rand() % 6 + 1;
    int chanceToShoot = 1 + shootCount[victimIndex];  // ความเสี่ยงที่เพิ่มขึ้นตามจำนวนการยิง

    cout << players[victimIndex] << " faces a " << chanceToShoot << "/6 chance to be shot!" << endl;

    if (russianRoulette <= chanceToShoot) {
        drawscena(victimIndex+1,"CHALLENGE",0);
        cout << "BANG! " << players[victimIndex] << " is eliminated!" << endl;
        alive[victimIndex] = false;
        
    } else {
        drawscena(victimIndex+1,"CHALLENGE");
        cout << "CLICK! No bullet. " << players[victimIndex] << " survives." << endl;
        
    }

    shootCount[victimIndex]++;  // เพิ่มจำนวนครั้งที่ยิงของผู้เล่น
    
}


bool checkIfAllHandsEmpty(const vector<vector<char>>& hands) {
    for (const auto& hand : hands) {
        if (!hand.empty()) {
            return false;
        }
    }
    return true;
}
bool checkIfHandEmpty(const vector<vector<char>>& hands,int currentPlayer) {
    if (hands[currentPlayer].empty()) {
        return true;
    }
    return false;
}


// นำไพ่ที่ถูกทิ้งกลับเข้าไปในdeck
void reshuffleDeck(vector<char>& deck, vector<char>& discardedCards) {
    deck.insert(deck.end(), discardedCards.begin(), discardedCards.end());
    shuffle(deck.begin(), deck.end(), default_random_engine(time(0)));
    discardedCards.clear();
}

vector<char> createDeck() {
    vector<char> deck;
    for (int i = 0; i < 6; i++) {
        deck.push_back('Q');
        deck.push_back('K');
        deck.push_back('A');
    }
    deck.push_back('J');
    deck.push_back('J');
    shuffle(deck.begin(), deck.end(), default_random_engine(time(0)));
    return deck;
}

int countSurvivors(const vector<bool>& alive) {
    int count = 0;
    for (bool status : alive) {
        if (status) count++;
    }
    return count;
}

void displayHand(const vector<char>& hand) {
    
    for (char card : hand) {
        cout << card << " ";
    }
    cout << endl;
}




//แจกไพ่ให้ผู้เล่นใหม่
void dealNewHands(vector<vector<char>>& hands, vector<char>& deck, int numPlayers) {
    for (auto& hand : hands) {
        while (hand.size() < 5 && !deck.empty()) {
            hand.push_back(deck.back());
            deck.pop_back();
        }
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("cls"); 
   
    #endif
}



