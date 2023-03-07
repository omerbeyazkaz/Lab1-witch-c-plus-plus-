#include <iostream>
#include <string>

using namespace std;
int main() {
   std::string name;
   int studentId;

  std::cout << "What 's your name ";
   std::cin>>name;
   std::cout << "your number is : " << name;
   std::cout << "What 's your student Id";
    std::cin>>studentId;
    std::cout << "your studentID is : " << studentId;

    ////////////////////////////////////////// q2
     int var1 ;
     int var2;
     cout<<"\nPlease enter a number ";
     std::cin>>var1;
     cout<<"Please enter a second number";
    std::cin>>var2;
    int sum =var1+var2;
    int diff = var1 - var2;
    float prod = var1* var2;
    std::cout <<"\n" + to_string(sum);
    std::cout<<"\n " + to_string(diff);
    std::cout<<"\n " + to_string(prod);
    //////////////////////////////////// q3

    cout<<"\nWhat is your name ";
    string name1 ;
    cin>>name1;
    cout<<"Please enter your lab's score ";
    int labScore;
    cin>>labScore;
    cout<<"Please enter your midterm score  ";
    int midtermScore ;
     cin>>midtermScore;
     cout<<"What is your final score ";
     int finalScore ;
     cin>>finalScore;

     float totalScore=labScore*25/100+midtermScore*35/100+finalScore*40/100;

     cout<<"name "+name1;
     cout<<"Lab score = " + to_string(labScore);
     cout<<"\nMidterm Score = "+ to_string(midtermScore);
     cout<<"\nFinal Score = "+ to_string(finalScore);

     cout<<"\nTotal score = " + to_string(totalScore);

     ///////////////////////////////////q4


    ::printf("\n*\n" "**\n" "***\n" "**\n" "*");







    return 0;
}
