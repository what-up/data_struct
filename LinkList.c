#include"header.h"
#include<stdlib.h>
#include<stdio.h>
//β�巨
LinkList CreatList()
{
    LinkList L = (LinkList)malloc(sizeof(LNode)),s,r;
    ElemType e;
    r = L;//�����洢β��ָ��
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
//������Ų��Ҷ�Ӧ�ڵ��ֵ�����Ϊ0����ͷ�ڵ��ֵ
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
//����ֵ���Ҷ�Ӧ�ڵ��ָ��
LinkList GetElemByVal(LinkList L,ElemType e)
{

    LinkList p = L->next;
    while(p &&p->data != e)
    {
        p = p->next;
    }
    return p;
}

//����ڵ�
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

//ɾ���ڵ�
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
