#include <iostream>
#include <map>
#include <stdexcept>

int main()
{
    // �L�[�F������A�l�Fint�Ƃ���map�𐶐�����. 
    std::map<std::string, int> sampleMap;

    // sampleMap��"John"���L�[�Ƃ����v�f���l�߂�. 
    sampleMap.insert(std::make_pair("John", 5));

    // sampleMap��"Ken"���L�[�Ƃ����v�f���l�߂�. 
    sampleMap["Ken"] = 10;

    std::cout << "###std::map::at" << std::endl;

    // at
    try
    {
        std::cout << sampleMap.at("John") << std::endl;
        std::cout << sampleMap.at("Ken") << std::endl;
        std::cout << sampleMap.at("Tom") << std::endl;

        // �L�[�`�F�b�N���ɗ�O�𓊂��邽�߁A���̏����͎��s����Ȃ�. 
        std::cout << "Complete..." << std::endl;
    }
    catch (std::out_of_range& sampleException)
    {
        std::cout << "can't find the key!" << std::endl;
        std::cout << "Error : " << sampleException.what() << std::endl;
    }

    std::cout << std::endl << "###std::map::operator[]" << std::endl;

    // operator[]
    try
    {
        std::cout << sampleMap["John"] << std::endl;
        std::cout << sampleMap["Ken"] << std::endl;
        std::cout << sampleMap["Tom"] << std::endl;

        // �L�[�`�F�b�N���ɗ�O�𓊂����A�����ǉ������f�t�H���g�l���o�͂���A���s�����ƂȂ�. 
        std::cout << "Complete..." << std::endl;
    }
    // �L�[�`�F�b�N���ɗ�O�͓����Ȃ�. 
    catch (std::out_of_range& sampleException)
    {
        std::cout << "can't find the key!" << std::endl;
        std::cout << "Error : " << sampleException.what() << std::endl;
    }

    std::cout << "End..." << std::endl;

    return 0;
}
