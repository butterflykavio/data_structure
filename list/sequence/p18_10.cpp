//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20
int count_locate(int origin, int offset, int length)
{
    int k = origin - offset;
    if(k<0)
    {
        return length+k;
    }
    else{
        return k;
    }
}
void reverse(List &l, int low, int high)
{
    for(int i=0; i<=(high-low)/2; i++)
    {
        Element temp;
        temp = l.data[low+i];
        l.data[low+i] = l.data[high-i];
        l.data[high-i] = temp;
    }
}
void left_shift(List &l, int offset)
{
    Element temp1, temp2;
    reverse(l, 0, offset-1);
    reverse(l, offset, l.length-1);
    reverse(l, 0, l.length-1);

}
int main()
{
    List l;
    init(l, num);
    filldata(l, num);
    show(l);
    left_shift(l, 3);
    show(l);
    return 0;
}