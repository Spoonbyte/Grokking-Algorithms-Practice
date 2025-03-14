/*
File: CH1_0.cpp
Desc: This is to start learning algorithms from the book Grokking Algorithms. Binary search algo.
Author: spoonbyte
Date: 3/14/25 
*/

#include<iostream>
#include<vector>
using namespace std;

//PROGRAMMER DEFINED FUNCTIONS

/* 
name: binary_search()
desc: To find the item given
pre-cond
post-cond
*/

int binary_search(vector<int> x, int y)
{   
    //Length of array
    int low(0);
    int high = x.size()-1;

    //While loop to test guess
    while(low <= high)
    {
        cout << low << "<=" << high << endl;
        int mid = (low + high)/2;
        cout << "mid = " << mid << endl;
        int guess = x[mid];

        if(guess == y)
            return mid;
        
        if(guess > y)
            high = mid-1;
            else
                low = mid+1;
    }

    return 0;                   //If it doesnt exist
}

int main()
{
    //Declare and init objs:
    vector<int> my_list = {1,3,5,7,9};
    int item(0);

    //Get the item to search for from user
    cout << "Please provide the number you are thinking of" << endl;
    cin >> item;

    //Call the function
    binary_search(my_list,item);
    // cout << "my_list[" << binary_search(my_list,item) << "]" << endl;

    //Exit
    return 0;
}