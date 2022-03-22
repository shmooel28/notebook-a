#include"Direction.hpp"
#include<string>
#include<iostream>
#include"Notebook.hpp"
#include<vector>

using namespace std;


namespace ariel
{
    Notebook::Notebook()
    {
        maxRow = 0;
    }
    void Notebook::erase(int page,int row,int col,Direction d,int number_of_char)
    {
        if (d == Direction::Vertical)
        {
            if (number_of_char + col > 100)
            {
                throw runtime_error("not over 100");
            }
        }
        Notebook::check_page_row_col(page,row,col);
        cout<<"deleted"<<page<<endl;
    }
    string Notebook::read(int page,int row,int col,Direction d,int number_of_char)
    {
        if (d == Direction::Vertical)
        {
            if (number_of_char + col > 100)
            {
                throw runtime_error("not over 100");
            }
        }
        Notebook::check_page_row_col(page,row,col);
        return "for check";
    }

    void Notebook::write(int page,int row,int col,Direction d,string str)
    {   
        if (d == Direction::Vertical)
        {
            if (int(str.length()) + col > 100)
            {
                throw runtime_error("not over 100");
            }
        }
        Notebook::check_page_row_col(page,row,col);
        cout<<"write"<<endl;
    }

    void Notebook::show(int page)
    {
        cout<<"show"<<endl;
    }
    void Notebook::check_page_row_col(int page,int row, int col)
    {
        if (page < 0 || row < 0 || col < 0 || col > 100)
            throw runtime_error("connot be udner 0");
    }


}