//
// Created by 禹梓林 on 2019-08-11.
//

#include "../../STL/sequence.cpp"
#define num 20
Element find_main(List l)
{
    Element x=l.data[0];
    int flag=1;
    for(int i=1;i<l.length;i++)
    {
        if(flag==0)
        {
            x = l.data[i];
            flag++;
        }
        else if(l.data[i]!=x)
        {
            flag--;
        }
        else{
            flag++;
        }
    }
    if(flag>0)
    {
        return x;
    }
    else{
        return -1;
    }
}
int main()
{
    List l;
    init(l, num);
    for(int i=0; i<8; i++)
    {
        scanf("%d",&l.data[i]);
    }
    l.length=8;
    printf("\n%d", find_main(l));
    return 0;
}