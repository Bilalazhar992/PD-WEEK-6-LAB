#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X= x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
 void show (int);
  main()
  {
   system("cls");
   maze();
   int score;
   score=0; 
   show (score);
   gotoxy(14,9);
   cout<<"G";
   gotoxy(19,19);
   cout<<"G";
   gotoxy(20,21);
   cout<<"G";
   int x=4;
   int y=2;
   gotoxy(x,y);
   cout<<"P";
     while(true)
      {
       if (GetAsyncKeyState(VK_UP))
      {
       char nextLocation = getCharAtxy(x, y - 1);
       if (nextLocation != '#' & nextLocation != '|' & nextLocation != '%' & nextLocation != 'G' )
        {
         gotoxy(x,y);
         cout<<" ";
         y=y-1;
         gotoxy(x,y);
         cout<<"P";
         Sleep(200);
        }
       if (nextLocation == 'G')
         {
          gotoxy(x,y);
          cout<<" ";
          gotoxy(4,2);
          cout<<"P";
          x = 4;
          y = 2;
          gotoxy(8,24);
          cout <<"    ";
          gotoxy(8,24);
          cout <<"0";
          score=0;    
         }
       if (nextLocation == '.')
        {
         score++;
         gotoxy(8,24);
         cout << score;
        }
       }
      if (GetAsyncKeyState(VK_DOWN))
      {
       char nextLocation = getCharAtxy(x, y + 1);
       if (nextLocation != '#' & nextLocation != '|' & nextLocation != '%' & nextLocation != 'G'  )
        {
         gotoxy(x,y);
         cout<<" ";
         y=y+1;
         gotoxy(x,y);
         cout<<"P";
         Sleep(200);
        }
        if (nextLocation == 'G')
       {
        gotoxy(x,y);
        cout<<" ";
        gotoxy(4,2);
        cout<<"P";
        x = 4;
        y = 2;
        gotoxy(8,24);
        cout <<"    ";
        gotoxy(8,24);
        cout <<"0";
        score=0;  
       }
       if (nextLocation == '.')
        {
         score++;
         gotoxy(8,24);
         cout << score;
        }
      }
      if (GetAsyncKeyState(VK_LEFT))
      {
       char nextLocation = getCharAtxy(x-1,y);
       if (nextLocation != '#' & nextLocation != '|' & nextLocation != '%' & nextLocation != 'G'  )
        {
         gotoxy(x,y);
         cout<<" ";
         x=x-1;
         gotoxy(x,y);
         cout<<"P";
         Sleep(200);
        }
       if (nextLocation == 'G')
       {
        gotoxy(x,y);
        cout<<" ";
        gotoxy(4,2);
        cout<<"P";
        x = 4;
        y = 2;
        gotoxy(8,24);
        cout <<"    ";
        gotoxy(8,24);
        cout <<"0";
        score=0;   
       }
        if (nextLocation == '.')
        {
         score++;
         gotoxy(8,24);
         cout << score;
        }
      }
     if (GetAsyncKeyState(VK_RIGHT))
      {
       char nextLocation = getCharAtxy(x+1,y);
       if (nextLocation != '#' & nextLocation != '|' & nextLocation != '%' & nextLocation != 'G'  )
        {
         gotoxy(x,y);
         cout<<" ";
         x=x+1;
         gotoxy(x,y);
         cout<<"P";
         Sleep(200);
        }
       if (nextLocation == 'G')
       {
        gotoxy(x,y);
        cout<<" ";
        gotoxy(4,2);
        cout<<"P";
        x = 4;
        y = 2;
        gotoxy(8,24);
        cout <<"    ";
        gotoxy(8,24);
        cout <<"0";
        score=0;  
       }
        if (nextLocation == '.')
        {
         score++;
         gotoxy(8,24);
         cout << score;
        }
       }
     }
  }
void maze ()
 {
cout<<"############################################################################################"<<endl;
cout<<"||..   .....................................................................     ......   ||"<<endl;
cout<<"||..   %%%%%%%%%%%%%%%%%%%%%           ...       %%%%%%%%%%%%%%%%%%%%%  |%|.      %%%%    ||"<<endl;
cout<<"||..            |%|      |%|        |%|...       |%|               |%|  |%|.       |%|    ||"<<endl;
cout<<"||..            |%|      |%|        |%|...       |%|               |%|  |%|.       |%|    ||"<<endl;                                                                                                                                                                                                                                                                             
cout<<"||..            %%%%%%%%%%%%    . . |%|...       %%%%%%%%%%%%%%%%%%%%%     .      %%%%.   ||"<<endl;
cout<<"||..            |%|      |%|    . . |%|...       .....................  |%|.          .   ||"<<endl;
cout<<"||..            %%%%%%%%%%%%    . . |%|...       %%%%%%%%%%%%%%%%%%%%%  |%|.      %%%%.   ||"<<endl;                                                                                        
cout<<"||..                     |%|    .                |%|................    |%|.       |%|.   ||"<<endl;
cout<<"||..         ..........  |%|    .                |%|                |%|    .       |%|.   ||"<<endl;
cout<<"||..|%|      |%|%%%%|%|. |%|    . |%|               ................|%|    .  |%|. |%|.   ||"<<endl;
cout<<"||..|%|      |%|    |%|..         %%%%%%%%%%%%%%%%  ................|%|    ...|%|.        ||"<<endl;
cout<<"||..|%|      |%|    |%|..                    ...|%| ................|%|    ...|%|.        ||"<<endl;
cout<<"||..|%|                 .                    ...|%|                        ...|%|%%%%%%   ||"<<endl;
cout<<"||..|%|      %%%%%%%%%%%%%%%%%               ...|%|%%%%%%%%%%%%%%       |%| . |%|         ||"<<endl;
cout<<"||................................................................      |%| ...........   ||"<<endl;
cout<<"||  ..............................................................           .........    ||"<<endl;
cout<<"||..|%|      |%|    |%|..         %%%%%%%%%%%%%%%%     .............|%| |%| ..|%|.        ||"<<endl;
cout<<"||..|%|      |%|    |%|..                    ...|%|              %%%%%% |%| ..|%|.        ||"<<endl;
cout<<"||..|%|                 .                    ...|%|                     |%| ..|%|.        ||"<<endl;
cout<<"||..|%|     %%%%%%%%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%%%%%%%  |%| ..|%|%%%%%%   ||"<<endl;
cout<<"||....................................................................  |%| ............  ||"<<endl;
cout<<"||  ..................................................................          ........  ||"<<endl;                                                                                        
cout<<"############################################################################################"<<endl;
 }
 void show (int score )
 {
  cout<<" Score= "<<score;
 }
