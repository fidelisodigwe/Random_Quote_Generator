#include <iostream>
#include <string>

using namespace std;

// this is a Random Quote generator app that prints random quote based on users emotions




void selection_list()
{
    int choice =0;
    bool quit = false;
    do{
    cout << " 1: Happy" << endl;
    cout << " 2: Sad" << endl;
    cout << " 3: Hot" << endl;
    cout << " 4: Cold" << endl;
    cout << " 5: Tired" << endl;
    cout << " 6: Energetic" << endl;
    cout << " 7: Confidence" << endl;
    cout << " 8: Timid" << endl;
    cout << " 9 : Exit" << endl;
    cout << "Enter your Choice: ";
    cin >> choice;

   switch(choice){

    case (1):{

       char happy[] = {"Joy is not in things; it is in us.\n"};
        cout << happy << endl;
        break;
    }
    


    case (2):{

        char sad[] = {"Tears come from the heart and not from the brain.\n"};
        cout << sad << endl;
        break;
    }
    
    
    case (3):{

        char hot[] = {"Heat cannot be separated from fire, or beauty from the eternal.\n"};
        cout << hot << endl;
        break;
    }
    
    
    case (4):{

        char cold[] = {"Winter is not a season, it's a celebration.\n"};
        cout << cold << endl;
        break;
    }
    
    
    case (5):{

       char tired[] = {"Even the darkest night will end, and the sun will rise.\n"};
       cout << tired << endl;
       break;
    }
    

    
    case (6):{

        char energetic[] = {"Energy and persistence conquer all things.\n"};
        cout << energetic << endl;
        break;
    }
    
    
    case (7):{

        char confidence[] = {"Believe you can and you're halfway there.\n"};
        cout << confidence << endl;
        break;
    }
    
    
    case (8):{

        char timid[] = {"Fear is only as deep as the mind allows."};
        cout << timid << endl;
        break;
    }
    
    
    case (9):{

        cout << " Hope You Enjoy our Quote GoodBye!" << endl;
        quit = true;
        break;
    }
    
    
    default :
    cout << " Invalid option entered ! " << endl;
    break;
    
   }

    }
 while (!quit);
}
   
    



int main()
{

  selection_list();
    
}