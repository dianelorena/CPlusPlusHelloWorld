//
//  main.cpp
//  HomeworkOneB
//
//  Created by Diane Lorena on 8/30/16.
//  Copyright © 2016 Diane Lorena. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    char input[100];
    
    cout << "Please enter your name ? \n";
    cin.getline(input,sizeof(input));
    cout << "Hello " << input << "!\n";
}
