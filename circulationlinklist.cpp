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
//ѭ���������ʼ�� 
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
//ѭ��˫�����ʼ�� 
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
//ѭ��˫������P�ڵ�����s�ڵ� 
bool insertnextnote(dnote* p,dnote* s)
{
	s->next=p->next;
	p->next=s;
	s->pre=p;
	s->next->pre=s;
}
//ѭ��˫����ɾ��p�ĺ�̽ڵ�q
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
