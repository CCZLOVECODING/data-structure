#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
#define elemtype int 
struct lnote{
	elemtype data;
	struct lnote *next;
};
bool initlist(lnote* &l)
{
    l=NULL;
    return true;
}
bool initlist1(lnote* &l)
{
    l=new lnote;
    if(l==NULL) 
    	return false;
    l->next=NULL;
    return true;
}
bool listinsert(lnote* &l,int i,elemtype &e)
{
	//cout<<"111"<<endl;
	if(i<1)
	{
		return false;
	}
	lnote *p;
	int j=0;
	p=l;
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;
	}
	lnote *s=new lnote;
	s->next=p->next;
	p->next=s;
	s->data=e;
	//cout<<s->data<<endl;
	return true;
}
bool delete1(lnote* &l,int i,elemtype &x)
{
	if(i<1)
	{
		return false;
	}
	
	int j=0;
	lnote *p=l;
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;
	}
	x=p->next->data;
	p->next=p->next->next;
	return true;
}
bool insertpriornode(lnote *p,elemtype e)
{
	if(p==NULL)
	{
		return false;
		
	}
	lnote *s=new lnote;
	s->next=p->next;
	p->next=s;
	s->data=p->data;
	p->data=e;
	return true;
}
//按位查找（带头节点） 
lnote *getelem(lnote* &l,int i)
{
	if(i<0)
	{
		return NULL;
	}
	lnote *p=l;
	int j=0;
	while(p!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	return p;
}
//按值查找
lnote *locatelem(lnote*& l,elemtype e)
{
	lnote *p=l->next;
	while(p!=0&&p->data!=e)
	{
		p=p->next;
	}
	return p;
}
//尾插法建立单链表
lnote* listtailinsert(lnote *&l)
{
	int x;
	l=new lnote;
	cin>>x;
	lnote *s=NULL;
	lnote *r=l;
	while(x!=999)
	{
		s=new lnote;
		r->next=s;
		s->data=x;
		r=s;
		cin>>x;
	}
	r->next=NULL;
	return l;
} 
//头插法建立单链表
lnote* headinsert(lnote * &l)
{
	cout<<111<<endl;
	l=new lnote;
	l->next=NULL;
	int x=0;
	lnote *p=l;
	lnote *s=NULL;
	cin>>x;
	
	while(x!=999)
	{
		s=new lnote;
		s->data=x;
		s->next=p->next;
		p->next=s;
		cin>>x;		
	}
	return l;
 } 
int main()
{
	lnote *l;
	headinsert(l);
	if(l)
	{
		lnote *p=l->next;
		while(p!=NULL)
		{
			cout<<p->data<<endl;
			p=p->next;
		}
	}
	
//	if(initlist1(l))
//	{
//		cout<<"ok"<<endl;
//	}
//	elemtype j=1;
//	for(int i=1;i<=10;i++)
//	{
//		//cout<<"111"<<endl;
//		if(listinsert(l,i,j))
//		{
//			j++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	lnote *p=l;
//	for(int i=0;i<=10;i++)
//	{
//		
//		cout<<p->data<<endl;
//		p=p->next;
//	}
////	int x;
////	if(delete1(l,2,x))
////	{
////		cout<<"ok"<<endl;
////		cout<<x<<endl;
////	}
//	lnote *m=locatelem(l,3);
//	if(m!=NULL)
//	{
//		cout<<m->data<<endl;
//	}
//	//if(insertpriornote())
}


