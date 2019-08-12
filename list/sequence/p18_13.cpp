//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20

int find_min_int(List l)
{
    bool set[l.length];
    memset(set, false, sizeof(set));
    for(int i=0; i<l.length; i++)
    {
        if(l.data[i]>=0&&l.data[i]<l.length)
        {
            set[l.data[i]] = true;
        }
    }
    for(int i=0; i<l.length; i++)
    {
        if(!set[i])
        {
            return i;
        }
    }
}
int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    printf("\n%d", find_min_int(l));
    return 0;
}