#include"header.h"
#include<stdlib.h>
#include<stdio.h>
//尾插法
LinkList CreatList()
{
    LinkList L = (LinkList)malloc(sizeof(LNode)),s,r;
    ElemType e;
    r = L;//用来存储尾部指针
    while((scanf("%d", &e)) != EOF)
    {
/**< jhjjjjhhjjhjhjh */        s = (LinkList)malloc(sizeof(LNode));
        r->next = s;
        s->data = e;
        s->next = NULL;
        r = s;
    }
    return L;

}
//根据序号查找对应节点的值，序号为0返回头节点的值
LinkList GetElemByIndex(LinkList L,int i)
{
    LinkList p = L;
    if(i < 0)
        return NULL;
    while(i)
    {
        p = p->next;
        if(!p)
            break;
        i--;
    }
    return p;
}
//根据值查找对应节点的指针
LinkList GetElemByVal(LinkList L,ElemType e)
{

    LinkList p = L->next;
    while(p &&p->data != e)
    {
        p = p->next;
    }
    return p;
}

//插入节点
int InsertNode(LinkList L,ElemType e,int i)
{
    LinkList p = GetElemByIndex(L,i-1),s;
    if( p != NULL )
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = e;
        s->next = p->next;
        p->next = s;
        return 1;
    }else
    {
        return 0;
    }
}

//删除节点
int DeleNode(LinkList L, int i)
{
    LinkList p = GetElemByIndex(L,i-1),s;
    if( p != NULL )
    {
        s = p->next;
        p->next = s->next;
        free(s);
        return 1;
    }else
    {
        return 0;
    }
}
