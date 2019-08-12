//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#include "algorithm"
#define num 5

Element find_median(List a, List b)
{
    int length = (a.length+b.length+1)/2;
    int curr1=0, curr2=0;
    for(int i=0; i<length-1; i++)
    {
        if(a.data[curr1]<b.data[curr2])
        {
            curr1++;
        }
        else{
            curr2++;
        }
    }
    if(a.data[curr1]<b.data[curr2])
    {
        return a.data[curr1];
    }
    else{
        return b.data[curr2];
    }
}

int main()
{
    List a, b;
    init(a, num);
    init(b, num-3);
    filldata(a, num);
    filldata(b, num-3);
    std::sort(a.data, a.data+num);
    std::sort(b.data, b.data+num-3);
    show(a);
    show(b);
    Element median = find_median(a, b);
    printf("\n%d", median);
    return 0;
}