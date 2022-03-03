/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
    vector<int> res;
    int n = operations.size();
    stack<int> st;
    for(int i = 0; i < n; i++) {
        if(operations[i].size() > 1) {
            stringstream ss(operations[i]);
            string token;
            ss >> token; ss >> token;
            int x = stoi(token);
            if(st.empty()) {
                st.push(x);
            } else {
                st.push(max(x, st.top()));
            }
        } else {
            if(operations[i][0] - '0' == 2) {
                st.pop();
            } else {
                res.push_back(st.top());
            }
        }
    }
    return res;
}
