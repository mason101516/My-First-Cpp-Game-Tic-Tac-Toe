// A Tic Tac Toe Program
#include <iostream>
using namespace std;
int check(string a,string b,string c) { // Function That Checks if 3 Strings are Equal.  Partial Credit to Stack Overflow
    if (a==b && b==c && c==a) {return 1;}
	else {return 0;}
}
int main() {
	/* Make O Go First
	0 TL
	1 TC
	2 TR
	3 LC
	4 C
	5 RC
	6 BL
	7 BC
	8 BR */
	int player=1,numberofturns=0;//numberofturns is to check if there is a tie
	bool tie=false; //A tie Indicator, I'm Lazy OK?
	string temp; //The Input Every Time
	string board[9]={"!","@","#","$","%","^","&","*","~"}; // Just A Random List That Prints " " Instead, Just Here to Make Elements Different
	cout<<"Squares:\nTop Left is TL\nTop Center is TC\nTop Right is TR\nLeft Center is LC\nCenter is C\nRight Center is RC\nBottom Left is BL\nBottom Center is BC\nBottom Right is BR\nKeep in Mind Inputs are Case Sensitive\n\nPlayer 1 is O, and Player 2 is X\n\n"; //Signals Player the Keys and Stuff
	while (check(board[0],board[1],board[2])==0 && check(board[3],board[4],board[5])==0 && check(board[6],board[7],board[8])==0 && check(board[0],board[3],board[6])==0 && check(board[1],board[4],board[7])==0 && check(board[2],board[5],board[8])==0 && check(board[0],board[4],board[8])==0 && check(board[2],board[4],board[6])==0 ) { //Check No 3 In a Row / Column / Diagonal
		//Printing Process
		cout << "Board:\n";
		cout << "-------\n";
		for (int i=0; i<9; i++) {
			if (board[i]=="!" || board[i]=="@" || board[i]=="#" || board[i]=="$" || board[i]=="%" || board[i]=="^" || board[i]=="&" || board[i]=="*" || board[i]=="~" ) { // Prints "-" instead of the Actual Symbols
				if (i%3==2) {
					cout << "| |\n";
					cout << "-------\n";
				}
				else {
					cout << "| ";
				}
			}
			else {
				if (i%3==2) {
					cout << "|"<<board[i]<<"|\n";
					cout << "-------\n";
				}
				else {
					cout << "|"<<board[i];
				}
			}
		}
		//Check if Tie
		if (numberofturns==9) {
			cout <<"It's a tie!";
			tie=true;
			break;
		}
		//After Checking, Read Input
		cout << "Enter Player " <<player<<"'s Move:\n";
		cin >> temp;
		//Check if Move is Valid
		if (temp == "TL" ||temp == "TC" ||temp == "TR" ||temp == "LC" ||temp == "C" ||temp == "RC" ||temp == "BL" ||temp == "BC" ||temp == "BR") {//Checks if Move is Valid, Updates Board
			if (player==1) {
				if (temp == "TL") {
					if (board[0]!="X" && board[0]!="O") {
						board[0]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "TC") {
					if (board[1]!="X" && board[1]!="O") {
						board[1]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "TR") {
					if (board[2]!="X" && board[2]!="O") {
						board[2]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "LC") {
					if (board[3]!="X" && board[3]!="O") {
						board[3]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "C") {
					
					if (board[4]!="X" && board[4]!="O") {
						board[4]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "RC") {
					if (board[5]!="X" && board[5]!="O") {
						board[5]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "BL") {
					if (board[6]!="X" && board[6]!="O") {
						board[6]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "BC") {
					if (board[7]!="X" && board[7]!="O") {
						board[7]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "BR") {
					if (board[8]!="X" && board[8]!="O") {
						board[8]="O";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
			}
			else if (player==2) {
				if (temp == "TL") {
					if (board[0]!="O" && board[0]!="X") {
						board[0]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "TC") {
					if (board[1]!="O" && board[1]!="X") {
						board[1]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "TR") {
					if (board[2]!="O" && board[2]!="X") {
						board[2]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "LC") {
					if (board[3]!="O" && board[3]!="X") {
						board[3]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "C") {
					if (board[4]!="O" && board[4]!="X") {
						board[4]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "RC") {
					if (board[5]!="O" && board[5]!="X") {
						board[5]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "BL") {
					if (board[6]!="O" && board[6]!="X") {
						board[6]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "BC") {
					if (board[7]!="O" && board[7]!="X") {
						board[7]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
				else if (temp == "BR") {
					if (board[8]!="O" && board[8]!="X") {
						board[8]="X";
					}
					else {
						cout << "Invalid Move!\n";
						player=3-player;
						numberofturns-=1;
					}
				}
			}
			player=3-player;
			numberofturns++;
		}
		else { //Move is Invalid
			cout << "Invalid Move!\n";
		}
	}
	if (tie) {
		//Do Nothing When Tie
	}
	else {
		//Printing Process For Win/Lose
		cout << "Board:\n";
		cout << "-------\n";
		for (int i=0; i<9; i++) {
			if (board[i]=="!" || board[i]=="@" || board[i]=="#" || board[i]=="$" || board[i]=="%" || board[i]=="^" || board[i]=="&" || board[i]=="*" || board[i]=="~" ) { // Prints "-" instead of the Actual Symbols
				if (i%3==2) {
					cout << "| |\n";
					cout << "-------\n";
				}
				else {
					cout << "| ";
				}
			}
			else {
				if (i%3==2) {
					cout << "|"<<board[i]<<"|\n";
					cout << "-------\n";
				}
				else {
					cout << "|"<<board[i];
				}
			}
		}
		cout<<"Player "<<3-player<<" Won!";
	}
}
