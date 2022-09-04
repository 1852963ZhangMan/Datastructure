#include <iostream>
using namespace std;
#define max 10
typedef struct{
	ElemType data[max];
    int length;	
}SqList;

int main()
{
   cout << "Hello World";
   return 0;

}
void DeleteMin(SqL&L,ElemType& min)
{
	for(int i=0;i<L.length;i++)
	{
		index=0;
		if(L.data[index]>L.data[i])
		{
			index=i;
		}		
	}
	min=l[length];
	L[index]=L[length-1];
	length--;
}

void converse(SqList&L)
{
	ElemType m;
	for(int i=0;i<L.length/2;i++)
	{
		m=L.data[i];
		L.data[i]=L.data[length-1-i]
		L,data[length-1-i]=m;
	}
	
}

void DeletAllX(SqLis &L,ElemType X)
{
	int index=length;//处理过的数组第一个首序号
	for(int i=length-1;i>=0;i--)
	{
		
		if(L.data[i]!=X)
		{
			L.data[index]=L.data[i];  
		    index--;
		}
		else{	i--;}	
		//直接跳过x，进行覆盖
		
	}
	
}//遗留问题：数组前面会有空

void select(SqList&L,Elemtype s,Elemtype t)
{
	if(s>t)
	{
		print("error range")
			return;
	}
	if(L.length==0)
	{
		print("list is null")
			return;
	}
	
	int index=length;//处理过的数组第一个首序号
	for(int i=length-1;i>=0;i--)
	{
		
		if(L.data[i]<s|L.data[i]>t)
			//不在st之间的就往后排
		{
			L.data[index]=L.data[i];  
		    index--;
		}
		else{	i--;}	
		//直接跳过x，进行覆盖
		
	}
