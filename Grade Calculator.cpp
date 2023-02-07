#include <iostream>
#include <string>
using namespace std;

int main()
{
    string classname, lettergrade;
    double finalexampercent, attendancepercent, quizpercent, testpercent, homeworkpercent;
    double finalexam, attendance, quiz, test, homework, finalscore;

    cout << "\nThis program gives you your final grade for a course" 
     << " based on your overall attendance, homework, quiz, tests, and final exam grades.\n";
    
    cout << "\nWhat class is this for?\n";
    getline (cin, classname);

    cout << "\nWhat percent of your final grade is attendance worth?\n";
    cin >> attendancepercent;

    attendancepercent /= 100;

    cout << "What is your attendance grade?\n";
    cin >> attendance;

    attendance *= attendancepercent;

    cout << "\nWhat percent of your final grade is homework worth?\n";
    cin >> homeworkpercent;

    homeworkpercent /= 100;

    cout << "What is your homework grade?\n";
    cin >> homework;

    homework *= homeworkpercent;

    cout << "\nWhat percent of your final grade are quizzes worth?\n";
    cin >> quizpercent;
     
    quizpercent /= 100;

    cout << "What is your quiz grade?\n";
    cin >> quiz;

    quiz *= quizpercent;

    cout << "\nWhat percent of your final grade are tests worth?\n";
    cin >> testpercent;

    testpercent /= 100;

    cout << "What is your test grade?\n";
    cin >> test;

    test *= testpercent;

    cout << "\nWhat percent of your final grade is the final exam worth?\n";
    cin >> finalexampercent;

    finalexampercent /= 100;

    cout << "What was your final exam score?\n";
    cin >> finalexam;

    finalexam *= finalexampercent;

    finalscore = homework + test + quiz + attendance + finalexam;

    if (finalscore >= 97) lettergrade = "A+";
    else if (finalscore >= 90) lettergrade = "A";
    else if (finalscore >= 80) lettergrade = "B";
    else if (finalscore >= 70) lettergrade = "C";
    else if (finalscore >= 60) lettergrade = "D";
    else if (finalscore >= 0) lettergrade = "F";
    else cout << "You achieved a negative final score.\n";

    cout << "\nYour final grade in " << classname << " is " << finalscore << "% - " << lettergrade << "\n";
    
    return 0;
}