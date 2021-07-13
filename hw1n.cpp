#include <iostream>

class Power {
    public:
    	float m_a=1;
    	int m_b=0;
    	void set (float a,int b){
    	    m_a=a;
    	    m_b=b;
    	}
        void calculate (){
            int tmp= m_a;
            if (m_b==0){
                std::cout<<1<<std::endl;
            }
            else {
                for (int i=1; i<m_b;i++){
                    m_a*=tmp;
                }
                std::cout <<m_a<<std::endl;
                m_a=tmp;
            }
        }
};

int main (){
	Power power;
	power.set(2,7);
	power.calculate();
	return 0;
}            
