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

bool DeleteSame(SqList&L)
{
	//两个下标 i用来指新的不重复列尾部 j用来移动搜索
	for(int i=0;i<L.length;i++)
	{
		for(int j=i+1;j<L.length;j++)
		{
			if(L.data[i]!=L.data[j])
			   {
				   L.data[++i]=L.data[j];
			   }
	        }
	}
			  
	L.length=i+1;
}
            /*07 合并两个有序顺序表*/
/*————————————————————————————————————*/	
bool Merge(Sqlist &l1,SqList&l2, SqList&L3)
{
	int i=0,j=0;
	int length=0;
	//按照大小排入，直到一个表为空
	for(;i<l1.length&&j<l2.length;)
	{
		if(l1.data[i]<=l2.data[j])
		{
			L3.data[length++]=l1.data[i++];
			
		}
		else
		{
			L3.data[length++]=l2.data[j++];
		
		}
		
	}
	//将剩余的直接排入
	if(i==L1.length)
	{
		for(;j<L2.length;)
		L3.data[length++]=l2.data[j++];
		
	}
	if(j==L2.length)
	{
		for(;i<L1.length;)
		L3.data[length++]=l1.data[j++];
		
	}
	l3.length=length;
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
		
void change(SqList&L,int m, int n)
{
	//先全部转置 变成倒置的b,a
	//再分别将,ba 转置
	reverse(L,0,n+m-1);
	reverse(L,0,n-1);
	reverse(L,n,n+m-1);
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
	if(L.data[pivot]==x&&pivot!=L.length-1))swap(L.data,pivot,pivot+1);
	else{
		for(int i=L.length;i>=head;i--)
		{
			L.data[i]=L.data[i-1];
		}
		L.data[head]=x;
	}

}
   /*10 数组R[n]循环左移p,0 <p<n */
/*————————————————————————————————————————————————————————*/
/* 算法思路 ：  
    从第p+1个数开始，到末尾最后一个数，所有数字都往依次左移动p个位置
    时间复杂度：n^2
    空间复杂度：
*/
void Leftmove(SqList &L,int p)
{ 
	for(int i=p;i<L.length;i++)
	{
	
		for(int j=p-1;j>=0;j--)
		{
			m=L.data[i];
			L.data[i]=L.data[j];
			L.data[j]=m;
		}
		
	}
}
/*方法二： 
利用转置 1转置全列 2，分别转置0-(n-p-1),(n-p,n-1)
时间复杂度 ：n
空间复杂度： n
*/
void leftmove2(ElemType & R[],int p,int n)
{
	//先全部转置 变成倒置的b,a
	//再分别将,ba 转置
	reverse(R,0,n-1);
	reverse(R,0,n-p-1);
	reverse(R,n-p,n-1);
}
             /*11 找出两个升序数组的中位数 */
/*————————————————————————————————————————————————————————*/
/* 算法思路 ：  
    方法1 将两个数组合并 再按下标取中位数 T=n K=n
    方法2 两个指针 指向第一个数字 比较两个被指向的数的大小，若数字较小 则指针往后移 同时计数，一直到[L/2]处
    时间复杂度：n
    空间复杂度：1
*/	

void TwoListMid(Elemtype s2[],Elemtype s2[],int l1,int l2, ElemType & mid)
{
	int i,j,k=-1;
	for(i=0;j=0;i<l1&&j<l2&&k<((l1+l2)/2);)
	{
		if(k==(l1+l2)/2)-1) //下一个就是中位数
		{
		   if(s1[i]>=s2[j])mid=s2[j];
		   else mid=s1[i];
		   k++;
		}
		else
		{
			if(s1[i]>s2[j++])k++;
		        if(s1[i++]<s2[j])k++;
		        if(s1[i++]==s2[j++])k+=2;
		}
	}
}
/*方法3 A中位数 a B中位数b 
      a>b 舍弃A中较大 b中较小的 每次舍弃的AB部分都等长
      a<b 舍弃A中较小 B中较大序列
      a=b 即为所求中位数
      重复至AB只剩下一个数字 较小者为中位数
 */
int Merge_search(int A[],int B[],n)
{
	int s1=0,d1=n-1,s2=0,d2=n-1;
	while(s1!=d1||s2!=d2)
	{
		m1=(s1+d1)/2;
		m2=(s1+d2)/2;
		if(A[m1]==B[m2])
			return A[m1];
		if(A[m1]<B[m2])
		{
			if((s1+d1)%2==0)//奇数个点
			{
				s1=m1;
				d2=m2;
			}
			else
			{
		               s1=m1+1;
				d2=m2;
			}
		}
		else{
			
			if((s1+d1)%2==0)//奇数个点
			{
				s2=m2;
				d=m1;
			}
			else
			{
		               s2=m2+1;
				d1=m;
			}
		}
		
		
	}
	return A[s1]<B[s2]?A[s1]:B[s2];
}
               /*12 找出数组中的主元素 */
/*————————————————————————————————————————————————————————*/
/* 算法思路 ：  
    方法  先进行升序排序 统计每一个数字的出现频率 若后一个大 则以此为标准 找到最大频率的数字 和尾部的最后一个数字的+1 比较 
    时间复杂度：n^2
    空间复杂度：1
*/	
void liftSort(ElemType & a[],int length)
{
	
}
int MaxFrequency(ElemType a[],int length,int mainnum)
{
	
}
void main_num(ElemType a[],int length)
{
	LiftSort( a,length);
	int mainnum;
	m=MaxFrequency(a,length,mainnum);
	if(m>(a[length-1]+1)/2)
	{
		cout<<mainnum<<endl;
	}
	else cout<<-1<<endl;
	
}

/*
方法2:
从前往后扫描：，将第一个遇到的数字保存在c中，遇到一次计数+1，若遇到一次不是则-1，计数器为0时开始新一轮技术。
统计C数字出现次数 判断与n/2大小
*/
int Majority(int A[],int n)
{
	int i,c,count=1;
	c=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]==c)
		count++;
		else
		{
			if(count>0)count--;
			else
			{
				c=A[i];
				count==1;
			}
		}
	}
	if(count>0)
	{
		for(i=count=0;i<n;i++)
		{
			if(A[i]==c)count++;
		}
		if(count>n/2)return c;
		else return -1;
	}
}

		}
	}
	
}

           /*13 找出数组中的未出现的最小正整数 */
/*————————————————————————————————————————————————————————*/
/* 算法思路 ：  
    方法  c=1，若遇到1，则c++,再次遍历寻找与C相同的值，循环操作，知道找不到C的值时跳出，此时c为期最小正整数
    时间复杂度：n^2
    空间复杂度：1
*/	
void MinList(int A[],int n)
{
	int c=1,count=0;
	for(;;c++)
	{
		count=0;
		for(int i=0;i<n&&count==0;i++)
		{
			if(A[i]==c)count=1;
		}
		if(count==0)break;
	}
	return c;
}
  /*14 三元祖距离最小 */
/*————————————————————————————————————————————————————————*/
/* 算法思路 ：  
    选定一个a,在s2里找与a差值最小的b,再找s3中与b差值最小的c1,与a差值最小的c2,最后比较出距离最小的。
    便利计算所有的a,找出距离最小的三元组。
    时间复杂度：n^2
    空间复杂度：1
*/	
	
int Distance(int a, int b, int c)
{
	return int(abs(a-b)+abs(b-c)+abs(a-c));
}
		
void (int s1[],int s2[],int s3[],int n1, int n2, int n3)
{
	int dist=10000;
	int a_tmp,b_tmp,c_tmp;
	for(int i;i<n1;i++)
	{
		int a=s1[i];
		int b=0;
		int c=0;c1=0;c2=0;
		int D_ab=abs(a-s2[0]);
		int D_ac=abs(a-s3[0]);
		for(int j=0;j<n2;j++)
		{
			//在s2里找与a差值最小的b
			if(abs(a-s2[j])<D_ab)
			{
				b=s2[j];
				D_ab=abs(a-s2[j];
			}	
		}
		for(int j=0;j<n3;j++)
		{
			//与a差值最小的c1,
			if(abs(a-s3[j])<D_ab)
			{
				c1=s3[j];
				D_ac=abs(a-s3[j];
			}	
		}
		D_bc=abs(b-s3[0]);
		for(int j=0;j<n3;j++)
		{
			//再找s3中与b差值最小的c2,
			if(abs(b-s3[j])<D_ab)
			{
				c2=s3[j];
				D_bc=abs(b-s3[j];
			}	
		}
		if(Distance(a,b,c1)>Distance(a,b,c2)) c=c2
	        else c=c1;
	       if(dist>Distance(a,b,c))
               { a_tmp=a;
		b_tmp=b;c_tmp=c;			 
	       }
					
	}
					 
					 
}
		
		
		
		
		
		
		
		
		
		
	}
	
}
