//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20

void reverse(List &l, int low, int high)
{
    Element temp;
    for(int i=0; i<=(high-low)/2; i++)
    {
        temp = l.data[low+i];
        l.data[low+i] = l.data[high-i];
        l.data[high-i] = temp;
    }
}

void reverse_sequence(List &l, int partition)
{
    reverse(l, 0, partition-1);
    reverse(l, partition, l.length-1);
    reverse(l, 0, l.length-1);
}
int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    reverse_sequence(l, 8);
    show(l);
    return 0;
}