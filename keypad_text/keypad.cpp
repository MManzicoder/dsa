#include <iostream>
#include <vector>
using namespace std;

string keypadConverter(string str){
    string output="";
    if(str.size()<2){
        output+=str;
    }else{

         if(str =="00"){
             output+="+";
             }
         else if(str =="000"){
             output+="!";
             }
         else if(str =="0000"){
             output+=":";
             }
         else if(str =="00000"){
             output+="<";
             }
         else if(str =="000000"){
             output+=">";
             }
         else if(str =="0000000"){
             output+="\"";
             }
         else if(str =="00000000"){
             output+="|";
             }
         else if(str =="000000000"){
             output+="{";
             }
         else if(str =="0000000000"){
             output+="}";
             }
         else if(str =="00000000000"){
             output+=";";
             }
         else if(str =="000000000000"){
             output+="\\";
             }
         else if(str =="0000000000000"){
             output+=",";
             }
         else if(str =="00000000000000"){
             output+="/";
             }
         else if(str =="000000000000000"){
             output+="?";
             }
         else if(str =="11"){
             output+="a";
             }
         else if(str =="111"){
             output+="b";
             }
         else if(str =="1111"){
             output+="c";
             }
         else if(str =="22"){
             output+="d";
             }
         else if(str =="222"){
             output+="e";
             }
         else if(str =="2222"){
             output+="f";
             }
         else if(str =="33"){
             output+="g";
             }
         else if(str =="333"){
             output+="h";
             }
         else if(str =="3333"){
             output+="i";
             }
         else if(str =="44"){
             output+="j";
             }
         else if(str =="444"){
             output+="k";
             }
         else if(str =="4444"){
             output+="l";
             }
         else if(str =="55"){
             output+="m";
             }
         else if(str =="555"){
             output+="n";
             }
         else if(str =="5555"){
             output+="o";
             }
         else if(str =="66"){
             output+="p";
             }
         else if(str =="666"){
             output+="q";
             }
         else if(str =="6666"){
             output+="r";
             }
         else if(str =="77"){
             output+="s";
             }
         else if(str =="777"){
             output+="t";
             }
         else if(str =="7777"){
             output+="u";
             }
         else if(str =="88"){
             output+="v";
             }
         else if(str =="888"){
             output+="w";
             }
         else if(str =="888"){
             output+="x";
             }
         else if(str =="99"){
             output+="y";
             }
         else if(str =="999"){
             output+="z";
             }
         else if(str =="9999"){
             output+=",";
             }
         else if(str =="01"){
             output+=" ";
             }

    }
    return output;
}

int main(){
 
    string delim = " ";
    string data;
    cout << "Enter sequence of numbers:";
    getline (cin,data);
    cout << "The output is:\n\n";
    data += delim;
    vector<string> strings{};
    size_t posit = 0;
    while ((posit = data.find(delim)) != string::npos) {
        strings.push_back(data.substr(0, posit));
        data.erase(0, posit + delim.length());
    }
    for (const auto &str : strings) {
        cout << keypadConverter(str);
    }

return 0;
/*
    input sequence: 3 333 222 4444 4444 555 01 888 5555 6666 4444 22 000
    output text: 3helln world!
    */
}
