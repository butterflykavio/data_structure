//
// Created by 禹梓林 on 2019-08-11.
//


#include "../../STL/sequence.cpp"
#include "algorithm"
#define num 20

void delete_repete(List &l)
{
    int curr=1;
    Element temp = l.data[0];
    for(int i=1; i<l.length; i++)
    {
        if(l.data[i]==temp)
        {
            continue;
        }
        else{
            l.data[curr++] = temp = l.data[i];
        }
    }
    l.length = curr;
}

int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    std::sort(l.data, l.data+num);
    show(l);
    delete_repete(l);
    show(l);
    return 0;
}