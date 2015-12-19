/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   10/14/2015                                 *
 ** Description: This is the main function file.       *
 *  It rolls each die N times and print the result of  *
 *  the game by calling the Game class.                *
 ******************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string stringReverse(string rev)
{
    if (rev.length() < 1) //base case
        return rev;
    
    else
        //subtract the elements from the string and makes the
        //last element becomes the '0' element, so it get reversed.
        return stringReverse(rev.substr(1, rev.length())) + rev.at(0);
}

double sumaArray(double suma[], int index)
{
    if (index < 1) //base case
        return suma[0];
    
    else
        //recursive addition to calculate the sum
        return suma[index] + sumaArray(suma, index-1);
}

int triangleNumber(int row)
{
    if (row < 1) //base case
        return 0;
    
    else
        //use a factorial-like method to calculate the triangular number
        return row + triangleNumber(row - 1);
}

int main()
{
    int choice;
    
    do
    {
        do
        {
            //main menu
            cout<<"\n**PLEASE SELECT ONE OF THE NEXT OPTIONS**\n"<<endl;
            cout<< "Enter 1 to reverse a string." <<endl;
            cout<< "Enter 2 to calculates the sum of an array." <<endl;
            cout<< "Enter 3 to see all the items that form a triangle with N rows." <<endl;
            cout<< "Enter 4 to EXIT the program." <<endl;
            
            //Prompt the user to enter an option from the menu
            cout << "\nPlease enter your option: ";
            cin>>choice; //take the input value
            cout <<endl;
            
            if(choice == 1) //reverse a string
              {
                string reverse;
                cout<<"Please enter the STRING you would like to reverse: ";
                cin >> reverse;
                cout << endl;
                
                cout<<"The REVERSED version of the STRING is: "<<"'"<<stringReverse(reverse)<< "'\n"<<endl;
              }
            
            else if(choice == 2) //calculates the sum of an array
              {
                int elements;
                cout << "How many different values would you like to add?: ";
                cin >> elements;
                cout << endl;
                
                int SIZE = elements;
                double array[SIZE];
                
                for (int i=0; i<SIZE; i++)
                  {
                    double arrar;
                    cout << "Enter the value # " << i+1 << " to be calculated: " << endl;
                    cin >> arrar;
                    array[i] = arrar;
                  }
                  
                double sumar = sumaArray(array, SIZE);
                cout <<"\nTHE SUM OF THE ELEMENTS IN THE ARRAY IS: "<<sumar<< "\n"<<endl;
              }
            
            else if(choice == 3)//show all the items that form a triangle with N rows
              {
                int rows;
                cout << "How many ROWS would you like for your TRIANGLE?: ";
                cin >> rows;
                cout << endl;
                
                int triangle = triangleNumber(rows);
                cout << "THE TOTAL NUMBER OF ITEMS IN THE TRIANGLE IS: "<< triangle << "\n"<<endl;
              }
            
            else if(choice == 4)//EXIT the program
              {
                return 0;
              }
            
            else if (!isdigit(choice)) //input validation
              {
                cout << "Invalid option entered. Try again!\n" << endl;
                return 0;
              }
            
        }while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
        
        char door = ' ';
        do
        {
            cout << "Enter any key to continue... ";
            cin >> door;
            cout << endl;
            
        }while(door == ' ');
        
    }while(choice);
    
    return 0;
          
}