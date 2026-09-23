#include <iostream>
#include <string>
#include <cmath>

void verificador(std::string ab) {
    int count = 0, contador = 0;
    for(int e=0;e<(ab.size());e++){
        if(ab[e] == 'a'){
            count += 1;
            if(e==(ab.size()-1)){
                if(count>1){
                    contador += count;
                    count = 0;
                }
            }
        }else{
            if(count>1){
                contador += count;
                count = 0;
            }else{
                count = 0;
            }
        }
    }
    std::cout<<contador<<std::endl;
}

int main(){
    int n;
    std::string ab;
    std::cin>>n>>ab;
    bool verificaAb = true;
    for(int e=0;e<ab.size();e++){
        if(ab[e]!='a'&&ab[e]!='b'){
            verificaAb = false;
        }
    }
    if(n>0||n<=(std::pow(10,5))){
        if(ab.size()==n){
            if(verificaAb){
                verificador(ab);
            }
        }
    }
    return 0;
}

// codigo antigo do compilador online
// #include <iostream>
// #include <string>
// int main() {
//     // Write C++ code here
//     std::string a;
//     int count = 0, contador = 0;
//     std::cin>>a;
//     for(int e=0;e<(a.size());e++){
//         if(a[e] == 'a'){
//             count += 1;
//             if(e==(a.size()-1)){
//                 if(count>1){
//                     contador += count;
//                     count = 0;
//                 }
//             }
//         }else{
//             if(count>1){
//                 contador += count;
//                 count = 0;
//             }else{
//                 count = 0;
//             }
//         }
//     }
//     std::cout<<contador<<std::endl;
//     return 0;
// }