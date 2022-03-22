#pragma once

#include "Direction.hpp"
#include<string>
#include<iostream>

using namespace std;

namespace ariel
{
    class Notebook
    {
        unsigned int maxRow;
    
    public:
        Notebook();

        void write(int,int,int,ariel::Direction,string);
        
        string read(int,int,int,Direction,int);

        void erase(int,int,int,Direction,int);

        void show(int);
        
        void check_page_row_col(int,int,int);
    };

}