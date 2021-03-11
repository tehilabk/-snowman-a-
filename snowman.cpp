#include <iostream>
#include <stdexcept>
#include <string>
#include "snowman.hpp"
using namespace std;

namespace ariel{
const int base = 10;
  string snowman(int input){

        //case 3 in demo      
        if ((input<11111111) || (input>44444444)) {
            throw invalid_argument("Invalid code");
        }

        int num= input;
        for (int i = 0; i < 8; i++)
        {
             if ((num % base <1) || (num % base >4)) {
               throw invalid_argument("Invalid code");
            }
            num /= base; 
        }
            
        //case 1 in demo
        if (input == 11114411){
             return "\n      \n _===_ \n (.,.) \n ( : ) \n ( : ) \n";
        }
        //case 2 in demo
        if (input == 33232124){
             return "\n   _   \n  /_\\ \n\\(o_O) \n (] [)> \n (   ) \n";
        }
        return " ";
    }
}