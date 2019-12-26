/*
School  : Contra Costa College 
Term    : 2017 Spring
Course:   Comp-251-2384
          Fundamentals of Computer Science with C++

Chapter : 8
Program : Pr08b-Leap-Gurung-Rabin.cpp
Author  : Gurung, Rabin
Date    : Mar. 21, 2017

Sample
Purpose : Continue learning about the functions,
          including their parameters and prototypes.
         
          Review data validation, "while" and "for" 
          loops, and nested "if" statements.
Sample 
Problem : Determine which years are leap years,
          between beginning and ending years that 
          a user chooses
   
          This program is similar to the earlier 
          Pr06c assignment, but this program must 
          use:

          -- function prototypes
          -- parameters with all functions
          -- the year Britain adopted the Gregorian
             calendar as the first valid year
          -- a "for" (instead of "while") loop to 
             identify leap years and output lines 
          -- a batch file to execute the program and 
             to output a count of leap years
 
Submit : Two files with the same name, except
         for the extension:
         -- source (.cpp) file
         -- batch  (.bat) file
*/
         
//===================================================
//Preprocessor Directives
//---------------------------------------------------
 
#include<iostream>

using namespace std;

//===================================================
//Function Prototypes
//---------------------------------------------------
void putHead(int, int);
int  getBeg (int, int);
int  getEnd (int, int);
int  putYear(int, int);

//***************************************************
//Main Routine
//---------------------------------------------------

int main()
{
  //Declare variables
 
  int greg;  //Britain's first Gregorian year
  int now ;  //Current Year
 
  int beg ;  //Year to begin processing
  int end ;  //Year to end   processing
 
  int count; //Count of leap years

  //Initialize variables
 
  greg = 1752;
  now  = 2017;
  
  //To the console, output a program heading
 
  putHead (greg, now);

  //From the console, input beginning and ending
  //years
  
  beg   = getBeg (greg, now);
  end   = getEnd (beg,  now);
  
  //To the console, output results
  
  count  = putYear (beg, end);
  return count;
}

//---------------------------------------------------
//Functions
//***************************************************

void putHead (int greg, int now)
{

  //To the consle, output a program heading
  
  cout <<                                                endl;
  cout <<"Leap Year Program"                          << endl;
  cout <<"-------------------------"                  << endl;
  cout <<                                                endl; 
  cout <<"This program determines whether"            << endl;
  cout <<"years are leap years (Y means"              << endl; 
  cout <<"yes, N means no)."                          << endl;
  cout <<                                                endl;
  cout <<"Choose years for which to begin"            << endl;
  cout <<"and end processing, between"                << endl;
  cout << greg << " and "  << now << "."              << endl;
  cout <<                                                endl; 

}

int getBeg (int greg, int now)
{

  //Form the console, input and validate a 
  //beginning year, and send back that year to 
  //the calling routine

  int beg;
 
  while (true) 
  {
    cout << "Beg. year? ";
    cin  >>  beg;

    if (cin. fail())
    {
      cin.clear();
      cin.ignore(1000,10);

      cout << "Invalid \a\n";
      continue;
    }
 
    if (beg >= greg && beg <= now)
    {
      break;
    }
    else 
    {
      cout << "Invalid \a\n";
    }
  }
  cout << endl;
  return beg;
}
 
int getEnd(int beg, int now)
{  
  //Form the console, input and validate a 
  //ending year, and send back that year to 
  //the calling routine

 
  int end;

  while (true)
  {
    cout << "End year ? ";
    cin  >>  end;

    if (cin. fail())
    {
      cin.clear();
      cin.ignore(1000,10);

      cout << "Invalid \a\n";
      continue;
    }
 
    if (beg <= end && end <= now)
    {
      break;
    }
    else 
    {
      cout << "Invalid \a\n";
    }
  }
  cout << endl;
  return end;
}

int putYear (int beg, int end)
{

  //To the console, output years and whether they 
  //are leap years. Also count leap years, and 
  //send back that count to the calling routine.
  
  //Declare variables
  
  int i;       //Year loop index
  int count;   //Count of leap years
  
  char leap;   //Is year leap(Y or N)?
  
  //Initialize variables
   
  count = 0;
 
  //To the console, output column headings

  cout << "Year  " <<"Leap?" << endl; 
  cout << "----  " <<"-----" << endl;
  cout << endl; 

  for (i = beg; i <= end; i++)
  {
    leap = 'N';
    
    if   (i % 100 == 0)
    {
      if (i % 400 == 0) leap = 'Y';
 
    }
    else
    {
      if (i % 4 == 0) leap = 'Y';
    }
     
    cout << i << "  " << leap << endl; 
    
    if (leap == 'Y') count++;
  
  }
   
  cout << endl; 
  
  return count;

}
        