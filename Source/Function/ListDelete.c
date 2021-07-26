/*
 * @Descripttion: 这是一个在指定位置删除线性表元素,并返回被删除元素的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-22 15:25:49
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 15:43:17
 */

#include  "ListDelete.h"

/**
 * @name: ListDelete
 * @description: 指定位置删除线性表元素,并返回被删除元素
 * @param {SqList} *list    线性表变量地址
 * @param {int} pos     删除元素的位置
 * @param {elemtype*} del   用来接受删除元素的返回值
 * @return {*}
 */
Status  ListDelete(SqList *list , int pos , elemtype* del)
{
    //检查线性表是否为空
    if(!list->base)   exit(ERROR) ;

    //检查目标位置是否合法
    if (pos > list->listsize || pos < 1)
    {
        exit(ERROR) ;
    }
    
    //用del来返回被删除元素
    *del = (list->base)[pos-1] ;

    //目标位置后所有元素前移一位
    while (pos < (list->length))
    {
        (list->base)[pos-1] = (list->base)[pos] ;
        ++pos ;
    }

    //线性表当前表长减1
    --(list->length) ; 

    return OK ;

}
