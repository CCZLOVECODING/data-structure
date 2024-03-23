#include<iostream>
using namespace std;
#define maxsize 10
typedef int elemtype;
//struct sqstack{
//	elemtype data[maxsize];//静态数组存放栈中元素 
//	int top;//栈顶指针 
//};
////初始化栈 
//void initstack(sqstack &s)
//{
//	s.top=-1;
//}
////判断栈空
//bool stackempty(sqstack &s)
//{
//	if(s.top==-1)
//	{
//		return true;
//	}
//	else{
//		return false;
//	}
//}
////新元素入栈
//bool push(sqstack &s,elemtype x){
//	if(s.top==maxsize-1)
//	{
//		return false;
//	}
//	s.top+=1;
//	s.data[s.top]=x;
//	return true;
//} 
////出栈操作
//bool pop(sqstack &s,elemtype x){
//	if(s.top=-1)
//		return false;
//	x=s.data[s.top];
//	s.top--;
//	return true;
//}
////共享栈 ******************************&************
//
//struct shstack{
//	elemtype data[maxsize];//静态数组存放栈中元素 
//	int top0;//0号栈栈顶指针
//	int top1;//1号栈栈顶指针 
//};
////初始化共享栈 
//void initshstack(shstack &s)
//{
//	s.top0=-1;
//	s.top1=maxsize;
//}



//链式栈的类定义 *****************************
template<class t>
struct linknode{
	t data;
	linknode *next;
};
template <class t>
class linkstack{
public:
	linkstack():top(0){}
	~linkstack(){makeempty();}
	int getsize();
	bool push(const t&x);
	bool pop(t&x);
	void makeempty();
	bool gettop(t & x);
	bool isempty() const {return(top==NULL)?true:false;};
private:
	linknode<t> *top;	
};
//销毁操作 
template<class t>
void linkstack<t>::makeempty(){
	linknode<t> *p;
	while(top!=NULL)
	{
		p=top;
		top=top->next;
		delete p;
	}
}
//栈顶插入操作 
template<class t>
bool linkstack<t>::push(const t&x)
{
	top=new linknode<t>(x,top);
	if(top==NULL)
	{
		return false;
	}
	return false;	
}
//退栈 
template<class t>
bool linkstack<t>::pop(t &x)
{
	if(isempty()==true) 
		return false;//栈空不退栈 
	linknode<t> *p=top;
	top=top->next;
	x=p->data;
	delete p;
	return true;
	
}
//返回栈顶元素
template <class t>
bool linkstack<t>::gettop(t & x)
{
	if(isempty())
	{
		return false;
	}
	x=top->data;
	return true;
} 


//返回栈长
template<class t>
int linkstack<t>::getsize()
{
	linknode<t> *p=top;
	int k=0;
	while(p!=NULL)
	{
		p=p->next;
		k++;
	}
	return k;
} 
int main()
{
	
	
}
