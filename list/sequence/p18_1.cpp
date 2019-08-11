//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20


Element delete_min(List &l)
{
    if(Isempty(l)) {
        printf("It is a empty list");
        return -1;
    }
    int index = 0;
    for(int i=1; i<l.length; i++)
    {
        if(l.data[i] < l.data[index])
        {
            index = i;
        }
    }
    Element min = l.data[index];
    for(int i=index; i<l.length-1; i++)
    {
        l.data[i] = l.data[i+1];
    }
    l.length--;
    return min;

}

int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    delete_min(l);
    show(l);
    return 0;
}