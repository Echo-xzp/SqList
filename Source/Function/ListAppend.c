/*
 * @Descripttion: 这是一个往线性表里面添加元素的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 10:16:59
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 09:41:10
 */

#include "ListAppend.h"

/**
 * @name: ListAppend
 * @description: 往线性表当前位置后添加元素
 * @param {SqList} *list
 * @param {elemtype} data
 * @return {*}1/-1
 */
Status ListAppend(SqList *list , elemtype data) 
{
    //检查线性表是否为空
    if(!list)  exit(ERROR) ;
    
    //检查线性表储存空间是否达到上限
    if (list->length == list->listsize)
    {
        
        //线性表储存空间变大
        list->listsize += LISTINCREMENT / sizeof(elemtype) ;

        //重新分配更大的内存
        list->base = (elemtype*)realloc(list->base,(list->listsize)*sizeof(elemtype)) ;

        //重新分配失败
        if(!list->base)  exit(OVERFLOW) ;


    }
    
    //在线性表中添加元素，当前位置增长
    (list->base)[list->length] = data ;
    ++(list->length) ;

    return OK ;

}
