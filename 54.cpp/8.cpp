// Create a fincton in a dynamic array to return the capacity of the array
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
};
int main(){
array s;
    s.insert(6);
    s.insert(9);
    s.insert(6);
    s.insert(34);
    s.insert(43);
    s.Print();
    cout<<"Capicity of the array is "<<s.getc();
}