/*
 * TestCgi.cpp
 *
 *  Created on: Jan 15, 2014
 *      Author: debusr
 */

/* C++ */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
  /* 出力データを文字列としてためておくための変数 */
  string strOutData;

  /* httpヘッダ */
  /* HTML出力であることを出力 */
  strOutData="Content-type: text/html; charset=utf-8 \n";
  /* ブラウザにキャッシュさせない。 */
  strOutData+="Pragma: no-cache\n";
  strOutData+="Cache-Control: no-cache\n\n";//最後は改行２つ

  /* 本文出力 */
  strOutData+="<html><head><title>テスト</title><head>";
  strOutData+="<body>テスト出力です。</body></html>";

  /* 標準出力に設定内容を出力 */
  cout << strOutData.c_str();
  return 0;
}


