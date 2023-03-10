#include <iostream>
#include <cstdlib>
#include <string.h>
#include <ctime>
using namespace std ;

//making the dice
int dice(){//Dice for the 1st Player
//fixed the bug where the dice value could be zero
srand(time(0));
  int dice = (rand() % 6) +1 ;

return dice ;
}

int main(void){
//making the platform
  int platForm[12] = {
    0 , 1 , 2 , 3 ,
    4 , 5 , 6 , 7 ,
    8 , 9, 10, 11
  };
  //made another platform for the 2nd player (bug) 
   int platForm2[12] = {
    0 , 1 , 2 , 3 ,
    4 , 5 , 6 , 7 ,
    8 , 9, 10, 11
  };
  
//players 
  int *player1 ;
  int *player2 ;
//1st postion 
  player1 = &platForm[0] ;  
  player2 = &platForm2[0] ;

//protyping 
  string roll ;
  
    do{ cout<<"Enter 1 to Start playing or enter 0 to exit..."<<endl;
        cin>>roll ;
      if(roll == "1"){cout<<"///////////////////\nLet the gemez begin...\n"<<endl;
  for( int i = 0 ; i < 99 ; i++) {
//player1's turn  
    cout<<"Player1's Turn.."<<endl;
//rolling the dice
  do{
    cout<<"Type In Roll To Roll The Dice : ";
      cin>>roll;
        cout<<"\n";
      
  }
  while(roll != "roll");
//Updating player's condation
  *player1 =  *player1 + dice()  ;
    cout<<"Dice: "<<dice()<<endl;
    cout<<"Your postion is "<<*player1<<" \n"<<endl;
//Adding Condations
  switch(*player1){
//snake
    case 7 : *player1 = platForm[2] ; cout<<"Oh you just hit a snake !\t" ; 
      cout<<"Your new postion is "<<*player1<<"\n"<<endl; break ;
//ladder
    case 5 :   *player1 = platForm[8] ; cout<<"Climbing up the ladder \t" ;   
      cout<<"Your new postion is "<<*player1<<"\n"<<endl; break ;
//ladder
    case 1 : *player1 = platForm[10] ; cout<<"Wow you just hit the lucky ladder !\t" ;   
       cout<<"Your new postion is "<<*player1<<"\n"<<endl; break ;
    }//end of the switch case
  if(*player1 == 12 || *player1 > 12 ){
    cout<<"!!!Player1 Wins!!! \n"<<endl; break ; }//end of the if condation 
  
 //end of the player1's turn
    
//player2's turn 
    cout<<"Player2's Turn.."<<endl;
//rolling the dice
  do{
    cout<<"Type In Roll To Roll The Dice : ";
      cin>>roll;
        cout<<"\n";
      
  }
  while(roll != "roll");
//Updating player's condation
  *player2 =  *player2 + dice()  ;
    cout<<"Dice: "<<dice()<<endl;
    cout<<"Your postion is "<<*player2<<" \n"<<endl;
//Adding Condations
  switch(*player2){
//snake
    case 7 : *player2 = platForm2[2] ; cout<<"Oh you just hit a snake !\t" ; 
      cout<<"Your new postion is "<<*player2<<"\n"<<endl; break ;
//ladder
    case 5 :   *player2 = platForm2[8] ; cout<<"Climbing up the ladder \t" ;   
      cout<<"Your new postion is "<<*player2<<"\n"<<endl; break ;
//ladder
    case 1 : *player2 = platForm2[10] ; cout<<"Wow you just hit the lucky ladder !\t" ;   
       cout<<"Your new postion is "<<*player2<<"\n"<<endl; break ;
    }//end of the switch case
  if(*player2 == 12 || *player2 > 12 ){
    cout<<"!!!Player2 Wins!!! \n"<<endl; break ; }//end of the if condation 
//end of the player2's turn
 }//end of the main For Loop
        
 }//end of the main if condation 
  else{ break ; }
} while(roll != "0" && roll != "1") ; //end of the main do while loop
   

}//End of the main function