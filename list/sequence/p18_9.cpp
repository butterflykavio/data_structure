//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#include "algorithm"
#define num 9


int mid_find(List l, int low, int high, Element x, bool &flag)
{
    if(high<low)
    {
        printf("Element is not exictence\n");
        flag = false;
        return high;
    }
    int mid = (low+high)/2;
    if(x==l.data[mid])
    {
        flag = true;
        return mid;
    }
    else if(x<l.data[mid])
    {
        return mid_find(l, low, mid-1, x, flag);
    }
    else
    {
        return mid_find(l, mid+1, high, x, flag);
    }
}

void process(List &l, Element x)
{
    bool flag;
    int mid = mid_find(l, 0, l.length-1, x, flag);
    if(mid == l.length-1)
    {
        return;
    }
    if(flag)
    {
        Element temp;
        temp = l.data[mid];
        l.data[mid] =  l.data[mid+1];
        l.data[mid+1] = temp;
    }
    else{
        for(int i=l.length; i>mid+1; i--)
        {
            l.data[i] = l.data[i-1];
        }
        l.length++;
        l.data[mid+1] = x;
    }
}
int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    std::sort(l.data, l.data+l.length);
    show(l);
    process(l, 6);
    show(l);
    return 0;
}