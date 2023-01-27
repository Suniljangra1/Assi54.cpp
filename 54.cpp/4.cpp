// Create a function in Array to sort the given array 
#include<iostream>
using namespace std;
class Sort
{
    int *a=NULL;
    int  size;
    int capicity ;
    public:

    Sort()
    {
        a = new int [1];
        size=0;
        capicity =1;
    }
    ~Sort()
    {
        delete a;
        size =0;
        capicity =0;

    }
    void resize()
    {
        int *temp ;
        temp = new int[capicity*2];
        for(int i=0; i<size; i++)
        {
            temp[i]= a[i];
        }
    }
    void insert(int value)
    {
        if(size==capicity)
        resize();
        a[size++]= value;
    }
    void Bubble_Sort()
    {
        int temp;
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    void Print()
    {
        for(int i=0; i<size; i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    Sort s;
    s.insert(8);
    s.insert(5);
    s.insert(6);
    s.insert(45);
    s.insert(23);
    s.insert(12);
    s.Bubble_Sort();
    s.Print();
}