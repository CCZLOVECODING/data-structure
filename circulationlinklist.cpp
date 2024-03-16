#include<iostream>
using namespace std;
typedef int elemtype;
struct lnote
{
	elemtype data;
	lnote *next;	
};
struct dnote
{
	elemtype data;
	dnote *pre,*next;
};
typedef lnote* llinklist;
typedef dnote* dlinklist;
//循环单链表初始化 
bool initllinklist(llinklist &l)
{
	l=new lnote;
	if(l==0)
	{
		return false;
	}
	l->next=l;
	return true;
}
//循环双链表初始化 
bool initdlinklist(dlinklist &l)
{
	l=new dnote;
	if(l==0)
	{
		return false;
	}
	l->pre=l;
	l->next=l;
	return true;
}
//循环双链表在P节点后插入s节点 
bool insertnextnote(dnote* p,dnote* s)
{
	s->next=p->next;
	p->next=s;
	s->pre=p;
	s->next->pre=s;
}
//循环双链表删除p的后继节点q
bool deletenote(dnote *p)
{
	if(p==0)
	{
		return false;
	}
	dnote *q=p->next;
	q->next->pre=p;
	p->next=q->next;
	delete q;
	return true;
}
int main()
{
	dlinklist l;
	int flag=initdlinklist(l);
	cout<<flag<<endl;
	
} 
