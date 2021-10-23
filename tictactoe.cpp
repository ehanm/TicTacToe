// program created by Ehan Masud, completed on October 19, 2021
// This is TicTacToe! enter the corresponding letter and number to enter your move!
// Try to beat your friends!

#include <iostream>
#include <cstring>

using namespace std;

  void printBoard(char print[3][3]){ // printing the board
    
    cout << "    1   2   3 " << endl;
    cout << "   -----------" << endl;
    cout << "a | " << print[0][0] << " | " << print[0][1] << " | " << print[0][2] << " | " << endl;
    cout << "   -----------" << endl;
    cout << "b | " << print[1][0] << " | " << print[1][1] << " | " << print[1][2] << " | " << endl;
    cout << "   -----------" << endl;
    cout << "c | " << print[2][0] << " | " << print[2][1] << " | " << print[2][2] << " | " << endl;
    cout << "   -----------" << endl;
    
  }

  bool checkWin(char check[3][3]) { // win condition

    char BLANK = ' ';
    
    if (check[0][0] == check[0][1] && check[0][1] == check[0][2] && check[0][0] != BLANK) { // all horizontal win conditions
      return true;
    }
    else if (check[1][0] == check[1][1] && check[1][1] == check[1][2] && check[1][0] != BLANK) {
      return true;
    }
    else if (check[2][0] == check[2][1] && check[2][1] == check[2][2] && check[2][0] != BLANK) {
      return true;
    }
    else if (check[0][0] == check[1][0] && check[1][0] == check[2][0] && check[0][0] != BLANK) { // all vertical win conditions
      return true;
    }
    else if (check[0][1] == check[1][1] && check[1][1] == check[2][1] && check[0][1] != BLANK) {
      return true;
    }
    else if (check[0][2] == check[1][2] && check[1][2] == check[2][2] && check[0][2] != BLANK) {
      return true;
    }
    else if (check[0][0] == check[1][1] && check[1][1] == check[2][2] && check[0][0] != BLANK) { // the diagonal win conditions
      return true;
    }
    else if (check[2][0] == check[1][1] && check[1][1] == check[0][2] && check[2][0] != BLANK) {
      return true;
    }
    
    return false;
  }

  bool checkTie(char check[3][3]) { // if everything is full, return true, otherwise return false

    char BLANK = ' ';
    
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
	if (check[i][j] == BLANK){
	  return false;
	}
      }
    }
    
    return true;
  }
  

  char checkerlet(char let) { // check to make sure the letter is correct!

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

  char checkernum(char num) { // check to make sure the number is correct!

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
    char again;
    
    bool playing = true;

    char BLANK = ' ';
    char XMOVE = 'X';
    char OMOVE = 'O';
    
    
    int XTURN = 0;
    int OTURN = 1;

    int XWINS = 0;
    int OWINS = 0;
    
    int turn = XTURN;
    char board[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    
    while (playing == true) {
      
      letter = checkerlet(letter);
      number = checkernum(number);
      
      if (letter == 'a'){ // ensuring that for each move, the move is legal (could have been more efficient)
	if (number == '1') {
	  if (board[0][0] == BLANK) {
	    if (turn == XTURN) {
	      board[0][0] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[0][0] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	  
	}
	if (number == '2') {
	  if (board[0][1] == BLANK) {
	    if (turn == XTURN) {
	      board[0][1] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[0][1] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	  
	}
	if (number == '3') {
	  if (board[0][2] == BLANK) {
	    if (turn == XTURN) {
	      board[0][2] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[0][2] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	}
      }

      else if (letter == 'b'){
	if (number == '1') {
	  if (board[1][0] == BLANK) {
	    if (turn == XTURN) {
	      board[1][0] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[1][0] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	}
	if (number == '2') {
	  if (board[1][1] == BLANK) {
	    if (turn == XTURN) {
	      board[1][1] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[1][1] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	}
	if (number == '3') {
	  if (board[1][2] == BLANK) {
	    if (turn == XTURN) {
	      board[1][2] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[1][2] = OMOVE;
	      turn = XTURN;
	    }			   
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	}

      }
      else if (letter == 'c') {

	if (number == '1') {
	  if (board[2][0] == BLANK) {
	    if (turn == XTURN) {
	      board[2][0] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[2][0] = OMOVE;
	      turn = XTURN;
	    }
	    
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	  
	}
	if (number == '2') {
	  if (board[2][1] == BLANK) {
	    if (turn == XTURN) {
	      board[2][1] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[2][1] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
	  }
	}
	if (number == '3') {
	  if (board[2][2] == BLANK) {
	    if (turn == XTURN) {
	      board[2][2] = XMOVE;
	      turn = OTURN;
	    }
	    else if (turn == OTURN) {
	      board[2][2] = OMOVE;
	      turn = XTURN;
	    }
	  }
	  else {
	    cout << "there is already a piece there!" << endl;
          }

	}
      }
      
      printBoard(board);
      if (checkWin(board) == true) { // win statements
	if (turn == XTURN) {
	  OWINS++;
	  cout << "O wins!" << endl;
	}
	else if (turn == OTURN) {
	  XWINS++;
	  cout << "X wins!" << endl;
	}
	cout << "X has won " << XWINS << " times and O has won " << OWINS << " times." << endl;
	cout << "Play again? (y/n)" << endl; // if y, continue, if n, stop
	cin >> again;
      }

      else if (checkTie(board) == true) { // tie statement
	cout << "It's a tie!" << endl;
	cout << "X has won " << XWINS << " times and O has won " << OWINS << " times." << endl;
	cout << "Play again? (y/n)" << endl;
	cin >> again;
      }
      
      
      if (again == 'y' || again == 'Y') { // clear board
	playing = true;
	board[0][0] = BLANK;
	board[0][1] = BLANK;
	board[0][2] = BLANK;
	board[1][0] = BLANK;
	board[1][1] = BLANK;
	board[1][2] = BLANK;
	board[2][0] = BLANK;
	board[2][1] = BLANK;
	board[2][2] = BLANK;
	again = ' ';
      }
      else if (again == 'n' || again == 'N') {
	playing = false;
      }
    }

    return 0;
  }

    

 

