/*
 * @Descripttion: 这是一个测试线性表函数是否正常的测试程序
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 08:52:38
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 15:45:03
 */

#include "SqList.h"
#include "test.h"

#define   count_test    6
#define   pos       4
#define   inserted      10

int main(int argc, char const *argv[])
{
    SqList list  ;
    elemtype i = 0 , result = 0 , del = 0 ;
    
    //初始化线性表并测试结果
    InitList(&list) ;
    printf("初始化线性表:\n") ;
    printf("当前长度为：%d  储存总长为：%d \n\n",list.length,list.listsize) ;

    //在线性表中插入元素
    printf("在线性表中插入元素：\n") ;
    for ( i = 0; i < count_test ; i++)
    {
        ListAppend(&list , i+1) ;
    }

    //测试插入元素结果
    GetList(list) ;
    printf("当前长度为：%d  储存总长为：%d \n\n",list.length,list.listsize) ;

    //测试读取目标元素结果
    GetElem(list,pos,&result) ;
    printf("读取 %d 位置元素为：%d\n\n", pos , result) ;

    //测试插入元素结果
    printf("在位置 %d 插入元素 %d :\n",pos,inserted) ;
    ListInsert(&list,pos,inserted) ;
    GetList(list) ;
    printf("当前长度为：%d  储存总长为：%d \n\n",list.length,list.listsize) ;

    //测试删除元素结果
    ListDelete(&list,pos,&del) ;
    printf("在位置 %d 删除元素 %d :\n",pos,del) ;
    GetList(list) ;
    printf("当前长度为：%d  储存总长为：%d \n\n",list.length,list.listsize) ;

    //销毁线性表并测试结果
    DestroyList(&list) ;
    printf("销毁线性表：\n") ;
    printf("当前长度为：%d  储存总长为：%d \n\n",list.length,list.listsize) ;
    
    system("pause") ;
    return 0;
    
}
