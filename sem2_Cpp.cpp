//program...!!!
#include<iostream>
using namespace std;
#include<iomanip>
#include<string.h>
#include<stdbool.h>
//#define size 100
#include<conio.h>
#include<bits/stdc++.h>

#include "hd.cpp"
template<class S>

struct data
{
    string model_no[100];
    double ori_price[100];
    int size2;
}s;

double profit=0.0,loss=0.0;
class class1
{

private:
    int i;

public:

    class1()
    {
        this->i=0;
    }

    ~class1()
    {}

public:
void get_mod_ori();

friend void pro_loss();
};

void class1 ::get_mod_ori()
{
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Enter the number of models"<<endl;
        cin>>s.size2;
        //size=n;
        cout<<"Enter the model number and its respective original rate"<<endl;
        for(int i=0;i<s.size2;i++)
        {
            cin>>s.model_no[i];
            cin>>s.ori_price[i];
        }

        cout<<"--------------------------------------------------------------------"<<endl;
}

void pro_loss()
    {

        cout<<"--------------------------------------------------------------------"<<endl;
        try{
            if(profit<loss)
               cout<<"Today's lay' out is a loss of Rs."<<(loss-profit)<<endl;

           else
              throw 505;
        }
        catch(...)
        {
            cout<<"Today's lay' out is a profit of Rs."<<(profit-loss)<<endl;
        }

        cout<<"--------------------------------------------------------------------"<<endl;
   }

class class2:protected class1
{
    public:
    int w,i;

    friend class class3;
    class2()
    {
        this->w=0;
        this->i=5;
    }

    ~class2()
    {}

     virtual void get_price(int size3)
    {
        double value=0.0;

        cout<<"--------------------------------------------------------------------"<<endl;
        string n;
        auto int t=0;
        cout<<"Enter the model number"<<endl;
        cin>>n;

        for( i=0;i<size3;i++)
        {
            if(s.model_no[i]==n)
               {
                   t=1; break;}
        }

        if(t==0)
            cout<<"No such model exists"<<endl;

        cout<<"Original price for the model Rs."<<s.ori_price[i]<<endl;
        value=(s.ori_price[i]+(s.ori_price[i]*0.3));
        cout<<"Sell product at the price for the profit with 30% Rs.: "<< value <<endl;
        cout<<"Enter 1 for discount"<<endl;
        cout<<"Enter 0 for no-discount"<<endl;
        cin>>(w);

        if(~w==0)
        {
            value=(s.ori_price[i]+(s.ori_price[i]*0.1));
            cout<<"Maximum discount price of 10% Rs.: "<< value <<endl;
            value=(s.ori_price[i]+(s.ori_price[i]*0.2));
            cout<<"Sold the product with the minimum 20% profit of Rs."<<value<<endl;
        }

        cout<<"--------------------------------------------------------------------"<<endl;
    }
};

class class3: private class2
{
    public:

    ~class3()
    {

    }

            friend class3 operator+(class3 const &obj,double );
    inline void today()
    {
        static double pro=0.0;

        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Enter number of items sold"<<endl;
        int n,w;

        cin>>n;
        cout<<"List out models sold with the price sold"<<endl;

        for(int i=0;i<n;i++)
        {
            cin>>wage[i][100];
            cin>>wage_amt[i];
            profit+=wage_amt[i];
            double num = wage_amt[i];

           string str1= wage[i][100];
           string str2;

            for(int j=0;j<s.size2;j++)
            {
                str2=s.model_no[j];
                if(str1 == str2)
                   pro=pro+(wage_amt[i]-s.ori_price[j]);
            }
        }

        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Amount after selling the products : Rs."<<profit<<endl;
        cout<<"Amount after excluding the original prices Rs."<<(profit-=pro)<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;

        cout<<"Enter number of expenses"<<endl;
        cin>>w;

        cout<<"Enter the expenditures for today with price"<<endl;
        for(int i=0;i<w;i++)
        {
            cin>>expe[i][100];
            cin>>exp_wag[i];
            loss+=exp_wag[i];
        }

        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Amount of expenses today Rs." <<loss<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;

        cout<<endl<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Today's out' lay"<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Credits"<<endl;
        cout<<setw(10)<<setfill('-')<<"Index"<<setw(10)<<setfill('-')<<"Amount"<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<setw(10)<< setfill('-')<<wage[i][100]<<setw(10)<<setfill('-')<<wage_amt[i]<<endl;
        }

        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Expenses"<<endl;
        cout<<setw(10)<<setfill('-')<<"Index"<<setw(10)<<setfill('-')<<"Amount"<<endl;

        for(int i=0;i<w;i++)
        {
            cout<<setw(10)<<setfill('-')<<expe[i][100]<<setw(10)<<setfill('-')<<exp_wag[i]<<endl;
        }

        cout<<"--------------------------------------------------------------------"<<endl;
    }
};

class3 operator+(class3 const obj, double num)
{
    profit+=num;
}

int main()
{

    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"SEMESTER-2 CPP PROJECT"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;

    cout<<"Team Members"<<endl;
    cout<<"|-> M.S.Gayathri Devi \n |-> K.R.Shibani"<<endl;

        cout<<"--------------------------------------------------------------------"<<endl;

    cout<<"Topic : BUSINESS ADMINISTRATION...!!!"<<endl;

        cout<<"--------------------------------------------------------------------"<<endl;

    class1 ob1;
    class2 ob2;
    class3 ob3;

    int ch;
    do
    {

    cout<<"Enter 1 for inputting the details"<<endl;
    cout<<"Enter 2 for calculating price"<<endl;
    cout<<"Enter 3 for today's out' lay"<<endl;
    cout<<"Enter 4 to check today's profit or loss"<<endl;
    cout<<"Enter 5 for exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            cout<<"Inputting details"<<endl;
            ob1.get_mod_ori();
        }
        break;

    case 2:
        {
             cout<<"Calculating price"<<endl;
    ob2.get_price(s.size2);
        }
        break;

    case 3:
        {
            cout<<"Today's out' lay"<<endl;
    ob3.today();
        }
        break;

    case 4:
        {
            cout<<"Today profit or loss...?"<<endl;
    pro_loss();
        }
        break;

    case 5:
        exit(1);
        break;

    default:
        {
        cout<<"Invalid input...!!"<<endl;
        cout<<"please try again...!!!"<<endl;
        }

        cout<<"--------------------------------------------------------------------"<<endl;
    }

}while(ch!=5);

//cout<<"       THANK YOU....!!!!!     "<<endl;
}

code in hd.cpp :-

#include<iostream>
using namespace std;

 string wage[100][100];
 double wage_amt[100];
 string expe[100][100];
 double exp_wag[100];