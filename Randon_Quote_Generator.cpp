#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Randon_Quote_Generator.h"
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
         string sadEmotion[] = {"Tears come from the heart and not from the brain.",
                             "The word 'happy' would lose its meaning if it were not balanced by sadness.",
                             "Every human walks around with a certain kind of sadness. They may not wear it on their sleeves,but it is there if you look deep",
                             "The walls we build around us to keep sadness out also keeps out the joy",
                             "Sadness flies away on the wings of time"};
      srand(time(0));
        int index = rand()%(sizeof(sadEmotion)/sizeof(sadEmotion[0]));
        cout <<"Sad Emotion Quote: "<< sadEmotion[index] << endl;                     
        cout << sadEmotion << endl;
        break;
     
    }
    
   case (2):{
        string happyEmotion[] = {"Joy is not in things; it is in us.","Happiness is not something ready-made. It comes from your own actions.",
                                "The only way to find true happiness is to risk being completely cut open.","Happiness depends upon ourselves",
                                "The secret of happiness is not in doing what one likes, but in liking what one does"};
        srand(time(0));
        int index = rand()%(sizeof(happyEmotion)/sizeof(happyEmotion[0]));
        cout <<"Happy Emotion Quote: "<< happyEmotion[index] << endl;
        break;
       
    }
    
   case (3):{
     
       string coldEmotion[] = {"Winter is not a season, it's a celebration.",
                                "Nothing burns like the cold.",
                                "Winter is not a season, it's an occupation",
                                "Revenge is a dish best served cold",
                                "People who live in a cold climate are not cold in their hearts"};
         srand(time(0));
        int index = rand()%(sizeof(coldEmotion)/sizeof(coldEmotion[0]));
        cout <<"Cold Emotion Quote: "<< coldEmotion[index] << endl;              
        cout << coldEmotion << endl;
        break;
       
    }
    
  case (4):{
     string hotEmotion[] = {"Heat cannot be separated from fire, or beauty from the eternal.",
                               "The most powerful weapon on earth is the human soul on fire",
                             "Anger is like fire. It burns all clean",
                             "Love is a burning thing, and it makes a fiery ring.",
                             "Passion is energy. Feel the power that comes from focusing on what excites you."};
                             srand(time(0));
        int index = rand()%(sizeof(hotEmotion)/sizeof(hotEmotion[0]));
        cout <<"Hot Emotion Quote: "<< hotEmotion[index] << endl; 
        cout << hotEmotion << endl;
        break;
     
    }
    
    case (5):{
     
        string energeticEmotion[] = {"Energy and persistence conquer all things.",
                           "Passion is energy. Feel the power that comes from focusing on what excites you",
                           "Enthusiasm is the energy and force that builds literal momentum of the human soul and mind",
                           "The more you lose yourself in something bigger than yourself, the more energy you will have",
                           "Vitality shows in not only the ability to persist but the ability to start over"};
                            srand(time(0));
        int index = rand()%(sizeof(energeticEmotion)/sizeof(energeticEmotion[0]));
        cout <<"Energetic  Emotion Quote: "<< energeticEmotion[index] << endl; 
        cout << energeticEmotion << endl;
        break;
      
    }
     
      

     case (6):{
     string tiredEmotion[] = {"Even the darkest night will end, and the sun will rise.",
                             "You never get tired unless you stop and take time for it.",
                             "Even when you have every right to be tired, you must never be too tired to move forward.",
                             "I’m tired of feeling like I’m fighting alone",
                             "Tired minds don't plan well. Sleep first, plan later." };
           srand(time(0));
        int index = rand()%(sizeof(tiredEmotion)/sizeof(tiredEmotion[0]));
        cout <<"Tired Emotion Quote: "<< tiredEmotion[index] << endl;                     
       cout << tiredEmotion << endl;
       break;
    }
    
    
    case (7):{
      string timidEmotion[] = {"Fear is only as deep as the mind allows.",
                              "Fortune favors the bold, but abandons the timid",
                              "Timid men prefer the calm of despotism to the tempestuous sea of liberty",
                              "A timid person is frightened before a danger, a coward during the time, and a courageous person afterward",
                               "Do not be too timid and squeamish about your actions. All life is an experiment"};
    
         srand(time(0));
        int index = rand()%(sizeof(timidEmotion)/sizeof(timidEmotion[0]));
        cout <<"Timid  Emotion Quote: "<< timidEmotion[index] << endl; 
        cout << timidEmotion << endl;
        break;
     
    }
    
      


    
    case (8):{
      string confidenceEmotion[] = {"Believe you can and you're halfway there.",
                              "Confidence comes not from always being right, but from not fearing to be wrong",
                              "Self-confidence is the best outfit. Rock it and own it",
                              "With confidence, you have won before you have started.",
                              "No one can make you feel inferior without your consent"};
                          srand(time(0));
        int index = rand()%(sizeof(confidenceEmotion)/sizeof(confidenceEmotion[0]));
        cout <<"Confidence  Emotion Quote: "<< confidenceEmotion[index] << endl; 
        cout << confidenceEmotion << endl;
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
   
    



