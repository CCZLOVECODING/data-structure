#include<iostream>
using namespace std;
#define maxsize 10
typedef int elemtype;
//˳��洢�ڵ㶨�� 
struct arrnode{
	elemtype value;//�ڵ����� 
	bool isempty;//�ڵ��Ƿ�Ϊ�� 
};


//��ʽ�洢�ڵ㶨�� 
struct bitnode{
	elemtype value;//������ 
	bitnode *lchild,*rchild;//���Һ���ָ�� 
};

//��������ڵ㶨�� 
struct bitnode3{
	elemtype value;//������ 
	bitnode3 *parent;//���ڵ�ָ�� 
	bitnode3 *lchild,*rchild;//���Һ���ָ�� 
};

typedef bitnode* bittree;
typedef bitnode3* bittree3;
int main()
{
//˳��洢	
	arrnode t[maxsize];
	//˳��洢��ʼ��ʱ���нڵ���Ϊ��
	for(int i=0;i<maxsize;i++)
	{
		t[i].isempty=true;
	}
//��ʽ�洢	
	bittree root=NULL;
	//������ڵ� 
	root=new bitnode;
	root->value=1;
	root->lchild=0;
	root->rchild=0;
	//�����½ڵ�
	bitnode *p=new bitnode;
	p->value=2;
	p->lchild=0;
	p->rchild=0;
	root->lchild=p; //���ڵ�ĺ��� 
	
}
