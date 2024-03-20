#include<iostream>
using namespace std;
#define maxsize 10
typedef int elemtype;
//顺序存储节点定义 
struct arrnode{
	elemtype value;//节点数据 
	bool isempty;//节点是否为空 
};


//链式存储节点定义 
struct bitnode{
	elemtype value;//数据域 
	bitnode *lchild,*rchild;//左右孩子指针 
};

//三叉链表节点定义 
struct bitnode3{
	elemtype value;//数据域 
	bitnode3 *parent;//父节点指针 
	bitnode3 *lchild,*rchild;//左右孩子指针 
};

typedef bitnode* bittree;
typedef bitnode3* bittree3;
int main()
{
//顺序存储	
	arrnode t[maxsize];
	//顺序存储初始化时所有节点标记为空
	for(int i=0;i<maxsize;i++)
	{
		t[i].isempty=true;
	}
//链式存储	
	bittree root=NULL;
	//插入根节点 
	root=new bitnode;
	root->value=1;
	root->lchild=0;
	root->rchild=0;
	//插入新节点
	bitnode *p=new bitnode;
	p->value=2;
	p->lchild=0;
	p->rchild=0;
	root->lchild=p; //根节点的孩子 
	
}
