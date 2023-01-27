// create a ADT without using STL 
#include<iostream>
using namespace std;
class ADT
{
    public:
    int *array;
    int size;
    int capicity;

    ADT()
    {
        array = new int[1];
        size= 0;
        capicity = 1;
    }
    ~ADT()
    {
        delete array;
        size =0;
        capicity =0;
    }
};
