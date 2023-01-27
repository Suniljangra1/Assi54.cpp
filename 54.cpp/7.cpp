// Create a function in  dynamic array to return the size of the array
#include<iostream>
using namespace std;
class s
{
    int *ar;
    int size;
    int ca;
    public:
    s()
    {
        ar= new int[1];
        size =0;
        ca = 1;
    }
    void resize()
    {
        int *temp = new int[ca*2];
        for(int i=0; i<size; i++)
        {
            temp[i] = ar[i];

        }
        delete ar;
        ar = temp;
        ca = ca*2;
    }
    void insert(int v)
    {
        if(size == ca)
        resize();
        ar[size++]= v;
    }
    void Print()
    {
        for(int i=0; i<size; i++)
        {
            cout<<ar[i]<<" ";
        }
    }
    int getsize()
    {
        return size;
    }
};
int main()
{
    s s;
    s.insert(6);
    s.insert(9);
    s.insert(6);
    s.insert(34);
    s.insert(43);
    s.Print();
    cout<<"\nSize is "<<s.getsize();
}
