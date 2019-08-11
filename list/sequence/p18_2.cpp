//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 19

void reverse(List &l)
{
    Element temp;
    for(int i=0; i<l.length/2; i++)
    {
        temp = l.data[i];
        l.data[i] = l.data[l.length-1-i];
        l.data[l.length-1-i] = temp;
    }
}

int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    reverse(l);
    show(l);
    return 0;
}
