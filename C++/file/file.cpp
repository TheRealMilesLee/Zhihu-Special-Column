#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

/**
 * This function is to bubble sort the array
 * @param array is the vector that needs to be sorted
 */
void bubble_sort(vector<unsigned> &array);

int main()
{
  //文件打开准备
  ifstream file;
  //打开在当前位置的一个名字叫1.txt的文件
  file.open("../1.txt");
  //初始化向量
  vector<unsigned> numbers_of_vectors;
  unsigned numbers;

  //将文件内读数据读入新建的变量中并放入向量
  while(file >> numbers)
  {
    numbers_of_vectors.push_back(numbers);
  }

  //重新冒泡排序向量
  bubble_sort(numbers_of_vectors);

  //文件输出准备
  ofstream output_file;
  //打开在当前位置的一个叫2.txt文件，如果没有，就新建一个
  output_file.open("../2.txt");

  //把向量里面的数据输出到文件中
  for(unsigned looptimes = 0; looptimes < numbers_of_vectors.size(); looptimes++)
  {
    output_file << numbers_of_vectors.at(looptimes) << " ";
  }

  //关闭打开的文件
  output_file.close();
  file.close();
  //程序结束
  return 0;
}

void bubble_sort(vector<unsigned> &array)
{
  for(size_t pass_indx = array.size(); pass_indx > 0; pass_indx--)
  {
    for(size_t compare_indx = 0; compare_indx < pass_indx; compare_indx++)
    {
      if(array.at(compare_indx) > array.at(compare_indx + 1))
      {
        switch(array.at(compare_indx), array.at(compare_indx + 1));
      }
    }
  }
}
