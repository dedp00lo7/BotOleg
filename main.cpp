
#include <iostream>
#include <string>
#include <math.h>
#include <clocale>
#include <cstdlib>

using namespace std;

// Choice type of the function
int choiceTypeAll()
{
    cout << "Select function type: \n1) Linear Function \n2) Quadratic Function\n3) Linear-fractional Function" << endl;
    int functType = 0;
    cin >> functType;
    return functType;
}
// A function that takes a formula and removes spaces in it
string getFormula()
{
    cout<<"Enter the formula for your function:"<<endl;
    string Formula;
    getline(cin, Formula);
    for (int i=0; i < Formula.size() ; ++i)
    {
        if(Formula[i] == ' ')
        {
            Formula.erase(i,1);
            i--;
        }
    }
    return Formula;
}
//a function that finds the value of m and n
double* get_M_and_N(string form)
{
    //getting m
    string m_line;
    double m_num = 0.0;
    for ( int i1 = 2, i2 = 0; form[i1] != 'x'; ++i1, ++i2 )
    {
        m_line[i2] = form[i1];
    }
    if (m_line.empty())
    {
        m_num = 1;
    }
    
    else if ( m_line == "-")
    {
        m_num = -1;
    }
    else
    {
        m_num = stod(m_line);
    }
    //getting n
    double n_num = 0.0;
    string n_line;
    if(form[form.size() - 1] == 'x')
    {
        n_num = 0.0;
        
    }
    else
    {
        for(int i1=0, i2 = form.find('x'); i2< form.size(); i1++, i2++)
        {
            n_line[i1] = form[i2];
        }
        if (n_line[0] == '+')
        {
            n_line.erase(0,1);
        }
        n_num = stod(n_line);
    }
    double M_and_N[2] = {m_num, n_num};
    return M_and_N;
}
//a function that gets the final result from the input x
void linearResult(double* m_n)
{
    cout<<"Your Formula: y = "<<m_n[0]<<"x ";
    if(m_n[1] < 0)
        cout<<"- "<<-m_n[1];
    else
        cout<<"+ "<<m_n[1];
    cout<<endl<<"Enter your x value: ";
    double x_val = 0.0;
    cin>> x_val;
    double y_val = m_n[0] * x_val + m_n[1];
    cout << "f("<<x_val<<") = "<<y_val;
}
int main()
{
    
    if(choiceTypeAll()==1)
    {
        string form = getFormula();
        linearResult(get_M_and_N(form));
        
    }
    return 0;
}


