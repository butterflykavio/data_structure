#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef int Element;

struct list
{
  Element *data;
  int length, Maxsize;
};
typedef list List;

void init(List &l, int size)
{
  l.data = (Element*)malloc(size*sizeof(Element));
  l.Maxsize = size;
}

bool filldata(List &l, int num)
{
  if(num>l.Maxsize)
  {
    printf("Overflow in filldata!\n");
    return false;
  }
  srand(time(NULL));
  for(int i=0; i<num; i++)
  {
    l.data[i] = rand()%10;
  }
  l.length = num;
  return true;
}

void show(List l)
{
  for(int i=0; i<l.length; i++)
    printf("%d ",l.data[i]);
  printf("\n");
}

bool insert(List &l, Element data, int index)
{
  if(l.length>=l.Maxsize)
  {
    printf("Overflow in filldata!\n");
    return false;
  } 
  for(int i=l.length; i>index; i--)
  {
    l.data[i]=l.data[i-1];
  }
  l.data[index] = data;
  l.length++;
  return true;
}

bool Delete(List &l, int index)
{
  if(index>=l.length)
  {
    printf("Index Out of range!\n");
    return false;
  }
  for(int i=index; i<l.length-1; i++)
  {
    l.data[i] = l.data[i+1];
  }
  l.length--;
  return true;
}

bool Isempty(List l)
{
  return l.length == 0;
}

