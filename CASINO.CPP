#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<constrea.h>
#include<dos.h>
#include<graphics.h>
#include<iomanip.h>
void main()
{clrscr();
char name[50];
namechange:;
gotoxy(35,3);
{
cout<<"\nCREATE YOUR NICKNAME\n=>";
}
cin>>name;
randomize();
clrscr();
int currency,i;
currency=1000;
labelt:;
labelo:;
labely:;
labelr:;
labelx:;
redlabel:;
clrscr();
textbackground(CYAN);
constream cout;
cout<<setclr(570);
moneychecknback:;
cout<<"                         ******                    ******";
gotoxy(35,1);
char cas[]={'C','A','S','I','N','O','-','R','O','Y','A','L','E','\0'};
for(i=0;i<=13;i++)
{
delay(225);
cout<<cas[i];
}
aboveall:
cout<<"\nHey "<<name<<"!";
cout<<"\n\nWhat would you like to do?\n(1)Roll a dice [$300]\n(2)Toss a coin [$200]\n(3)Toss Two coins[$250]\n(4)Rock,Paper And Scissors[$400]\n(5)Cricket[$525]\n(6)Check My Balance\n(7)Change My Name\n(8)Exit\n\n=>";
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
case 1:{if((currency!=300)&&(currency<300))
{clrscr();
cout<<"\nInsufficient Balance!\n";
cout<<"Press 5 to continue.";
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
cout<<"\nOkay!\n";
cout<<" Place your bet\n => ";
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
cout<<"\nHey ! congo. you win . its a "<<dice<<"\n\nYour bet was : "<<guess<<"\n\nYour account has been credited with $300\n Current Balance => "<<(currency);break;
}
else
{currency-=300;
cout<<"\nsorry Bro! pay up!. The number on the dice was "<<dice<<"\n"<<"\nYour account is debited by $300\nCurrent Balance => $"<<(currency);break;
}
}
}							  // Dice Ends here
case 2:{if((currency!=200)&&(currency<200))
{clrscr();
cout<<"\nInsufficient Balance\n";
cout<<"Press 5 to continue\n";
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
cout<<"\nOkay boss. Enter your bet\nhere are the options\n(1)Tails\n(2)Heads\n=>";
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
cout<<"\nHey! Its tails! You Won\n"<<"\nYour account has been credited with $200.\nMONEY LEFT:"<<currency;break;
}
else if((guessa==coin)&&(guessa==2))

{currency+=200;
cout<<"\nHey! Its heads! You Won\n"<<"Your account has been credited with $200.\nMONEY LEFT:"<<currency;break;
}
else
{currency-=200;
cout<<"\nSorry da! pay up!\n"<<" Your account has been debited with $200.\nMONEY LEFT:"<<currency;break;
}}
else
{clrscr();
cout<<"Enter valid option";
goto abb;
}}}   // Single Toss Ends
case 3:{if((currency!=250)&&(currency<250))
{clrscr();
cout<<"\nInsufficient Balance!";
cout<<"\nPress 5 to continue\n";
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
aab:;
cout<<"\nOkay "<<name<<"! Place your bet. Here are the options\n(1)Heads and Heads\n(2)Tails and Tails\n(3)Heads and Tails\n(4)Tails and Heads\n\n=>";
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
cout<<"\nHey! That is two heads. You  won.\n"<<"Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else if((guesst==dobco)&&(guesst==2))
{currency+=250;
cout<<"\nHey! That is two tails. You won.\n"<<"Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else if((guesst==dobco)&&(guesst==3))
{currency+=250;
cout<<"\nHey! That is a Heads and a Tails. You won.\n"<<"Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else if((guesst==dobco)&&(guesst==4))
{currency+=250;
cout<<"\nHey! That is a Tails and a Heads. You won.\n"<<"Your account has been credited with $250.\nMONEY LEFT:"<<currency;break;
}
else
{currency-=250;
cout<<"\nSorry man! You Lost.:(.";
switch(dobco)
{case 1:cout<<"It was two Heads.";break;
case 2:cout<<"It was two Tails.";break;
case 3:cout<<"It was a Heads and a Tails.";break;
case 4:cout<<"It was a Tails and a Heads.";break;
}
cout<<"\nYour account has been debited with $250. \nMONEY LEFT:"<<currency;break;
}}
else
{clrscr();
cout<<"Enter a valid option.";
goto aab;
}}} 			      //End of Double Toss!
case 4:{                               //rps starts
if((currency!=400)&&(currency<400))
{clrscr();
cout<<"\nInsufficient Balance. \nPress 5 To Continue\n=>";
int firsefive;
cin>>firsefive;
clrscr();
goto labelo;
}
else
{ upar:;           //Rps starts
cout<<"Choose The Game Type(Best of 3,5,..)\n";
int gametype;
cin>>gametype;
clrscr();
if(gametype%2!=0)
{gotoxy(35,12);
{cout<<"RULES:\nTHIS IS A BEST OF "<<gametype<<" BET! FIRST YOU MAKE YOUR CALL. THEN THE COMPUTER. THEN THE  GAME REPEATS "<<gametype<<" TIMES.LUCK DOES ITS WORK  AND THE WINNER IS DECLARED. SO GO AND PLAY!\n\nPress 5 to continue\n=>";
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
cout<<"\n\n\nMake Your Call\n(1)Rock\n(2)Paper\n(3)Scissors\n=>";
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
delay(500);
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
{clrscr();cout<<"\n\nPlease enter a valid value.";goto hhh;}
}
cout<<"\nPress 5 to continue\n=>";
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
{cout<<"\nPlease Enter a Valid Value. So That a Winner Can Be Decided\nPress 5 to Re-enter\n=> ";
int refive;
cin>>refive;
clrscr();
goto upar;
}
}
} break;
case 5:                                           //case 5 --->cricket
{if(currency<525)
{clrscr();
cout<<"Insufficient Balance!\n Press 5 to continue\n=>";
int sise;
cin>>sise;
goto redlabel;
}
 clrscr();
cout<<"\nCHOOSE AN OPTION:\n(1)BAT\n(2)BOWL\n=>";
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
cout<<"\nEnter your runs!\n=>";
int score;
cin>>score;
if(score>6)
{clrscr();
gotoxy(35,4);
{cout<<"WARNING: NO CHEATING!";
delay(3000);
clrscr();
goto rebat;
}
}
int compsc;
compsc=1+random(6);
if(compsc!=score)
{cout<<"YOU="<<score<<" runs.\nCOMPUTER="<<compsc<<" runs.";
runs+=score;
cout<<"\n\nTOTAL SCORE="<< runs;

cout<<"\n\nPress 0 to continue\n=>";
int loop;
cin>>loop;
}
else if(compsc==score)
{cout<<"YOU="<<score<<" Runs.\nCOMPUTER="<<compsc<<" Runs.";
cout<<"\n\n\nOUT!\n\n\nTOTAL SCORE= "<<runs;
cout<<"\n\n\nPress 0 to continue\n=>";
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
 cout<<"\nComputer has Entered the runs. You also enter the value\n=>";
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
 {cout<<"\n\nYOU="<<ball<<"Runs\nCOMPUTER="<<devsc<<"Runs.";

 devruns+=devsc;
 cout<<"\n\nTOTAL SCORE="<<devruns;
 cout<<"\nPress 0 to continue\n=>";
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
 cout<<"\n\nYOU="<<ball<<"Runs.\nCOMPUTER="<<devsc<<"runs.";
 cout<<"\n\n\nOUT!\n\n\nTOTAL SCORE= "<<devruns;
 cout<<"\n\n\nPress 0 to continue\n=>";
 int result_sess1;
 cin>>result_sess1;
 }
 }
 winlabtwo:;
 clrscr();
 if(devruns>runs)
 {currency-=525;
 cout<<"\n COMPUTER wins by "<<(devruns-runs)<<" Runs.\n\nAccount De-credited by $525."<<"MONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int basekaur;
 cin>>basekaur;
 }
 else if(devruns<runs)
 {currency+=525;
 cout<<"\nYOU win by "<<(runs-devruns)<<" Runs.\n\nAccount Credited with $525."<<"MONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int akhritha;
 cin>>akhritha;
 }
 else
 {cout<<"\nDRAW";

 cout<<"\nPress 5 to continue\n=>";
 int endofsess1;
 cin>>endofsess1;
 }


break;
}

case 2:{ if(currency<525)          ////////////////////Case 2: bowling!!
{clrscr();
cout<<"\nInsufficient Balance\nPress 5 to exit\n=>";
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
 cout<<"\nComputer has Entered the runs. You also enter the value\n=>";
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
 {cout<<"YOU="<<ball<<"Runs\nCOMPUTER="<<devsc<<"Runs.";

 devruns+=devsc;
 cout<<"\n\nTOTAL SCORE="<<devruns;
 cout<<"\nPress 0 to continue\n=>";
 int ballloop;
 cin>>ballloop;
 }
 else if(devsc==ball)
 {f=1;
 cout<<"YOU="<<ball<<"Runs.\nCOMPUTER="<<devsc<<"runs.";
 cout<<"\n\n\nOUT!\n\n\nTOTAL SCORE= "<<devruns;
 cout<<"\n\n\nPress 0 to continue\n=>";
 int result_sess1;
 cin>>result_sess1;
 }
  }

gotoxy(32,5);
 {clrscr();
 cout<<"YOUR  TURN TO BAT!";
 cout<<"\nPress 0 to continue\n";
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
cout<<"\nEnter your runs!\n=>";

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
{cout<<"YOU="<<score<<" runs.\nCOMPUTER="<<compsc<<" runs.";
runs+=score;;
cout<<"\n\nTOTAL SCORE="<< runs;

cout<<"\n\nPress 0 to continue\n=>";
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
cout<<"\n\nYOU="<<score<<" runs.\nCOMPUTER="<<compsc<<" runs.";
cout<<"\n\n\nOUT!\n\n\nTOTAL SCORE= "<<runs;
cout<<"\n\n\nPress 0 to continue\n=>";
int zero;
cin>>zero;						   //|---------------
}                                                     // |
 }//<----------while loop ends!             <------------|
 clrscr();
 winlab:;
 if(devruns>runs)
 {currency-=525;
 cout<<"\n COMPUTER wins by "<<(devruns-runs)<<"Runs.\nAccount De-credited by $525.\nMONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int basekaur;
 cin>>basekaur;
 }
 else if(devruns<runs)
 {currency+=525;
 cout<<"\nYOU win by "<<(runs-devruns)<<"Runs.\nAccount Credited with $525.\nMONEY LEFT: "<<currency<<"\nPress 5 to continue\n=>";
 int akhritha;
 cin>>akhritha;
 }
 else
 {cout<<"\nDRAW";

 cout<<"\nPress 5 to continue\n=>";
 int endofsess1;
 cin>>endofsess1;
 }



break;
}        // case 2(int switch end)
}     //switch internal end
}break;}        //case 5 ending
//rps ends!
case 6:{clrscr();
cout<<"\nNAME: "<<name<<"\nYOU HAVE $"<<currency<<" LEFT\n\n ";
if(currency<200)
{cout<<"\nSorry . You do not have the minimum money required to enter the casino. Please exit and go back to the homepage. You can check out more programs there:)";
}
else if((currency>=200)&&(currency<300))
{cout<<"\nYou can try for the coin toss. Your balance is insufficient for dice game. Good Luck! :) ";
}
else if((currency>=300)&&(currency<600))
{cout<<"\nYou can play any game of your choice. But the amount is not far from the minimum amount. Be careful and Good Luck! :)";
}
else if((currency>=600)&&(currency<1000))
{cout<<"Hey "<<name<<"! You have a good amount of cash! Use it wisely! Good Luck!";
}
else if(currency>=1000)
{cout<<"You are rich. Go back to the casino and enjoy! Good Luck!:)";
}
else if(currency>=2000)
{cout<<"You Look Professional. That's a Lot of Money! Good Luck!:)";
}
cout<<"\nPRESS 5 TO GO BACK \n";
int sve;
cin>>sve;
delay(350);
clrscr();
goto moneychecknback;
}
case 7:{clrscr();
goto namechange;
}
case 8:{cout<<"\nTHANKS FOR PLAYING,CIAO.!\n";
goto bahar;
}
default :{clrscr();cout<<"Enter a valid option";goto aboveall;}
}

if((opt==1)||(opt==2)||(opt==3)||(opt==4)||(opt==5))
{yeh:
cout<<"\n(1)RETRY THE GAME\n(2)GO BACK TO CASINO\n(3) EXIT\n=>";
int dec;
cin>>dec;
switch(dec)
{case 1:goto above1;
case 2:{clrscr();
goto labelx;
}
case 3:{clrscr();
cout<<"\nTHANKS FOR PLAYING ,CIAO.!\n";
cout<<"\nTYPE EXIT TO LEAVE\n=>";
int key;
cin>>key;
exit(0);
}
default :{clrscr();cout<<"Enter a valid option";goto yeh;}
}}


bahar:
getch();
}



















