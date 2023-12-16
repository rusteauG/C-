#include<iostream>
#include<string>

using namespace std;
const int QUEST_AMT = 3;
const int ANS_AMT = 4;

void createQuestions(string questions[QUEST_AMT],string ans[QUEST_AMT][ANS_AMT],int correctAns[QUEST_AMT]);
 //get Data from the Arrays, without changing them
void Quiz(const string questions[QUEST_AMT],const string ans[QUEST_AMT][ANS_AMT],const int correctAns[QUEST_AMT]);
 
 
 
int main() {
	string questions[QUEST_AMT];
	string ans[QUEST_AMT][ANS_AMT]; 
	int correctAns[QUEST_AMT];
	
	createQuestions(questions,ans,correctAns);
	//When Done Create Empty Lines
	for(int i=0;i<40;i++){
		cout << endl;
	}
return 0;
}

void createQuestions(string questions[QUEST_AMT],string ans[QUEST_AMT][ANS_AMT],int correctAns[QUEST_AMT])
{
	for (int q=0;q<QUEST_AMT;q++){
			cout <<"Question # " << q+1 << endl;
			cout <<"Enter a Question" << endl; 
			getline(cin,questions[q]);   //question[0]
		
		for(int i=0;i<ANS_AMT;i++) {
			cout <<"Enter Answers " << i+1<<": " ;
			getline(cin,ans[q][i]); //  ans[0][0]  ans[0][1]   ans[0][2]  ans[0][3]
		}
		
		cout << "Enter the Corect Ans #: " ;
		cin >> correctAns[q];
		correctAns[q]--;
		cin.ignore();
	}
}

void Quiz(const string questions[QUEST_AMT],const string ans[QUEST_AMT][ANS_AMT],const int correctAns[QUEST_AMT])
{
	int score =0;
	for(int q=0;q<QUEST_AMT;q++)
	{
		cout<<end;
		cout<<"Your Score is "<< score<<endl;
		cout<< "QUESTION #"<<q+1 << endl;
		cout<<questions[q]<< endl;
		
		for(int i=0;a <4;i++)
		{
			cout << a+1 << "." << ans[q][i] << endl;
			
		}
		
		cout << " Your Answer";
		int answer;
		cin >> answer;
		answer -- ;
	}
	
	
	
}
