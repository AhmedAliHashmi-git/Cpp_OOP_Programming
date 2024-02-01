#include<iostream>
using namespace std;
class Test{
    private:
    static int variable;
    public:
    static int setVariable(int var){
         variable = var;
    }
    static int getVariable(){
            return variable;
    }
};
int Test::variable = 0;
int main(){
    Test::setVariable(10);
    cout<<Test::getVariable()<<endl;
    return 0;
}