#include <iostream>
#include <map>
#include <stdexcept>

int main()
{
    // キー：文字列、値：intとしたmapを生成する. 
    std::map<std::string, int> sampleMap;

    // sampleMapに"John"をキーとした要素を詰める. 
    sampleMap.insert(std::make_pair("John", 5));

    // sampleMapに"Ken"をキーとした要素を詰める. 
    sampleMap["Ken"] = 10;

    std::cout << "###std::map::at" << std::endl;

    // at
    try
    {
        std::cout << sampleMap.at("John") << std::endl;
        std::cout << sampleMap.at("Ken") << std::endl;
        std::cout << sampleMap.at("Tom") << std::endl;

        // キーチェック時に例外を投げるため、この処理は実行されない. 
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

        // キーチェック時に例外を投げず、自動追加されるデフォルト値が出力され、実行完了となる. 
        std::cout << "Complete..." << std::endl;
    }
    // キーチェック時に例外は投げない. 
    catch (std::out_of_range& sampleException)
    {
        std::cout << "can't find the key!" << std::endl;
        std::cout << "Error : " << sampleException.what() << std::endl;
    }

    std::cout << "End..." << std::endl;

    return 0;
}
