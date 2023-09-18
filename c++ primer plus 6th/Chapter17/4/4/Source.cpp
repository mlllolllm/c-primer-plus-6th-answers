//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	cout << "Enter the first copy file name:";
//	string fc;
//	getline(cin, fc);
//	cout << "Enter the second copy file name:";
//	string sc;
//	getline(cin, sc);
//	cout << "Enter the copied file name:";
//	string res;
//	getline(cin, res);
//
//	ifstream first_c(fc);
//	ifstream second_c(sc);
//	ofstream copied(res);
//
//	if (!first_c.is_open() || !second_c.is_open() || !copied.is_open()) {
//		cerr << "Open file error!" << endl;
//		return 0;
//	}
//
//	char temp_f;
//	char temp_s;
//	while (!first_c.eof()||!second_c.eof()) {
//		if (!first_c.eof()) {
//			while ((temp_f = first_c.get()) != '\n')
//				copied << temp_f;
//		}
//		
//		copied << " ";
//
//		if (!second_c.eof()) {
//			while ((temp_s = second_c.get()) != '\n')
//				copied << temp_s;
//		}
//		
//		
//	}
//
//	first_c.close();
//	second_c.close();
//	copied.close();
//
//	cout << "Done." << endl;
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string inputFile1, inputFile2, outputFile;

	// 获取输入文件和输出文件的文件名
	std::cout << "Enter the first input file name: ";
	std::cin >> inputFile1;
	std::cout << "Enter the second input file name: ";
	std::cin >> inputFile2;
	std::cout << "Enter the output file name: ";
	std::cin >> outputFile;

	// 打开输入文件
	std::ifstream file1(inputFile1);
	std::ifstream file2(inputFile2);

	if (!file1.is_open() || !file2.is_open()) {
		std::cerr << "Error: Unable to open input files." << std::endl;
		return 1;
	}

	// 打开输出文件
	std::ofstream outFile(outputFile);
	if (!outFile.is_open()) {
		std::cerr << "Error: Unable to open output file." << std::endl;
		return 1;
	}


	// 逐行读取两个输入文件并合并
	std::string line1, line2;

	while (true) {
		if (!std::getline(file1, line1)) {
			// 文件1已经到达文件尾，直接将文件2的剩余部分复制到输出文件
			while (std::getline(file2, line2)) {
				outFile << line2 << std::endl;
			}
			break; // 结束循环
		}

		if (!std::getline(file2, line2)) {
			// 文件2已经到达文件尾，直接将文件1的剩余部分复制到输出文件
			outFile << line1 << " " << std::endl;
			while (std::getline(file1, line1)) {
				outFile << line1 << std::endl;
			}
			break; // 结束循环
		}

		// 将两行合并，并用空格分隔，写入输出文件
		outFile << line1 << " " << line2 << std::endl;
	}

	// 关闭文件
	file1.close();
	file2.close();
	outFile.close();

	std::cout << "Merge completed. Check the output file." << std::endl;

	system("pause");
	return 0;
}
