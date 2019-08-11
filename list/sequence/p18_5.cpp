//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20

void delete_section(List &l, Element low, Element high)
{
    if(low>=high)
    {
        printf("input is invalid");
        return;
    }
    int curr=0;
    for(int i=0; i<l.length; i++)
    {
        if(l.data[i]>=low && l.data[i]<=high)
        {
            continue;
        }
        else
        {
            l.data[curr++] = l.data[i];
        }
    }
    l.length=curr;
}

int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    delete_section(l, 5, 7);
    show(l);
    return 0;
}