# Snakes-Ladders

This is snakes and ladders but runs in the terminal 

## How Does It Work:

You start the game by enter either a 1 or a 0 where 1 is for starting the game and 0 for exiting the game,
After starting the game a "Game Started..." should appear and below it you'll find the player's turn -Either Player1's or Player2's Turn- 
and then "Type in roll to roll the dice: ", The platform is only 12 tiles , The first player to reach the 12th tile wins andthe the game rests to either press1
to play again or 0 to end the game 

## What happends underneth the hood 

## The Player(s) And How They Work
There are 2 pointers to each player, Each player -pointer- have his own platform which is actually a mult-dimensional array in order to prevent overwriting 
the other pointers data in which the pointer moves in by incrementation value given by the dice.
 
## The Dice Function
The dice works by including "ctime.h" lib which gives us the "srand()" and "time(0)" functions in which by combining the two functions "srand(time(0))"  it gives us
a random Real-Time th CPU genrerates by using this function "rand()" to store it's value inside the dice varaiable so in order to only give us a number between "1" and 
"6" so i had so take the modulus and add 1 to the dice variable in order to make it right and then we return the value of dice.
