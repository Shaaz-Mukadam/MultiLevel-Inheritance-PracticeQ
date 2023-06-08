//Write a program to convert octal to binary

//program octal to binary
//muti level inheritence program

#include<iostream>
using namespace std;
class number
{
protected:
    int num,p=1;
    int decimal=0,i=1,j,d;
};
class number2:public number
{
protected:
    int binary=0;
};
class child:public number2
{
    public:
    	int show()
    	{
    cout<<"enter  octal(using digit 0__7):";
    cin>>num;
    for(j=num; j>0; j=j/10)
    {
               d=j%10;
               if(i==1)
               p=p*1;
               else
               p=p*8;
               decimal=decimal+(d*p);
               i++;
               }
               i=1;
               for(j=decimal; j>0; j=j/2)
               {
                      binary=binary+(decimal%2)*i;
                      i=i*10;
                      decimal=decimal/2;
                   }
                         cout<<"octal number into binary number "<<binary;
                           }
                          };
                          int main()
                          {
                          	child c;
                          	c.show();
						  }

						  //******OUTPUT****
						  enter  octal(using digit 0__7):5
octal number into binary number 101
