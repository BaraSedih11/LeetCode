class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sand;
        queue<int> stu;

        int n = students.size();
        for(int i = 0 ; i < students.size() ; i++){
            stu.push(students[i]);
            sand.push(sandwiches[n-i-1]);
        }

        int x = 1000;
        while(x--){
            if(stu.size() == 0) break;
            if(stu.front() == sand.top()){
                stu.pop();
                sand.pop();
            } else {
                stu.push(stu.front());
                stu.pop();
            }
            
        }

        return stu.size();
    }
};