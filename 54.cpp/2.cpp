// Create an array and implement a search function in the array 
#include<iostream>
using namespace std;
class Fun
{
    int *array;
    int size;
    int capicity;

    void Resize()
    {
        int *temp = new int[size*2];
        for(int i=0; i<size; i++)
        {
            temp[i] = array[i];
        }
        delete array;
        array = temp;
        capicity = 2*capicity;

    }
    public:
    Fun()
    {
        array = new int[1];
        size = 0;
        capicity = 1;
    }
    ~Fun()
    {
        delete array;
        size = 0;
        capicity = 0;
    }
    void Insert_Element(int value)   // insert Element in Array
    {
            if(size == capicity )
            {
              Resize();
            }
            array[size] = value;
            size++;
    }
    void Print()
    {
        for(int i=0; i<size; i++)
        {
            cout<<array[i]<<" ";
        }
    }
    void Search_(int v)
    {
        int temp;
        if(size==capicity)
        Resize();
        for(int i=0; i<size; i++)
        {
            if(array[i]==v)
            {
                temp=1;
            }

        }
        if(temp==1)
        cout<<"\nElement Founded ";
        else
        cout<<"\nElement not Found ";
    }
};
int main()
{
    Fun f;
    f.Insert_Element(4);
    f.Insert_Element(14);
    f.Insert_Element(24);
    f.Insert_Element(34);
    f.Print();
    f.Search_(24);

}