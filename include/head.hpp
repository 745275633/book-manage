/*************************************************************************
    > 文件名: head.hpp
    > 作者: 吞噬黑洞的数据（745275633）
    > 邮箱: 7452756333@163.com
    > 创建时间: 2016年07月05日 星期二 09时53分14秒
    >
 ************************************************************************/

#ifndef HEAD_HPP
#define HEAD_HPP

#include <iostream>
#include <fstream>
#include <locale>
extern "C"
{
#include <libintl.h>
#include <dirent.h>
#include <unistd.h>
#include <getopt.h>
}
using namespace std;

#include "json/json.h"

#include "avhttp.hpp"
#include "debug.hpp"
#include "book-manage_config.hpp"
#include "sql.hpp"

#define PACKAGE "book-manage"
#define LOCALEDIR "/usr/share/locale/"
#define _(x) gettext(x)
void print_main_menu(char doing, char target);
string get_web(string isbn);
int guide(char doing, char target);
void increase(char target, string jsoninfo, string call_num);
void search(char target, string content, unsigned int flag);
void search_setting();

extern string bookmanagehome;

#endif
