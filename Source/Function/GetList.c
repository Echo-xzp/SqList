/*
 * @Descripttion: 这是一个打印线性表中储存的所有的元素的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 10:48:48
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 09:34:03
 */

#include  "GetList.h"

/**
 * @name: GetList
 * @description: 打印线性表中储存的所有的元素
 * @param {SqList} list  线性表变量
 * @return {*}1
 */
Status  GetList(SqList list)
{
    int i = 0 , count = 0 ;
    count = list.length ;

    //检测线性表是否为空
    if(!list.base)  exit(ERROR) ;
    
    //遍历打印线性表中元素
    for ( i = 0 ; i < count ; ++i)
    {
        printf("%-3d",(list.base)[i]) ;
    }
    printf("\n") ;

    return OK ;

}
