// #include <iostream>

// int main(void)
// {
//     char name[100];
//     char lang[200];

//     std::cout<<"이름은 무엇입니까? ";
//     std::cin>>name;

//     std::cout<<"좋아하는 프로그래밍 언어는 무엇인가요? ";
//     std::cin>>lang;

//     std::cout<<"내 이름은 "<<name<<"입니다.\n";
//     std::cout<<"제일 좋아하는 언어는 "<<lang<<"입니다."<<std::endl;
//     return 0;
// }

#include <iostream>
#include <string> // 1. string 헤더 추가

int main(void)
{
    // 2. 크기 지정 없이 string 객체 선언
    std::string name;
    std::string lang;

    std::cout << "이름은 무엇입니까? ";
    // 3. 공백 포함 입력을 받으려면 getline 사용 (선택 사항)
    // std::cin >> name; // 띄어쓰기 전까지만 입력받음
    std::getline(std::cin, name); 

    std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
    std::getline(std::cin, lang);

    std::cout << "내 이름은 " << name << "입니다.\n";
    std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

    return 0;
}