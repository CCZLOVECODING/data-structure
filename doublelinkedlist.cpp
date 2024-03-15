#include<iostream>
using namespace std;
typedef int elemtype;
struct dnote
{
	elemtype data;
	dnote *pre,*next;
};
typedef dnote* dlinklist;
//双链表初始化 
bool initdlinklist(dlinklist &l)
{
	l=new dnote;
	if(l==0)
	{
		return false;
	}
	l->pre=0;
	l->next=NULL;
	return true;
}
//在P节点后插入s节点 
bool insertnextnote(dnote* p,dnote* s)
{
	s->next=p->next;
	if(p->next=0)//p为尾端 
	{
		p->next=s;
		s->pre=p;
	}
	else
	{
		p->next=s;
		s->pre=p;
		s->next->pre=s;
	}
}
//删除p的后继节点q
bool deletenote(dnote *p)
{
	if(p==0||p->next==0)
	{
		return false;
	}
	dnote *q=p->next;
	if(q->next!=NULL)
	{
		q->next->pre=p;
	}
	p->next=q->next;
	delete q;
	return true;
} 
void destroylist(dlinklist &l)
{
	//循环释放各个数据节点 
	while(l->next!=NULL)
	{
		deletenote(l);
	}
	delete l;//释放头节点 
	l=NULL;//头指针指向空 
}
//双链表的遍历
 
int main()
{
	dlinklist l;
	int flag=initdlinklist(l);
	cout<<flag<<endl;
	
} 
