#include <iostream>
#include <cstring>

using namespace std;

  void printBoard(char print[3][3]){
    
    cout << "    1   2   3 " << endl;
    cout << "   -----------" << endl;
    cout << "a | " << print[0][0] << " | " << print[0][1] << " | " << print[0][2] << " | " << endl;
    cout << "   -----------" << endl;
    cout << "b | " << print[1][0] << " | " << print[1][1] << " | " << print[1][2] << " | " << endl;
    cout << "   -----------" << endl;
    cout << "c | " << print[2][0] << " | " << print[2][1] << " | " << print[2][2] << " | " << endl;
    cout << "   -----------" << endl;
    
  }

  char checkerlet(char let) {

    bool cont = false;
    
    while (cont == false) {
      cout << "Enter the letter for where you want to move" << endl;
      cin >> let;
      if (let != 'a' && let != 'b' && let != 'c') {
	cout << "Row must be a, b, or c!" << endl;
      }
      else {
	cont = true;
	return let;
      }
    }
    return let;
  }

  char checkernum(char num) {

    bool cont = false;

    while (cont == false) {
      cout << "Enter the number for where you want to move" << endl;
      cin >> num;
      if (num != '1' && num != '2' && num != '3') {
	cout << "Column must be 1, 2, 3!" << endl;
      }
      else {
	cont = true;
	return num;
      }
    }
    return num;
  }



  int main() {

    char letter;
    char number;
    
    bool playing = true;

    char BLANK = '0';
    
    int XTURN = 0;
    int OTURN = 1;

    int XWINS = 0;
    int OWINS = 0;
    
    int turn = XTURN;
    char board[3][3] = {'0','0','0','0','0','0','0','0','0'};

    while (playing == true) {
      
      printBoard(board);
      letter = checkerlet(letter);
      number = checkernum(number);

      cout << letter << endl;
      cout << number << endl;
    }

    return 0;
  }

    

 

