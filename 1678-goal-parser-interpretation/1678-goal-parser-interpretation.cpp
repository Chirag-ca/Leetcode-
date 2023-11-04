class Solution {
public:
    string interpret(string command) {
        string c;
        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'G'){
                c.push_back('G');
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    c.push_back('o');
                }
            else {
                c.push_back('a');
                c.push_back('l');
            }
            }
        }
        return c;
    }
};