#include <iostream>
#include <cstdint>

class RGBA{
public:
	std::uint8_t m_red=0;
	std::uint8_t m_green=0;
	std::uint8_t m_blue=0;	
	std::uint8_t m_alpha=255;
	void get(){
		std::cin>>m_red;
		std::cin>>m_green;
		std::cin>>m_blue;
	};
	void print(){
		std::cout<<m_red<<m_green<<m_blue<<std::endl;
	}
};

int main(){
	RGBA rgba;
	rgba.get();
	rgba.print();
	return 0;
}
