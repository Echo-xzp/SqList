/*
 * @Descripttion: 这是一个在线性表指定位置插入元素的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-22 10:05:29
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 12:03:44
 */

#include  "ListInsert.h"

/**
 * @name: ListInsert
 * @description: 在指定位置插入元素
 * @param {SqList} *list   线性表变量地址
 * @param {int} pos     目标位置
 * @param {elemtype} inserted   被插入元素
 * @return {*}1/-1
 */
Status  ListInsert(SqList *list , int pos , elemtype inserted)
{
    int cur = list->length ;

    //检查线性表是否为空
    if(!list->base)     exit(ERROR) ;

    //检查目标位置是否合法
    if (pos > list->listsize || pos < 1)
    {
        exit(ERROR) ;
    }

    //检查线性表可用空间大小，不够分配更大空间
    if (list->length == list->listsize)
    {
         //线性表储存空间变大
        list->listsize += LISTINCREMENT / sizeof(elemtype) ;

        //重新分配更大的内存
        list->base = (elemtype*)realloc(list->base,(list->listsize)*sizeof(elemtype)) ;

        //重新分配失败
        if(!list->base)  exit(OVERFLOW) ;

    }
    
    //从表尾到目标位置，所有元素依次往后移动一位
    while (cur > pos-1)
    {
        (list->base)[cur] = (list->base)[cur-1] ;
        --cur ;
    }

    //在目标位置插入元素
    (list->base)[cur] = inserted ;
    
    //当前长度增加 
    ++(list->length) ;

    return OK ;

}