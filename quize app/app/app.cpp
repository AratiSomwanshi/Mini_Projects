#include<iostream>
using namespace std;

bool login();
int playQuiz();

int main(){

	if(login()) {
	int finalResult=0;
	char playAgain;
	int playQuiz(void);
	play:
	 finalResult = playQuiz();
	 cout<<"Your score is : "<<finalResult<<endl;

	 if(finalResult >=6){
		 cout<<"You are pass"<<endl;
		 cout<<"Do you want to play again y or n ?"<<endl;
		 cin>>playAgain;
		 if (playAgain == 'y' || playAgain== 'Y'){
			 goto play;
		 }
		 else{
			   cout<<"Thank You for playing Our Quiz !"<<endl;
		     }

	 }
	 else{
	 	 cout<<"You are fail"<<endl;
		 cout<<"Do you want to play again Y or N ?"<<endl;
		 cin>>playAgain;
		 if (playAgain == 'y' || playAgain== 'Y'){
			 goto play;
		 }
	    else{
		      cout<<"Thank You for playing Our Quiz !"<<endl;
	        }
	 }

}else {
    cout << "Login Failed. Exiting..." << endl;
}
}

bool login() {
    string username, password;
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Please enter your password: ";
    cin >> password;
    // Check if username and password are correct
    // For simplicity, let's assume correct credentials are "admin" for both username and password

    cout << "Login successful!" << endl;
          return true;


//    if(username == 'A' || 'a' && password == 'A' 'a' '@#$!%&*+/-') {
//    	cout << "Login successful!" << endl;
//        return true;
//    } else {
//        cout << "Invalid username or password." << endl;
//        return false;
//    }
}
int playQuiz(){
	char c;
	char option;
	int score=0;
	playInsideFunction:
	cout<<"------------Welcome to Quiz Game--------"<<endl;
	cout<<"--------Please Follow the instructions-----"<<endl;

	cout<<"Step 1:Quiz contains total 10 Questions"<<endl;
	cout<<"Step 2:You will be Given 1 marks for Each right answer"<<endl;
	cout<<"Step 3:No Negative marking"<<endl;
	cout<<"Step 4:Please Press s to start the quiz "<<endl;
	cout<<"Step 5:Please Select option a,b,c,d "<<endl;
	cout<<"Step 6:If you score >=6, you will pass the quiz "<<endl;
	cin>>c;
	if(c=='s' || c== 'S'){

		cout<<"Q1.  Identify the correct extension of the user-defined header file in C++.  "<<endl;
		cout<<" (a).cpp  (b).hq  (c).h  (d).hf"<<endl;
		cin>>option;

		if(option =='c' || option == 'C'){
			score=score+1;
		}
		else{
			score=score+0;
		}

		cout<<"Q2. Identify the incorrect constructor type."<<endl;
		cout<<"(a)Friend constructor\n(b)Default constructor\n(c)Parameterized constructor\n(d)Copy constructor"<<endl;
	    cin>>option;

		if(option =='a' || option == 'A'){
			score=score+1;
	    }
		else{
			score=score+0;
			}

		cout<<"Q3.Which of the following is used for comments in C++? "<<endl;
		cout<<"(a)/* comment */\n(b)// comment */\n(c) // comment\n(d) both // comment or /* comment */"<<endl;
		cin>>option;

		if(option =='d' || option == 'D'){
			score=score+1;
		}
		else{
			score=score+0;
			}

		cout<<"Q4.Which of the following is a correct identifier in C++? "<<endl;
		cout<<" (a)VAR_1234 (b) $var_name  (c)7VARNAME  (d)7var_name"<<endl;
		cin>>option;

		if(option =='a' || option == 'A'){
     		score=score+1;
			}
		else{
			score=score+0;
			}

		cout<<"Q5. Which of the following type is provided by C++ but not C? "<<endl;
		cout<<" (a)double(b)float (c)int  (d) bool"<<endl;
		cin>>option;

		if(option =='d' || option == 'D'){
			score=score+1;
			}
		else{
			score=score+0;
			}

		cout<<"Q6. Which is more effective while calling the C++ functions?"<<endl;
		cout<<"(a)call by object\n(b)call by pointer\n(c) call by value\n(d)call by reference"<<endl;
		cin>>option;

		if(option =='d' || option == 'D'){
			score=score+1;
			}
		else{
	    	score=score+0;
			}

		cout<<"Q7.  What is Inheritance in C++? "<<endl;
		cout<<"(a)Deriving new classes from existing classes\n(b) Overloading of classes\n(c)Classes with same names\n(d)Wrapping of data into a single class"<<endl;
		cin>>option;

		if(option =='a' || option == 'A'){
			score=score+1;
			}
		else{
			score=score+0;
			}

		cout<<"Q8.  What is abstract class in C++? "<<endl;

		cout<<"(a)Any Class in C++ is an abstract class\n(b) Class from which any class is derived\n(c) Class specifically used as a base class with atleast one virtual functions\n(d)Class specifically used as a base class with atleast one pure virtual functions"<<endl;
		cin>>option;

		if(option =='d' || option == 'D'){
			score=score+1;
			}
		else{
			score=score+0;
			}

		cout<<"Q9. Which concept allows you to reuse the written code in C++?"<<endl;
		cout<<" (a)Inheritance (b)Polymorphism (c) Abstraction  (d)Encapsulation"<<endl;
		cin>>option;

		if(option =='a' || option == 'A'){
			score=score+1;
			}
		else{
			score=score+0;
			}

		cout<<"Q10.The programming language that has the ability to create new data types is called___."<<endl;
		cout<<" (a)Overloaded (b)Encapsulated (c)Reprehensible (d)Extensible"<<endl;
		cin>>option;

		if(option =='d' || option == 'D'){
			score=score+1;
			}
		else{
			score=score+0;
			}
	}

	else{
		cout<<"You have entered Wrong Value,please enter s "<<endl;
		goto playInsideFunction;
	    }
	return score;
}


