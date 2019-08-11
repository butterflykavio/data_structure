//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#include "algorithm"
#define num 20
using namespace std;

void delete_range(List &l, Element low, Element high)
{
    if(low>=high)
    {
        printf("input is invalid");
        return;
    }
    int bottom=-1, top=-1;
    for(int i=0; i<l.length; i++)
    {
        if(l.data[i]<=low)
        {
            bottom = i;
        }
        if(l.data[i]>=high)
        {
            top = i;
            break;
        }
    }
    for(int i=0; top+i<=l.length-1; i++)
    {
        l.data[bottom+i+1] = l.data[top+i];
    }
    l.length = l.length-top+bottom+1;
}

int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    sort(l.data, l.data+num);
    show(l);
    delete_range(l, 5, 7);
    show(l);
    return 0;
}