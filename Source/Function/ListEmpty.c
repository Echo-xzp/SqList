/*
 * @Descripttion: 这是一个对线性表判空的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 09:59:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-21 10:03:35
 */

#include  "ListEmpty.h"

/**
 * @name: ListEmpty
 * @description: 根据线性表收否为空返回结果
 * @param {SqList} list     线性表名
 * @return {*}1/0
 */
Status  ListEmpty(SqList list) 
{
    if (list.base)
    {
        return True ;
    }

    return False ;

}