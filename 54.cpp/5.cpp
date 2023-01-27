// Create a function in arrya to check the size of an array.
#include<iostream>
using namespace std;
class SizE
{
    int *a=NULL;
    int s;
    int c;
    public:
    SizE()
    {
        a = new int[1];
        s = 0;
        c = 1;
    }
    ~SizE()
    {
        delete a;
        s=0;
        c= 0;
    }
    void resize()
    {
        int *temp ;
        temp = new int[c*2];
        for(int i=0; i<s; i++)
        {
            temp[i] = a[i];
        }
        delete a;
        a = temp;
        c = c*2;
    }
    void insert(int v)
    {
        if(s == c )
        resize();
        a[s++]= v;
    }
    int getsize()
    {
        return s;
    }
};
int main()
{
    SizE s;
    s.insert(9);
    s.insert(6);
    s.insert(34);
    s.insert(43);
    cout<<"size is "<<s.getsize();
}
