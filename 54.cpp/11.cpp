// Sort the element of the array 
#include<iostream>
using namespace std;
class Array
{
    int *a=NULL;
    int size;
    int capicity;

    void resize()
    {
        int *temp;
        temp= new int[capicity*2];
        for(int i=0; i<size; i++)
        {
            temp[i] = a[i];
        }
        delete a;
        a = temp;
        capicity = 2*capicity;

    }
    public:
    Array()
    {
        a = new int[1];
        capicity = 1;
        size = 0;

    }
    ~Array()
    {
        delete a;
        capicity =0;
        size =0;
    }
    void insert(int value)
    {
        if(size==capicity)
        resize();
        
        a[size]= value;
        size++;
    }
    void Slection_sort()
    {
        int min,j,i;
        for( i=0; i<size-1; i++)
        {
            min = i;
            for( j=i+1; j<size; j++)
            {
                if(a[min]>a[j])
                {
                    min = j;
                }
            }
            int temp = a[min]; 
            a[min] = a[i];
            a[i] = temp;
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
    Array a;
    a.insert(34);
    a.insert(45);
    a.insert(90);
    a.insert(87);
    a.Slection_sort();
    a.Print();
}