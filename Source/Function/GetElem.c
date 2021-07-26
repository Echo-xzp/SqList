/*
 * @Descripttion: 这是一个读取目标位置线性表数据的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-22 09:48:01
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 10:08:01
 */

#include  "GetElem.h"

/**
 * @name: GetElem
 * @description: 读取线性表目标位置数据
 * @param {SqList} list  线性表变量名
 * @param {int} pos     目标位置
 * @param {elemtype *} result   读取返回结果
 * @return {*}1/0
 */
Status  GetElem(SqList list , int pos , elemtype * result) 
{
    //检查线性表是否为空
    if(!list.base)   exit(ERROR) ;

    //检查pos位置是否正确
    if (pos > list.listsize || pos < 1)
    {
        exit(ERROR) ;
    }

    //将pos位置数据以result结果返回
    *result = (list.base)[pos-1] ;

    return OK ;
    
}