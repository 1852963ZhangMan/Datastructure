typedef int ElemType;
typedef struct Lnode{
  Elemtype data;
  struct Lnode *next;
}LNode,*LinkList;

      /*01题目：递归删除不带头节点的单链表L中值为x的节点*/
/*—————————————————————————————————————————*/

LNode* delete_x(LinkList &L ,Elemtype x)
{
    if(L->next!=NULL)
    {
      L->next=delete_x(L->next,x);
    }
    else{
      if(L->data==x)
      {
         p=L->next;
         free(L);//释放X节点 返回其后继节点
        return p;
      }
      else return L;//返回其自身节点
     }
}
 /*02题目：删除带头节点单链表L，值为x的节点释放空间，结点不唯一*/
/*—————————————————————————————————————————*/

void delete_x(LinkList &L ,Elemtype x)
{
  p=L;//p永远指向节点的前驱
  while(p!=NULL)
  {
    if(p->next->data==x)
    {
      if(p==L)//改变头节点的后继
      {
        l->next=p->next->next;
      }
      q=p->next;
      p->next=p->next->next; // 后继是x 删除p的后继 并且释放
     free(q);
    }
    else p=p->next;    //后继不是x p指向下一个节点 继续检查
  }
  
}
 /*03题目：带头节点单链表L，反向输出结点的值*/
/*—————————————————————————————————————————*/
void Getnext(LinkList &L)
{
  //递归函数 逆序输出
  if(L->next==NULL) cout<<L->data<<endl; 
  else
  {
    Getnext(L->next);
  }
  cout<<L->data<<endl;
}
void reverse_output(LinkList &L)
{
  Getnext(L);
}

 /*04题目：删除带头节点单链表L最小值，唯一*/
/*—————————————————————————————————————————*/
 Lnode* GetMin_PriorLoca(LinkList L)
 {
   Lnode*q=L,*p=L;//p 记录最小值的前驱结点
   ElemType tmp=L->next->data;
   while(q->next!=NULL)
   {
     if(q->next->data<tmp)
     {
       p=q;
     }
     q=q->next;
   }
   return p;
 }
void delete_node_after_p(LinkList &L,LinkNode *p)
{
  q=p->next;
  p->next=p->next->next;
  free(q);
}
 void delete_min(LinkList &L)
 {
   p=GetMin_PriorLoca(L);//找出最小值的前驱p
   delete_node_after_p(L,p);

 }
     /*05题目：带头节点单链表L就地逆置 空间复杂o1*/
/*—————————————————————————————————————————*/  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
