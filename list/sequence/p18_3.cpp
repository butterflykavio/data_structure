//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20

void delete_x(List &l, Element x)
{
    int curr = 0;
    for(int i=0; i<l.length; i++)
    {
        if(l.data[i] != x)
        {
            l.data[curr++] = l.data[i];
        }
    }
    l.length = curr;
}
int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    Element x = 9;
    delete_x(l, x);
    show(l);
    return 0;
}