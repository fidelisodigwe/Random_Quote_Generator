#include <iostream>
#include <string>

using namespace std;

// this is a Random Quote generator app

// we create a selection list 
// assign class elements : which is different emotions 


void selection_list()
{
    int choice;
    do{
    cout << "0. play\n1. setting\n2.credits\n3. exit";
    cin >> choice;

    switch(choice)
    {
    case 0:
      cout << "You are playing the game \n";
      break;
    case 1:
       cout << " you are on setting \n";
       break;
    case 2:
    cout << " get a credit  \n";
    break;
    case 3:
    cout << " press to exit   \n";
    break;
    default:
      cout << " Okay bye";
      break;


    }
} while (choice != 3);
   
    }



int main()
{

  selection_list();
    
}