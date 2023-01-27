// Create a implement the search function 
#include<iostream>
using namespace std;
class array
{
     int *a;
    int  s;
    int c;
    public:
    array()
    {
        a = new int[1];
        s = 0;
        c = 1;
    }
    ~array()
    {
        delete a;
        s=0;
        c=0;
    }
    void resize()
    {
        int *temp;
        temp = new int[c*2];
        for(int i=0; i<s; i++)
        {
            temp[i]= a[i];
        }
        delete a;
        a = temp;
        c= c*2;
    }
    void insert(int v)
    {
        if(s==c)
        resize();
        a[s++]=v;
    }
    void Print()
    {
        for(int i=0; i<s; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    int getc()
    {
        return c;
    }
    void Search(int v)
    {
        int s;
        for(int i=0; i<s; i++)
        {
            if(a[i]==v)
            {
                s=1;

            }
        }
        if(s==1)
        cout<<"Element founded ";
        else 
        cout<<"Element Not founded ";
    }
};
int main(){
array s;
    s.insert(6);
    s.insert(9);
    s.insert(6);
    s.insert(34);
    s.insert(43);
    s.Print();
    s.Search(9);
}