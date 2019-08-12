//
// Created by 禹梓林 on 2019-08-11.
//


#include "../../STL/sequence.cpp"
#include "algorithm"
#define num 20
void merge(List &ans, List l1, List l2)
{
    int curr1=0, curr2=0;
    ans.length = l1.length+l2.length;
    for(int i=0; i<ans.length; i++)
    {
        if(l1.data[curr1]<l2.data[curr2])
        {
            ans.data[i] = l1.data[curr1++];
        }
        else{
            ans.data[i] = l2.data[curr2++];
        }
    }
}
int main()
{
    List l1, l2, ans;
    init(l1, num);
    init(l2, num-5);
    init(ans, l1.Maxsize+l2.Maxsize);
    filldata(l1, num);
    filldata(l2, num-5);
    std::sort(l1.data, l1.data+l1.length);
    std::sort(l2.data, l2.data+l2.length);
    show(l1);
    show(l2);
    merge(ans, l1,l2);
    show(ans);
    return 0;
}