#include<iostream>
using namespace std;
typedef int elemtype;
struct dnote
{
	elemtype data;
	dnote *pre,*next;
};
typedef dnote* dlinklist;
//˫�����ʼ�� 
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
//��P�ڵ�����s�ڵ� 
bool insertnextnote(dnote* p,dnote* s)
{
	s->next=p->next;
	if(p->next=0)//pΪβ�� 
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
//ɾ��p�ĺ�̽ڵ�q
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
	//ѭ���ͷŸ������ݽڵ� 
	while(l->next!=NULL)
	{
		deletenote(l);
	}
	delete l;//�ͷ�ͷ�ڵ� 
	l=NULL;//ͷָ��ָ��� 
}
//˫����ı���
 
int main()
{
	dlinklist l;
	int flag=initdlinklist(l);
	cout<<flag<<endl;
	
} 
