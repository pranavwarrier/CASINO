   #include<iostream.h>
   #include<conio.h>
   #include<stdlib.h>
   #include<dos.h>
   #include<iomanip.h>
   #include<process.h>
   #include<stdio.h>
//===============================HEADER FILES ABOVE=======================================================
void main()                              //        *****
{finish:;                                //        |---|   HELLO!
clrscr();                                //        |o o|
int a;                                   //        | ' |
textbackground(GREEN);                   //        | - |
textcolor(11);                           //    ---- \ / ----
void casino();    //PROTOTYPE 1          //        | | |
void credit();    //  PROTOTYPE 2        //         \|/
void door();      //    PROTOTYPE 3      //         / \
void oldschool(); //     PROTOTYPE 4     //        /   \
above:                                   //     __/     \__
cout<<"                               COMPUTER PROJECT";
above1:
cout<<"\n\n";
cout<<"\n\n\n  WHAT WOULD YOU LIKE TO VIEW ? \n\n  1.CASINO ROYALE\n\n  2.CREDITS\n\n  3.C++ PROGRAMS\n\n  4.EXIT\n\n  =>";
cin>>a;
switch(a)//===============================KING SWITCH=================================================
{case 1 :casino();break;     //FUNCTION CALL 1
case 2 :credit();break;      //FUNCTION CALL 2
case 4 :door();break;        //FUNCTION CALL 3
case 3 :oldschool();break;   //FUNCTION CALL 4
default :clrscr ();cout<<"Please choose a valid option.";goto above1;
}
goto above;
}
				  //WELCOME TO YOUR IMAGINATIONS!
void casino()//================================[ FUNCTION DEFINITION-1]
{clrscr();
char name[50];
namechange:;
gotoxy(35,3);
{
cout<<"\nCREATE YOUR NICKNAME\n=>";  //===============NICKNAME GENERATOR=============
}
cin>>name;
randomize();
clrscr();
int currency,i;
currency=2000;                          //    |   LABEL WORLD!
labelt:;                                //    |
labelo:;                                //    |
labely:;                                //    |
labelr:;                                //    |
labelx:;                                //    |  BEST LABELS OUT HERE!
redlabel:;                              //    |
clrscr();                               //    |
textbackground(CYAN);
textcolor(570);
moneychecknback:;
chicago:;
cout<<"                         ******                    ******                       ";
gotoxy(35,1);
char cas[]={'C','A','S','I','N','O','-','R','O','Y','A','L','E','\0'};
for(i=0;i<=13;i++)
{
delay(225);
cout<<cas[i];
}
aboveall:
cout<<"\n  Hey "<<name<<"!";
cout<<"\n\n  What would you like to do?\n  (1)Roll a dice [$300]\n  (2)Toss a coin [$200]\n  (3)Toss Two coins[$250]\n  (4)Rock,Paper And Scissors[$400]\n  (5)Cricket[$525]\n  (6)Mines and Dumplings[FREE!]\n  (7)My Account\n  (8)Change My Name\n  (9)Go To Main Menu\n  (10)Exit The Program\n\n  =>";
int opt, guess;
int dice;
int coin;
cin>>opt;
above1:
clrscr();
gotoxy(28,1);
cout<<"*******CASINO-ROYALE******              \n\n";
switch(opt)
{
//=========================================CASE 1===============================================================
case 1:{if((currency!=300)&&(currency<300))
{clrscr();
cout<<"\n  Insufficient Balance!\n";
cout<<"  Press 5 to continue.";
int reverse1;
cin>>reverse1;
clrscr();
goto labelr;
}
else
{						      //Dice starts here!
gotoxy(35,12);
delay(1000);
cout<<"LOADING";
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(1200);
clrscr();
cout<<"\n  Okay!\n";
cout<<"  PLACE YOUR BET\n  => ";
cin>>guess;
dice=random(6)+1;
gotoxy(35,12);
cout<<"ROLLING DICE";
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(1500);
clrscr();
if(guess==dice)
{currency+=300;
cout<<"\n  Hey ! congo. you win . its a "<<dice<<"\n\n  Your bet was : "<<guess<<"\n\n  Your account has been credited with $300\n Current Balance => "<<(currency);break;
}
else
{currency-=300;
cout<<"\n  Sorry !"<<name<<" pay up!. The number on the dice was "<<dice<<"\n"<<"\n  Your account is debited by $300\n  Current Balance => $"<<(currency);break;
}
}
}							  // Dice Ends here
case 2:{if((currency!=200)&&(currency<200))
//=======================================CASE 2========================================================================
{clrscr();
cout<<"\n  Insufficient Balance\n";
cout<<"  Press 5 to continue\n";
int test2;
cin>>test2;
clrscr();
goto labelt;
}
else
{       // single toss starts
gotoxy(35,12);
delay(1000);
cout<<"LOADING";
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(1200);
clrscr();
abb:;
cout<<"\n  Okay boss. Enter your bet\n Here are the options\n  (1)Tails\n  (2)Heads\n =>";
int guessa;
cin>>guessa;
if((guessa==1)||(guessa==2))
{coin=1+random(2);
gotoxy(35,12);
cout<<"TOSSING COIN";
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(1500);
clrscr();
if((guessa==coin)&&(guessa==1))
{currency+=200;
cout<<"\n  Hey! Its tails! You Won\n"<<"\n  Your account has been credited with $200.\n  MONEY LEFT:"<<currency;break;
}
else if((guessa==coin)&&(guessa==2))

{currency+=200;
cout<<"\n  Hey! Its heads! You Won\n"<<" Your account has been credited with $200.\n  MONEY LEFT:"<<currency;break;
}
else
{currency-=200;
cout<<"\n  Sorry "<<name<<"! pay up!\n"<<" Your account has been debited with $200.\n  MONEY LEFT:"<<currency;break;
}}
else
{clrscr();
cout<<"    Enter valid option";
goto abb;
}}}   // Single Toss Ends
case 3:{if((currency!=250)&&(currency<250)) //===================DOUBLE TOSS================
{clrscr();
cout<<"\n  Insufficient Balance!";
cout<<"\n  Press 5 to continue\n";
int test3;
cin>>test3;
clrscr();
goto labely;
}
else
{			     //Double Toss starts here!
gotoxy(35,12);
delay(1000);
cout<<"LOADING";
cout<<".";
delay(700);
cout<<".";                 //LOADING.
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(700);
cout<<".";
delay(1200);
clrscr();
aab:;
cout<<"\n  Okay "<<name<<"! Place your bet. Here are the options\n  (1)Heads and Heads\n  (2)Tails and Tails\n  (3)Heads and Tails\n  (4)Tails and Heads\n\n  =>";
int guesst;
cin>>guesst;
int dobco;
if((guesst==1)||(guesst==2)||(guesst==3)||(guesst==4))
{dobco=1+random(4);
gotoxy(35,12);
cout<<"TOSSING COINS";
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(400);
cout<<".";
delay(1500);
clrscr();
if((guesst==dobco)&&(guesst==1))
{currency+=250;
cout<<"\n  Hey! That is two heads. You  won.\n"<<" Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else if((guesst==dobco)&&(guesst==2))
{currency+=250;
cout<<"\n  Hey! That is two tails. You won.\n"<<" Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else if((guesst==dobco)&&(guesst==3))
{currency+=250;
cout<<"\n  Hey! That is a Heads and a Tails. You won.\n"<<" Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else if((guesst==dobco)&&(guesst==4))
{currency+=250;
cout<<"\n  Hey! That is a Tails and a Heads. You won.\n"<<" Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else
{currency-=250;
cout<<"\n Sorry! "<<name<<" You Lost.:(.";
switch(dobco)
{case 1:cout<<" It was two Heads.";break;
case 2:cout<<" It was two Tails.";break;
case 3:cout<<" It was a Heads and a Tails.";break;
case 4:cout<<" It was a Tails and a Heads.";break;
}
cout<<"\n Your account has been debited with $250. \n MONEY LEFT:"<<currency;break;
}}
else
{clrscr();
cout<<"    Enter a valid option.";
goto aab;
}}} 			      //End of Double Toss!
case 4:{//==============================ROCK PAPER SCISSORS==================================================================
if((currency!=400)&&(currency<400))
{clrscr();
cout<<"\n  Insufficient Balance. \n  Press 5 To Continue\n =>";
int firsefive;
cin>>firsefive;
clrscr();
goto labelo;
}
else
{ upar:;           //Rps starts
cout<<"  Choose The Game Type(Best of 3,5,..)\n";
int gametype;
cin>>gametype;
clrscr();
if(gametype%2!=0)
{gotoxy(35,12);
{cout<<"RULES:\n THIS IS A BEST OF "<<gametype<<" BET! FIRST YOU MAKE YOUR CALL. THEN THE COMPUTER. THEN THE  GAME REPEATS "<<gametype<<" TIMES.LUCK DOES ITS WORK  AND THE WINNER IS DECLARED. SO GO AND  PLAY!\n\nPress 5 to continue\n=>";
int fiveagain;
cin>>fiveagain;
clrscr();
}
int i,player=0,rival=0;
for(i=0;i<gametype;i++)
{  gotoxy(35,3);
{cout<<"\nSets Left:"<<gametype-(i)<<"\n\n\n\n";
}
gotoxy(45,3);
{cout<<"Your Score:"<<player;
}
gotoxy(45,4);
{cout<<"Computers Score:"<<rival;
}
hhh:;
cout<<"\n\n\n  Make Your Call\n  (1)Rock\n  (2)Paper\n  (3)Scissors\n =>";
int rpscall;
cin>>rpscall;
if((rpscall==1)||(rpscall==2)||(rpscall==3))
{int compcall;
compcall=1+random(3);
cout<<"Lets See!";
delay(700);
cout<<".";
delay(500);
cout<<".";
delay(500);
cout<<".";
delay(500); //THE IMPERIAL-AUTHENTIC AGE OLD GAME REVIVED AGAIN. MADE BETTER.
cout<<".";
delay(500);
cout<<".";
delay(1000);
clrscr();
if((rpscall==1)&&(compcall==1))
{
gotoxy(5,1);
{cout<<"You=Rock\nComputer=Rock";
cout<<"\nDraw!\n";
}
}
else if((rpscall==1)&&(compcall==2))
{rival+=1;
gotoxy(5,1);
{cout<<"\nYou=Rock\nComputer=Paper";
cout<<"\nComputer Wins!\n";
}}
else if((rpscall==1)&&(compcall==3))
{player+=1;
gotoxy(5,1);
{cout<<"\nYou=Rock\nComputer=Scissors";
cout<<"\nYou Win!\n";
}}
else if((rpscall==2)&&(compcall==1))
{player+=1;
gotoxy(5,1);
{
cout<<"\nYou=Paper\nComputer=Rock";
cout<<"\nYou Win!\n";
}}
else if((rpscall==2)&&(compcall==2))
{
gotoxy(5,1);
{
cout<<"\nYou=Paper\nComputer=Paper";
cout<<"\nDraw!\n";
}}
else if((rpscall==2)&&(compcall==3))
{rival+=1;
gotoxy(5,1);
{cout<<"\nYou=Paper\nComputer=Scissors";
cout<<"\nComputer Wins!\n";
}}
else if((rpscall==3)&&(compcall==1))
{rival+=1;
gotoxy(5,1);
{cout<<"\nYou=Scissors\nComputer=Rock";
cout<<"\nComputer wins!\n";
}}
else if((rpscall==3)&&(compcall==2))
{player+=1;
gotoxy(5,1);
{cout<<"\nYou=Scissors\nComputer=Paper";
cout<<"\nYou Win!\n";
}}
else if((rpscall==3)&&(compcall==3))
{
gotoxy(5,1);
{cout<<"\nYou=Scissors\nComputer=Scissors";
cout<<"\nDraw!\n";
}}
else
{clrscr();cout<<"\n\n    Please enter a valid value.";goto hhh;}
}
cout<<"\n  Press 5 to continue\n =>";
int rpsfive;
cin>>rpsfive;
clrscr();
}
if(player>rival)
{currency+=400;
clrscr();
gotoxy(35,1);
cout<<"\nYou Win The Game!\n";
cout<<"\nYour Score:"<<player;
cout<<"\nComputers Score:"<<rival;
cout<<"\n\nAccount credited by $400.\n";
}
else if(player<rival)
{currency-=400;
clrscr();
gotoxy(35,1);
cout<<"\nComputer Wins The Game!\n";
cout<<"\nYour Score:"<<player;
cout<<"\nComputers Score:"<<rival;
cout<<"\n\nAccount debited with $400.\n";
}
else if(player==rival)
{clrscr();
gotoxy(35,1);
cout<<"\nIts a Draw!\n";
cout<<"\nYour Score:"<<player;
cout<<"\nComputers Score:"<<rival<<"\n";
}
}

else if(gametype%2==0)
{cout<<"\n  Please Enter a Valid Value. So That a Winner Can Be Decided\n  Press 5 to Re-enter\n=> ";
int refive;
cin>>refive;
clrscr();
goto upar;
}
}
} break;
case 5://============================================case 5 --->cricket=============================================
{if(currency<525)
{clrscr();
cout<<"    Insufficient Balance!\n  Press 5 to continue\n =>";
int sise;
cin>>sise;
goto redlabel;
}
 clrscr();
cout<<"\n  CHOOSE AN OPTION:\n  (1)BAT\n  (2)BOWL\n =>";
int cricopt;
cin>>cricopt;
switch(cricopt)
{case 1:{
clrscr();
randomize();
int f=0; //<----------Batting( Self ) Starts!
int runs=0;
while(f!=1)
{clrscr();
rebat:;
cout<<"\n  Enter your runs!\n =>";
int score;
cin>>score;
if(score>6)
{clrscr();
gotoxy(35,4);
{cout<<"WARNING: NO CHEATING!";   //YES MY FRIEND, CRICKET HAS ONLY SIX RUNS!
delay(3000);
clrscr();
goto rebat;
}
}
int compsc;
compsc=1+random(6);
if(compsc!=score)
{cout<<" YOU="<<score<<" runs.\n COMPUTER="<<compsc<<" runs.";
runs+=score;
cout<<"\n\n TOTAL SCORE="<< runs;

cout<<"\n\n  Press 0 to continue\n =>";
int loop;
cin>>loop;
}
else if(compsc==score)
{cout<<"  YOU="<<score<<" Runs.\n  COMPUTER="<<compsc<<" Runs.";
cout<<"\n\n\n  OUT!\n\n\n  TOTAL SCORE= "<<runs;
cout<<"\n\n\n  Press 0 to continue\n  =>";
int zero;
cin>>zero;
f=1;                                                   //|---------------
}                                                     // |
 }//<----------while loop ends!             <------------|
 gotoxy(32,5);
 {clrscr();
 cout<<"COMPUTERS TURN TO BAT!";
 cout<<"\nPress 0 to continue\n";
 int shunya;
 cin>>shunya;
 }                                        //computers batting
 int devruns=0;
 while(f!=0)
 {clrscr();
 int devsc;
 gotoxy(45,2);
 {cout<<"TO WIN: "<<(runs+1)-devruns;
 }
 if((runs+1)-devruns<0)
 {gotoxy(45,2);
 {cout<<"TO WIN: "<<"--";
 }
 }
 gotoxy(45,3);
 {
 cout<<"TARGET: "<<runs+1;;
 }
 reball:;
 cout<<"\n  Computer has Entered the runs. You also enter the value\n =>";
 int ball;
 cin>>ball;
 if(ball>6)
 {clrscr();
 gotoxy(35,4);
 {cout<<"THIS WON'T HELP. RE-TRY!";
 delay(3000);
 clrscr();
 goto reball;
 }
 }
 devsc=1+random(6);
 if(devsc!=ball)
 {cout<<"\n\n  YOU="<<ball<<"Runs\n  COMPUTER="<<devsc<<"Runs.";

 devruns+=devsc;
 cout<<"\n\n  TOTAL SCORE="<<devruns;
 cout<<"\n  Press 0 to continue\n =>";
 int ballloop;
 cin>>ballloop;
 }
 int runsplusone;
 runsplusone=runs+1;
 if(runsplusone<=devruns)
 {clrscr();
 goto winlabtwo;
 }////////////////////
 else if(devsc==ball)
 {f=0;
 cout<<"\n\n  YOU="<<ball<<"Runs.\n  COMPUTER="<<devsc<<"runs.";
 cout<<"\n\n\n  OUT!\n\n\n  TOTAL SCORE= "<<devruns;
 cout<<"\n\n\n  Press 0 to continue\n =>";
 int result_sess1;
 cin>>result_sess1;
 }
 }
 winlabtwo:;
 clrscr();
 if(devruns>runs)
 {currency-=525;
 cout<<"\n COMPUTER wins by "<<(devruns-runs)<<" Runs.\n\n  Account De-credited by $525."<<"MONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int basekaur;
 cin>>basekaur;
 }
 else if(devruns<runs)
 {currency+=525;
 cout<<"\n  YOU win by "<<(runs-devruns)<<" Runs.\n\n  Account Credited with $525."<<"MONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int akhritha;
 cin>>akhritha;
 }
 else
 {cout<<"\n  DRAW";
 cout<<"\n  Press 5 to continue\n =>";
 int endofsess1;
 cin>>endofsess1;
 }
break;
}
case 2:{ if(currency<525)          ////////////////////Case 2: bowling!!
{clrscr();
cout<<"\n  Insufficient Balance\n  Press 5 to exit\n =>";
int cricpanchek;
cin>>cricpanchek;
}
else if(currency>=525)
{
clrscr();
clrscr();
randomize();
int devruns=0,f=0;
 while(f!=1)
 {clrscr();
 reballa:;
 cout<<"\n  Computer has Entered the runs. You also enter the value\n  =>";
 int ball;
 cin>>ball;
 if(ball>6)
 {clrscr();
 gotoxy(35,4);
 {cout<<"THIS WON'T HELP. RE-TRY!";
 delay(3000);
 clrscr();
 goto reballa;
 }
 }
 int devsc;
 devsc=1+random(6);
 if(devsc!=ball)
 {cout<<"  YOU="<<ball<<"Runs\n  COMPUTER="<<devsc<<"Runs.";

 devruns+=devsc;
 cout<<"\n\n  TOTAL SCORE="<<devruns;
 cout<<"\n  Press 0 to continue\n =>";
 int ballloop;
 cin>>ballloop;
 }
 else if(devsc==ball)
 {f=1;
 cout<<" YOU="<<ball<<"Runs.\n COMPUTER="<<devsc<<"runs.";
 cout<<"\n\n\n  OUT!\n\n\n  TOTAL SCORE= "<<devruns;
 cout<<"\n\n\n  Press 0 to continue\n  =>";
 int result_sess1;
 cin>>result_sess1;
 }
  }

gotoxy(32,5);
 {clrscr();
 cout<<"  YOUR  TURN TO BAT!";
 cout<<"\n  Press 0 to continue\n";
 int shunya;
 cin>>shunya;
 }                                        //Player Batting
 int runs=0;
while(f!=0)
{clrscr();
int score;
gotoxy(45,2);
{cout<<"TO WIN: "<<(devruns+1)-runs;
}
gotoxy(45,3);
{
cout<<"TARGET: "<<devruns+1;
}
rebata:;
cout<<"\n  Enter your runs!\n =>";

cin>>score;
if(score>6)
{clrscr();
gotoxy(35,4);
{cout<<"WARNING: NO CHEATING!";
delay(3000);
clrscr();                                      ////left here!!!!!!!!!!!!!!!
goto rebata;
}
}
int compsc;
compsc=1+random(6);
if(compsc!=score)
{cout<<"  YOU="<<score<<" runs.\n  COMPUTER="<<compsc<<" runs.";
runs+=score;;
cout<<"\n\n  TOTAL SCORE="<< runs;

cout<<"\n\n  Press 0 to continue\n =>";
int loop;
cin>>loop;
}int devrunsplusone;
devrunsplusone=devruns+1;
if(devrunsplusone<=runs)
{clrscr();
goto winlab;
}///////////////////////////////////
else if(compsc==score)
{f=0;
cout<<"\n\n  YOU="<<score<<" runs.\n  COMPUTER="<<compsc<<" runs.";
cout<<"\n\n\n  OUT!\n\n\n  TOTAL SCORE= "<<runs;
cout<<"\n\n\n  Press 0 to continue\n  =>";
int zero;
cin>>zero;						   //|---------------
}                                                     // |
 }//<----------while loop ends!             <------------|
 clrscr();
 winlab:;
 if(devruns>runs)
 {currency-=525;
 cout<<"\n  COMPUTER wins by "<<(devruns-runs)<<"Runs.\n  Account De-credited by $525.\nMONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int basekaur;
 cin>>basekaur;
 }
 else if(devruns<runs)
 {currency+=525;
 cout<<"\n  YOU win by "<<(runs-devruns)<<"Runs.\n  Account Credited with $525.\nMONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int akhritha;
 cin>>akhritha;
 }
 else
 {cout<<"\n  DRAW";

 cout<<"\n  Press 5 to continue\n  =>";
 int endofsess1;
 cin>>endofsess1;
 }



break;
}        // case 2(int switch end)
}     //switch internal end
}break;}        //case 5 ending
//rps ends!
//===================================CASE 6====================================================================
case 6:{ tryagain:;
randomize();
clrscr();
int life=3;
gotoxy(32,12);
{cout<<"MINES AND DUMPLINGS";
cout<<"\n\nPress 5 to continue\n=>";
int shurukare;
cin>>shurukare;
}
clrscr();
int dumpling=0;
gotoxy(35,9);
{cout<<"RULES\n"<<"THIS IS A GAME WITH MINES AND DUMPLINGS.YOU HAVE TO INFILTRATE IN THE ENEMY BASE AND - YOU HAVE GOT TO STEAL THEIR DUMPLINGS. THE DUMPLINGS WILL  APPEAR ON THE SCREEN RANDOMLY.EACH ONE EARNS YOU $40. YOU HAVE TO GO TO THEM AS CAREFULLY AS  POSSIBLE BECAUSE IT'S NOT SO EASY! THERE ARE UNDETECTABLE MINES IN THE WAY. THERE ARE 19 0F THEM. THEY WILL BE SHOWN TO YOU FOR 5 SECONDS. THE TIME IS KNOWN AS VISION TIME. TRY TO REMEMBER THEIR POSITIONS AS HARD AS YOU CAN! AFTER THE VISION TIME ENDS, THE GAME STARTS! YOU WILL HAVE 3 LIVES AS THE GAME STARTS. YOU CAN ALSO USE MINEVIEW AND SEE THE MINES ONCE AGAIN. BUT, ONE MINEVIEW COSTS YOU 1 LIFE. SO GET YOUR MIND IN THE PURSUIT AND GET READY FOR SOME DUMPLING WAR. CONTROLS AND LEGEND ON THE NEXT SCREEN \n\nPress 5 to continue\n=>";
int helloitsme;
cin>>helloitsme;

clrscr();
}
char move;
cout<<"                                  Controls\nw ->UP\ns ->DOWN\na ->LEFT\nd ->RIGHT\n\n\nKEY:\n() Represents Your Location\n(O) Represents the Dumplings\n(X) Represents the Mines\n(v) To Use Mineview\n(e) Exit\n\nPress 0 to continue\n=>";
int zero;
cin>>zero;
clrscr();
int a=35;
int b=12;
gotoxy(a,b);
{cout<<" VISION TIME";
delay(1300);
clrscr();
gotoxy(7,5);
{cout<<"(X)";
}
gotoxy(17,2);
{cout<<"(X)";
}
gotoxy(45,2);
{cout<<"(X)";
}
gotoxy(65,3);
{cout<<"(X)";
}
gotoxy(13,7);
{cout<<"(X)";
}
gotoxy(35,6);
{cout<<"(X)";
}
gotoxy(35,10);
{cout<<"(X)";
}
gotoxy(48,9);
{cout<<"(X)";
}
gotoxy(55,14);
{cout<<"(X)";
}
gotoxy(5,11);
{cout<<"(X)";
}
gotoxy(21,12);
{cout<<"(X)";
}
gotoxy(62,10);
{cout<<"(X)";
}
gotoxy(68,18);
{cout<<"(X)";
}
gotoxy(6,16);
{cout<<"(X)";
}
gotoxy(6,21);
{cout<<"(X)";
}
gotoxy(37,18);
{cout<<"(X)";
}
gotoxy(27,22);
{cout<<"(X)";
}
gotoxy(74,20);         // BEWARE: MINES ALL OVER!
{cout<<"(X)";
}
gotoxy(50,23);
{cout<<"(X)";
}
gotoxy(17,18);
{cout<<"(X)";
}

gotoxy(45,18);
{cout<<"(X)";
}
  gotoxy(71,5);
{cout<<"(X)";
}
gotoxy(70,15);
{cout<<"(X)";
}
gotoxy(10,24);
{cout<<"(X)";
}
gotoxy(55,24);
{cout<<"(X)";
}
gotoxy(35,14);
{cout<<"[5]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[4]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[3]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[2]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[1]";
delay(1000);}
clrscr();
}

int f=3;
int l,m;
dumpinc:;
l=1+random(80);
m=1+random(25);


while(2>1)
{lifeleft:;
gotoxy(60,3);
{cout<<"(v)-Use Mine-view";
}
gotoxy(60,4);
{cout<<"(e)-Exit";
}
if(f==2)
{clrscr();
gotoxy(35,12);
{
cout<<"PLAY!";
delay(1000);
clrscr();
}
f=5;
}
if(life==3)
{gotoxy(60,2);
{cout<<"  ";
}
}
if(life==2)
{gotoxy(60,2);
{cout<<" ";
}
}
if(life==1)
{gotoxy(60,2);
{cout<<"";
}
}
gotoxy(l,m);
{cout<<"(O)";
}
gotoxy(35,12);
move=getch();

if(move=='d')
{clrscr();
a+=1;
gotoxy(a,b);
{cout<<"()";
}
}
else if(move=='a')
{clrscr();
a-=1;
gotoxy(a,b);
{cout<<"()";
}
}
else if(move=='w')
{clrscr();
b-=1;
gotoxy(a,b);
{cout<<"()";
}
}
else if(move=='s')
{clrscr();
b+=1;
gotoxy(a,b);
{cout<<"()";
}
}
else if(move=='e')
{
clrscr();
cout<<"Thanks for playing!\n Bye.";
delay(1200);
goto gamemid;
}
else if((move!='w')||(move!='a')||(move!='s')||(move!='d')||(move!='e'))
{clrscr();
gotoxy(a,b);
}
if((a==7)&&(b==5))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(7,5);
{cout<<"(X)";
}
delay(2200);
goto gamelab;
}
else if((a==17)&&(b==2))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(17,2);
{cout<<"(X)";
}
delay(2200);
goto gamelab;
}
else if((a==45)&&(b==2))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(45,2);
{cout<<"(X)";
}
delay(2800);
goto gamelab;
}
else if((a==65)&&(b==3))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(65,3);
{cout<<"(X)";
}
delay(2200);
goto gamelab;
}
else if((a==13)&&(b==7))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(13,7);
{cout<<"(X)";
}
delay(2800);
goto gamelab;
}
else if((a==35)&&(b==6))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(35,6);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==35)&&(b==10))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(35,10);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==48)&&(b==9))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(48,9);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==55)&&(b==14))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3400);
gotoxy(55,14);
{cout<<"(X)";
}
goto gamelab;
}
else if((a==5)&&(b==11))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(5,11);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==21)&&(b==2))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(21,12);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==62)&&(b==10))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(62,10);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==68)&&(b==18))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(68,18);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==6)&&(b==16))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(6,16);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==6)&&(b==21))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(6,21);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==37)&&(b==18))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(37,18);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==27)&&(b==22))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
gotoxy(27,22);
{cout<<"(X)";
}
delay(3400);
goto gamelab;
}
else if((a==74)&&(b==20))
{clrscr();
gotoxy(74,20);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(74,20);
{cout<<"(X)";
}
goto gamelab;
}
else if((a==50)&&(b==23))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(50,23);
{cout<<"(X)";
}
goto gamelab;
}

else if((a==17)&&(b==18))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(17,18);
{cout<<"(X)";
}
goto gamelab;
}
else if((a==45)&&(b==18))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(45,18);
{cout<<"(X)";
}
goto gamelab;
}
else if((a==71)&&(b==5))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(71,5);
{cout<<"(X)";
}
goto gamelab;
}

else if((a==70)&&(b==15))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(70,15);
{cout<<"(X)";
}
goto gamelab;
}
else if((a==10)&&(b==24))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(10,24);
{cout<<"(X)";
}
goto gamelab;
}

else if((a==55)&&(b==24))
{clrscr();
gotoxy(35,11);
{cout<<"You Lose!(Mine activated)";
}
delay(3500);
gotoxy(55,24);
{cout<<"(X)";
}
goto gamelab;
}
if((a==l)&&(b==m))
{dumpling+=1;
currency+=40;
cout<<"Dumpling Successfully Stolen !";
goto dumpinc;
}
if(move=='v')
{
 clrscr();
 gotoxy(31,10);
 {cout<<" WELCOME TO MINEVIEW";
 delay(1500);
 }
 clrscr();
gotoxy(7,5);
{cout<<"(X)";
}
gotoxy(17,2);
{cout<<"(X)";
}
gotoxy(45,2);
{cout<<"(X)";
}
gotoxy(65,3);
{cout<<"(X)";
}
gotoxy(13,7);
{cout<<"(X)";
}
gotoxy(35,6);
{cout<<"(X)";
}
gotoxy(35,10);
{cout<<"(X)";
}
gotoxy(48,9);
{cout<<"(X)";
}
gotoxy(55,14);
{cout<<"(X)";
}
gotoxy(5,11);
{cout<<"(X)";
}
gotoxy(21,12);
{cout<<"(X)";
}
gotoxy(62,10);
{cout<<"(X)";
}
gotoxy(68,18);
{cout<<"(X)";
}
gotoxy(6,16);
{cout<<"(X)";
}
gotoxy(6,21);
{cout<<"(X)";
}
gotoxy(37,18);
{cout<<"(X)";
}
gotoxy(27,22);
{cout<<"(X)";
}
gotoxy(74,20);
{cout<<"(X)";
}                                      //  ^
gotoxy(50,23);       //|MINE-VIEW|||||||   |
{cout<<"(X)";        //|MINE-VIEW||||||||  |
}                    //|MINE-VIEW||||||||| |
gotoxy(17,18);
{cout<<"(X)";
}

gotoxy(45,18);
{cout<<"(X)";
}
  gotoxy(71,5);
{cout<<"(X)";
}
gotoxy(70,15);
{cout<<"(X)";
}
gotoxy(10,24);
{cout<<"(X)";
}
gotoxy(55,24);
{cout<<"(X)";
}
gotoxy(a,b);
{cout<<"()";
}
textattr(132);
gotoxy(a-4,b+1);
{
cout<<"YOU ARE HERE!";
}
gotoxy(l,m);
{cout<<"(O)";
}


textbackground(CYAN);
textcolor(570);
gotoxy(35,14);
{cout<<"[5]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[4]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[3]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[2]";
delay(1000);
}
gotoxy(35,14);
{cout<<"[1]";
delay(1000);
}
clrscr();
life-=1;
if(life==0)
{gotoxy(35,3);
{cout<<"No Lives!";
}
delay(3000);
goto sayonara;
}
}
}     //Interpretation hub. KING TERMINAL.
gamelab:;                       //WELCOME TO THE GAMELAB...
clrscr();
if((life==1)||(life==2)||(life==3))
{life=life-1;
if(life==0)
{cout<<"  No lives left\n";
delay(1500);
goto sayonara;
}
gotoxy(a,b+1);
{cout<<life<<" lives left ";
}
goto lifeleft;
}
sayonara:;
gamemid:;
cout<<dumpling<<"  Dumplings Stolen.\n\nMONEY LEFT: $"<<currency;
cout<<"\n\n  (1)Retry game\n  (2)Go back to casino\n  (3)Exit\n=>";
int kyakare;
cin>>kyakare;
switch(kyakare)
{case 1:goto tryagain;
case 2:{clrscr();
goto moneychecknback;}
case 3:{cout<<"\n\n  Thanks for playing :)";
exit(0);
}
}

}
//===============================CASE 7=============================================
case 7:{clrscr();
cout<<"\n  NAME: "<<name<<"\n  YOU HAVE $"<<currency<<" LEFT\n\n ";
if(currency<200)
{cout<<"\nSorry "<<name<<" You do not have the minimum money required to enter the casino. Please exit and go back to the homepage. You can check out more programs there:)";
}
else if((currency>=200)&&(currency<300))
{cout<<"\nHey "<<name<<" You can try for the coin toss. Your balance is insufficient for dice game. Good Luck! :) ";
}
else if((currency>=300)&&(currency<600))
{cout<<"\nHey "<<name<<"  You can play any game of your choice. But the amount is not far from the minimum amount. Be careful and Good Luck! :)";
}
else if((currency>=600)&&(currency<1000))
{cout<<" Hey "<<name<<"! You have a Good Amount of Cash! Use it wisely! Good Luck!";
}
else if(currency>=1000)
{cout<<"Hey "<<name<<" You Are rich. Go back to the Casino and Enjoy! Good Luck!:)";
}
else if(currency>=2000)
{cout<<" Hey "<<name<<" You Look Professional. That's a Lot of Money! Good Luck!:)";
}
cout<<"\n  PRESS 5 TO GO BACK \n";
int sve;
cin>>sve;
delay(350);
clrscr();
goto moneychecknback;
}
//==================================CASE 8=============================================================
case 8:{clrscr();
goto namechange;
}
//==================================CASE 9======================================================================
case 9:{clrscr();
goto dino;
}
//==================================CASE 10===================================================================
case 10:{cout<<"\n  THANKS FOR PLAYING "<<name<<", CIAO.!\n";
exit(0);
}
//==================================DEFAULT==================================================================
default :{clrscr();cout<<"  Enter a valid option";goto aboveall;}
}

if((opt==1)||(opt==2)||(opt==3)||(opt==4)||(opt==5)||(opt==6))
{yeh:
cout<<"\n  (1)RETRY THE GAME\n  (2)GO BACK TO CASINO\n  (3)EXIT\n  =>";
int dec;
cin>>dec;
switch(dec)
{case 1:goto above1;
case 2:{clrscr();
clrscr();
goto labelx;
}
case 3:{clrscr();
cout<<"\n  THANKS FOR PLAYING "<<name<<", CIAO.!\n";
cout<<"\n  TYPE EXIT TO LEAVE\n  =>";
int key;
cin>>key;
exit(0);
}


default:{cout<<"  Enter a valid option";
delay(2000);
goto yeh;
}
}
}
dino:;
 clrscr();
 int a;
 helium:;
 cout<<"Press 5 to continue\n";
cin>>a;
if(a==5)
{clrscr();}
else
{goto helium; }
}
//--------------------------------CASINO ENDS----------------------------------------------------------------------------------------------------------

void credit()//============================[DEFINITION-2]===========================
{clrscr();
{
cout<<"  \n";


cout<<"\n\n DEVELOPERS AND ALGORITHMISTS: \n              PRANAV SOMASEKHAR\n              ARYAN SINGH\n              KAPISH NAITHANI\n              PRANAV WARRIER\n              AKASHDEEP SINGH\n";


cout<<"\n\nCOMPUTER SCIENCE TEACHER: MRS. GANGA";


cout<<"\n\nREFERENCES: COMPUTER SCIENCE WITH C++ ~ SUMITA ARORA";

cout<<"\n\nPRESS 5 TO CONTINUE OR ANY KEY TO EXIT.\n";
}
int a;
cin>>a;
if(a==5)
{clrscr();}
else
{
exit(1);
}}
//------------------------------CREDITS END----------------------------------------------------------------------------------------------------|
void door()//==============================[FUNCTION-3]========================================================================================|
{clrscr();
gotoxy(32,12);
{cout<<"THANKS FOR COMING! ";
delay(1900);
}
clrscr();
gotoxy(32,12);
{cout<<"DEVELOPED-SENIOR COMP LAB";
delay(1900);}
clrscr();
gotoxy(35,12);
{cout<<"NCS KOCHI.";
delay(1900);
}
exit(0);}
//=========================================[FUNCTION 4]========================================================================================|
void oldschool()
{clrscr();
 uturn:;
cout<<"Which Program Do You Want To View?\n\n\n(1)MULTIPLICATION OF MATRICES\n\n(2)FINDING NUMBER OF ODD NUMBERS\n\n(3)GO TO MAIN MENU\n=>";
int lego;
cin>>lego;
clrscr();
switch(lego)
{case 1:{
int a[100][100],b[100][100],m1,n1,m2,n2,i,j;
cout<<"\nenter the order of the matrix\n";
cin>>m1>>n1;
cout<<"\nenter the values\n";
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{cin>>a[i][j];
}
}
cout<<"\norder of second matrix\n\n\n";
cin>>m2>>n2;
cout<<"\nvalues\n";
for(i=0;i<m2;i++)
{
for(j=0;j<n2;j++)
{cin>>b[i][j];
}
}
int c[100][100],k;
if(n1==m2)
{for(i=0;i<m1;i++)
{
for(j=0;j<n2;j++)
{c[i][j]=0;
for(k=0;k<n1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
cout<<"\nfirst matrix;-\n";
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
cout<<a[i][j]<<"   ";
}
cout<<"\n\n";
}
cout<<"\nSecond matrix is\n\n";
for(i=0;i<m2;i++)
{
for(j=0;j<n2;j++)
{
cout<<b[i][j]<<"   ";
}
cout<<"\n\n";
}
cout<<"\nproduct matrix is\n";
for(i=0;i<m1;i++)
{
for(j=0;j<n2;j++)
{cout<<c[i][j]<<"   ";
}
cout<<"\n\n";
}
cout<<"\n\nPress 5 to continue\n=>";
int vento;
cin>>vento;
}
else
{cout<<"\nmatrices cant be multiplied\n";
cout<<"\n\nPress 5 to continue";
int jetta;
cin>>jetta;}
clrscr();break; }

 case 2:{
clrscr();
cout<<"\nhow many values would you like to enter\n";
int n,a[10];
cin>>n;
cout<<"\nenter "<<n<<" values\n";
for(int i=0;i<n;i++)
{cin>>a[i];
}
cout<<"\nthanks for the entry of values\n";

int c=0;
cout<<"\nthe number of odd numbers in the entered values are\n";
for(i=0;i<n;i++)
{if(a[i]%2!=0)
{c++;
}
}
cout<<c;
int polo;
cout<<"\n\nPress 5 to continue\n=>";
cin>>polo;
clrscr();
break;
 }
 case 3:{clrscr();
 int a;
 cout<<"Press 5 to continue\n";
cin>>a;
if(a==5)
{clrscr();goto lithium;}
else
{
exit(1); }
     }
   default:{ clrscr();
   goto uturn;
   }
   }
lithium:;}
//-=============================PROGRAM FINISH=================================================================================================|

//ARYAN(09)--KAPISH(21)--PRANAV.S(31)--PRANAV WARRIER(32)--AKASHDEEP(05)
//CLASS XI-A
//DEVELOPED AND COMPLETED ON 18 JANUARY 2018
//TURBO C++.
//NAME=PROJECT-COMPUTER SCIENCE
//4 FUNCTIONS.
//CASINO,C++ PROGRAMS,CREDITS,DOOR.
//SENIOR COMPUTER LAB, NCS KOCHI.
//LINES OF CODE= 1615.
