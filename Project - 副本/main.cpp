#include "Variable.h"
#include "Input.h"
#include <Windows.h>

signed main() {
    // system("pause");
    // int tmp = tf.peek() == EOF ? 1 : 0;
    // std::cerr << tmp << '\n';
    // tf.open("example.txt", std::ios::in | std::ios::out);
    // tf << "aaaawa";
    // int tmp1 = tf.peek() == EOF ? 1  : 0;
    //  ::cerr << tmp1 << '\n';
    // tf.close();
    std::ios::sync_with_stdio(false);
    std::cin.tie(0), std::cout.tie(0);

    init();

    // int cnt = 0;
    readFile();
    int len = vStu.size();
    while(count <= 10) count = Rand(len + 1);

    // for(Stu t : vStu) {
    //     std::cerr << t.id << " " << t.name << '\n';
    // }
    // exit(0);
    // print("�̱�����");
    std::cerr << count << '\n';
    // exit(0);
    int tmp;
    while(count -- > 1) {
        tmp = Rand(len);

        /////////////////////////////////////////////////////////////////////////
        // 2023.12.13�����ӱ�������
        // ����������tmpֵ���������鷶Χ��Ӧע�����ӱ���
        // ���⣬ѧ��C++����Ҫ���������ķ�ʽ��̣���������ȫ�ֺ�����ʹ�ã��������ŵ�����ʵ��
        // �������ɣ��Ժ�ע��
        if (tmp >= len)
        {
            tmp = len - 1;
        }

        if (tmp < 0)
        {
            tmp = 0;
        }
        ////////////////////////////////////////////////////////////////////////

        if(vStu[tmp].name == "") {
            count ++;
            continue;
        }
        print(vStu[tmp].name);
        Sleep(100);
        if(count > 1)std::system("cls");
    }

    std::cerr << "\n                  " << vStu[tmp].name << "  ��Ϊ�����˶�����\n";
    std::system("pause");
	return 0;
}

void print (std::string name) {
    int flg = 0;
    if(name.size() / 2 == 3) flg = 1;
    std::cerr << R"(
                ----------- ----------------
               ---                       ---
              ---                         ---
             ---                           ---
            -----------   )";
    std::cerr << name;
    if(!flg)
    std::cerr << R"(   ----------
    )";
    else
    std::cerr << R"(   --------
    )";
    std::cerr << R"(       ---                               ---
            ---                             --- 
             ---                           --- )"; 
}