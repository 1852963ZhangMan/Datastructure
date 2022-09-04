#include <iostream>
using namespace std;
#define max 10
typedef struct{
	ElemType data[max];
    int length;	
}SqList;

     /*01题目：删除顺序表中最小值，将其值返回*/
/*—————————————————————————————————————————*/

void DeleteMin(SqL&L,ElemType& min)
{
	if(Empty(L))return;
	int index=0
	for(int i=0;i<L.length;i++)
	{
		
		if(L.data[index]>L.data[i])
		{
			index=i;
		}		
	}
	min=L.data[index];
	L[index]=L[length-1];
	length--;
}//done

           /*02题目：转置顺序表*/
/*—————————————————————————————————————————*/
void converse(SqList&L)
{
	ElemType m;
	for(int i=0;i<L.length/2;i++)
	{
		m=L.data[i];
		L.data[i]=L.data[length-1-i]
		L.data[length-1-i]=m;
	}
	
}//done

/*03题目：删除顺序表中所有x,时间复杂度n,空间复杂度1*/
/*—————————————————————————————————————————*/
void DeletAllX(SqLis &L,ElemType X)
{
	int k=0;
	for(int i=0;i<L.length;i++)
	{
		if(L.data[i]!=X)//把非x的数往前排，直接覆盖，K指向新数组尾部
		{
			L.data[k]=X;
			k++;			
		}				
	}
	L.length=k;
	
}
void DeletAllX2(SqLis &L,ElemType X)
{
	int k=0;
	for(int i=0;i<L.length;i++)
	{
		if(L.data[i]==X)k++;
		if(L.data[i]!=X)//把非x的数往前移动k，K 等于它前面的x数量
		{
			L.data[i-k]=L.data[i];
		}				
	}
	L.length-=k;
}

void DeletAllX3(SqLis &L,ElemType X)
{
	//首尾两个下标，从两端向中间移动
	int i=0,j=length-1;
	for(;i<j;)
	{
		if(L.data[i]==X)
		{
			if(L.data[j]!=X)
			{
				//左端遇到x时，与右端非x值交换，直到两个指针相遇
				L.data[i]=L.data[j];
				i++;
				j--;
			}
			else
				j--;
		}
		else
		{
			i++;
		}
	}
	
}
       /*04题目：删除顺序表表中s,t之间的元素*/
/*—————————————————————————————————————————*/
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
	
	int head=0,length=0;
	//找到st之间的序列 起始下标和长度
	for(int i=0;i<L.length;i--)
	{
		if(L.data[i]>=s|L.data[i]<=t)
		{
			if(head==0)
			{
				head=i;
				length++;
			}
			else{
			length++;	
			}
			
		}		
		
	}
	//移动，覆盖
	for(int i=head;i<head+length;i++)
	{
		L.data[i]=L.data[i+length];
	}
	
	L.length-=length;
		
}

	/*04 删除有序表中st之间的数*/
/*————————————————————————————————————*/	
bool DeleteST(SqList& L,Elemtype s,Elemtype t)
{
	int i,j;
	//大于等于s的第一个元素位置i 
	//大于t的第一个元素位置j
	if(s>t|L.length==0) 
		return false;
	for(i=0;i<L.length&&L.length[i]<S;i++);
	
	if(i==L.length) return false;
	
	for(j=L.length;j>=0&&L.data[j]>t;j--);
		
	for(;j<L.length;j++)
	{
		L.data[i]=L.data[j];
		i++;
	}
	L.length=i;
	return true;
}

	/*05 删除顺序表中st之间的数*/
/*————————————————————————————————————*/	
bool DeletST(SqList &L,Elemtype s,Elemtype t)
{
	//same as question04
	if(s>t||L.length==0)return false;
	int k=0;
	for(int i=0;i<L.length;i++)
	{
		if(L.data[i]<s|L.data[i]>t)
		{
			L.data[i-k]=L.data[i];
		}
		else
		{
			k++;
		}
	}
	L.length-=k;
	return true;
}


	/*06 删除有序顺序表重复的数*/
/*————————————————————————————————————*/	
bool Deletesame(SqLsit&L)
{
	int k;
	for(int i=0;i<L.length;i++)
	{
		k=0;
		//k 重复的个数
		for(int j=i;j<L.length;j++)
		{
			if(L.data[j]==L.data[i])k++;
			else{
				L.data[j-k]=L,data[j];
			}
		}
		L.length-=k;
	
		k=0;
	}
}
            /*07 合并两个有序顺序表*/
/*————————————————————————————————————*/	
bool Merge(Sqlist &l1,SqList&l2, SqList&L3)
{
	int i=0,j=0;
	//按照大小排入，直到一个表为空
	for(;i<l1.length&&j<l2.length;)
	{
		if(l1.data[i]<=l2.data[j])
		{
			L3.data[length]=l1.data[i];
			i++;
		}
		else
		{
			L3.data[length]=l2.data[j];
			j++;
		}
		length++;
	}
	//将剩余的直接排入
	if(i==L1.length)
	{
		for(;j<L2.length;j++,l3.length++)
		L3.data[length]=l2.data[j];
		
	}
	if(j==L2.length)
	{
		for(;i<L1.length;i++,l3.length++)
		L3.data[length]=l1.data[j];
		
	}
	
	return true;
}


            /*08 a[m]b[n]-->b[n]a[m]*/
/*————————————————————————————————————*/
void change(SqList&L,int m, int n)
{
	Elemtype m; 
	for(int i=m-1;i>=0;i--)
	{
		//a[m]从a的最后一个数字开始往后交换移动，一直移动到最终属于的位置上
		for(int j=i;j<=n+i;j++)
		{
			m=L.data[j];
			L.data[j]=L.data[j+1]
			L.data[j]=m;
		}
	}
}
		

       /*09 有序顺序表找x,与其后继交换 若无则插入 需时间最少*/
/*————————————————————————————————————————————————————————*/
void change(SqList&L,Elemtype x)
{
	//二分法
	int head=0,tail=L.length-1;
	for(;head<tail;)
	{
		pivot=(head+tail)/2;
		
		iff(L.data[pivot]==x)break;
		if(L.data[pivot]>x)
		{
			tail=pivot-1;
		}
		else
		{
        		head=pivot+1;
		}
		
	}
	if(head<=tail)swap(L.data,pivot,pivot+1);
	else{
		for(int i=L.length;i>=head;i--)
		{
			L.data[i]=L.data[i-1];
		}
		L.data[head]=x;
	}




