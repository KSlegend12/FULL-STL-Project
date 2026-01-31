// FULL STL project


#include<iostream>
 #include<vector>
 #include<set>
 #include<deque>
 #include<list>
 #include<map>
 #include<queue>
 #include<stack>
 #include<numeric>
 #include<algorithm>

 using namespace std;
 int main(){
vector<int>s;
deque<int>d;
stack<int>sc;
set<int>sq;
queue<int>sb;
map<string,int>sa;
list<int>sn;
int n,m;


do{
    cout<<"0. exit program \n";
    cout<<"1. vector \n";
    cout<<"2. stack \n";
    cout<<"3. set \n";
    cout<<"4. queue \n";
    cout<<"5. map \n";
    cout<<"6. list \n";
    cout<<"7. deque \n";
    cout<<"8. algorithm \n";
    cout<<"enter the no.:- ";
    cin>>m;

    switch(m){
     case 0:
     cout<<"program exit";
     break;

     case 1:
    do{
        cout << "\n\n--- VECTOR MENU ---\n";
        cout << "1. Push Back\n";
        cout << "2. Pop Back\n";
        cout << "3. Empty Check\n";
        cout << "4. Front\n";
        cout << "5. Back\n";
        cout << "6. Size\n";
        cout << "7. At Index\n";
        cout << "8. Clear\n";
        cout << "9. Capacity\n";
        cout << "10. Swap\n";
        cout << "11. Display\n";
        cout << "0. Exit\n";

        cout << "Select option: ";
        cin >> n;
    
    switch(n){
    case 0:
        cout<<"program exited";
        break;
    case 1: {
        int x;
        cout<<"enter the no.:- ";
        cin>>x;
        s.push_back(x);
        break;
    }
    case 2:
    if(s.empty()){
        cout<<"vector is empty";
        break;
    }else{
        s.pop_back();
        break;
    }
    case 3:
        if(s.empty()){
            cout<<"vector is empty";
            break;
        }else{
            cout<<" vector is not empty";
        }
        break;

    case 4:
        if(s.empty()){
        cout<<"vector is empty";
        break;
    }else{
       cout<<"front no. is:- "<<s.front();
        break;
    }
    case 5:
        if(s.empty()){
        cout<<"vector is empty";
        break;
    }else{
        cout<<"back no.:- "<<s.back();
        break;
    }
    case 6:
       
       cout<<"the size is :- "<<s.size();
       break;
    case 7:{
       
       int d;
       cout<<"enter the index:- ";
       cin>>d;
       if(d>=0 && d<s.size()){
       cout<<s.at(d);
       }else{
        cout<<"invalid";
       }
       break;
    }
    case 8:
    
       s.clear();
       break;
    case 9:
       
       cout<<" capacity is:- "<<s.capacity();
       break;
    case 10:{
      vector<int>st={4,5,6,7};
      s.swap(st);
       break;
    }
    case 11:
      if(s.empty()){
        cout<<"empty";
        break;
      }else{
      for(auto sr:s){
        cout<<sr<<" ";
      }
      }
      break;
    default:
        cout<<"invalid no.:- ";
        break;
    }

}while(n!=0);
break;

case 2:
    do{
        cout<<"1. push operation \n";
        cout<<"2. pop operation \n";
        cout<<"3. top operation \n";
        cout<<"4. empty operation \n";
        cout<<"5. size operation \n";
        cout<<"6. display operation \n";
        cout<<"0. exist \n";
        cout<<"enter the no.:- ";
        cin>>n;

        switch(n){
            case 1:
            {
                int x;
                cout<<"enter the no.:- ";
                cin>>x;
                sc.push(x);
                break;
            }
            case 2:
            if(sc.empty()){
                cout<<"empty";
                break;
            }else{
                sc.pop();
                break;
            }
            case 3:
            if(sc.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<sc.top()<<endl;
                break;
            }
            case 4:
            if(sc.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<"not empty";
                break;
            }
            case 5:
            cout<<"the size:- "<<sc.size();
            break;

            case 6:
             if(sc.empty()){
                cout<<"empty";
                break;
            }else{
                 stack<int> temp = sc;   // copy
                cout<<"stack elements:- ";
                while(!temp.empty()){
                  cout<<temp.top()<<" ";
                   temp.pop();
                }
                break;
            }
            case 0:
            cout<<"exist program";
            break;

            default:    
            cout<<"invalid no.";
            break;
        }
    }while(n!=0);
    break;


    case 3:

    do{
        cout<<"0. exit program \n";
        cout<<"1. insert operation \n";
        cout<<"2. erase operation \n";
        cout<<"3. size operation \n";
        cout<<"4. empty operation \n";
        cout<<"5. clear operation \n";
        cout<<"6. decsending order operation \n";
        cout<<"7. display operation \n";

        cout<<"enter the no.:- ";
        cin>>n;

        switch(n){
            case 0: 
            cout<<"exit program";
            break;
            case 1:
            {
                int x;
                cout<<"enter the insert no.:- ";
                cin>>x;
                sq.insert(x);
                break;
            }
            case 2:
            {
                int m;
                cout<<"enter the no. that you want to delete:- ";
                cin>>m;
                sq.erase(m);
                break;
            }
            case 3:
            cout<<"size = "<<sq.size();
            break;
            
            case 4:
            if(sq.empty()){
                cout<<"set is empty";
                break;
            }else{
                cout<<"set is not empty";
                break;
            }
            case 5:
            if(sq.empty()){
                cout<<"set is empty";
                break;
            }else{
                sq.clear();
                break;
            }
            
            case 6:
            {
                set<int,greater<int>>t(sq.begin(),sq.end());
                for(int sr:t){
                    cout<<sr<<" ";
                }
                break;
            }
            case 7:
            if(sq.empty()){
                cout<<"set is empty";
                break;
            }else{
                for(int st:sq){
                    cout<<st<<" ";
                }
                break;
            }
            default:
            cout<<"invalid";
            break;
        }

    }while(n!=0);
    break;

    
case 4:

    do{
        cout<<"1. push operation \n";
        cout<<"2. pop operation \n";
        cout<<"3. front operation \n";
        cout<<"4. back operation \n";
        cout<<"5. empty operation \n";
        cout<<"6. size operation \n";
        cout<<"7. display operation \n";
        cout<<"0. exist \n";
        cout<<"enter the no.:- ";
        cin>>n;

        switch(n){
            case 1:
            {
                int x;
                cout<<"enter the no.:- ";
                cin>>x;
                sb.push(x);
                break;
            }
            case 2:
            if(sb.empty()){
                cout<<"empty";
                break;
            }else{
                sb.pop();
                break;
            }
            case 3:
            if(sb.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<sb.front()<<endl;
                break;
            }
            case 4:
            if(sb.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<sb.back()<<endl;
                break;
            }
            case 5:
            if(sb.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<"not empty";
                break;
            }
            case 6:
            cout<<"the size:- "<<sb.size();
            break;

            case 7:
             if(sb.empty()){
                cout<<"empty";
                break;
            }else{
                queue<int> temp = sb;   // copy
                cout<<"stack elements:- ";
                while(!temp.empty()){
                  cout<<temp.front()<<" ";
                   temp.pop();
                }
                break;
            }
            case 0:
            cout<<"exist program";
            break;

            default:    
            cout<<"invalid no.";
            break;
        }
    }while(n!=0);
    break;


    
    case 5:
    do{
        cout<<"0. exit program \n";
        cout<<"1. insert operation \n";
        cout<<"2. at operation \n";
        cout<<"3. clear operation \n";
        cout<<"4. empty operation \n";
        cout<<"5. erase operation \n";
        cout<<"6. size operation \n";
        cout<<"7. display operation \n";
        cout<<"enter the no.:- ";
        cin>>n;

        switch(n){
            case 0:
            cout<<"exit program";
            break;
            case 1:
            {
                string r;
                int e;
                cout<<"enter the string :- ";
                cin>>r;
                cout<<"enter the no.:- ";
                cin>>e;
                sa.insert({r,e});
                break;
            }
            case 2:{

            string d;
            cout<<"enter the key:- ";
            cin>>d;
            if(sa.find(d) != sa.end())
            cout<<sa.at(d);
            break;
            }

            case 3:
            if(sa.empty()){
                cout<<"map is empty";
                break;
            }else{
                sa.clear();
                break;
            }
            case 4:
              if(sa.empty()){
                cout<<"map is empty";
                break;
            }else{
                cout<<"map is not empty";
                break;
            }
            case 5:
            {
                string j;
                cout<<"enter the string that you want to delete:- ";
                cin>>j;
                sa.erase(j);
                break;
            }
            case 6:
            cout<<"size = "<<sa.size();
            break;

            case 7:
            if(sa.empty()){
                cout<<"map is empty";
                break;
            }else{
                for(auto sr:sa){
                    cout<<sr.first<<" "<<sr.second<<endl;
                }
                break;
            }
            default:
            cout<<"invalid";
            break;
        }
    }while(n!=0);
    break;

    
    case 6:
    do{
        cout<<"1. push back operation \n";
        cout<<"2. push front operation \n";
        cout<<"3. pop back operartion \n";
        cout<<"4. pop front operation \n";
        cout<<"5. empty operation \n";
        cout<<"6. size operation \n";
        cout<<"7. front operation \n";
        cout<<"8. back operation \n";
        cout<<"9. clear operation \n";
        cout<<"10. insert operation \n";
        cout<<"11. display \n";
        cout<<"0. exist \n";
        cout<<"enter the no.:- ";
        cin>>n;
        switch(n){
            case 1:
            {
                int x;
                cout<<"enter the no.:- ";
                cin>>x;
                sn.push_back(x);
                break;
            }
            case 2:
            {
                int x;
                cout<<"enter the no.:- ";
                cin>>x;
                sn.push_front(x);
                break;
            }
            case 3:
            if(sn.empty()){
                cout<<"empty";
                break;
            }else{
                sn.pop_back();
                break;
            }
            case 4:
            if(sn.empty()){
                cout<<"empty";
                break;
            }else{
                sn.pop_front();
                break;
            }
            case 5:
            if(sn.empty()){
                cout<<"list is empty";
                break;
            }else{
                cout<<"list is not empty";
                break;
            }
            case 6:
            cout<<"size is :- "<<sn.size();
            break;
            case 7:
            if(sn.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<"front is :- "<<sn.front();
                break;
            }
            case 8:
            if(sn.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<"back is :- "<<sn.back();
                break;
            }
            case 9:
            sn.clear();
            break;
            case 10:{
            int n,j;
            cout<<"enter the no.:- ";
            cin>>j;
            cout<<"enter the  index:- ";
            cin>>n;
            if(n>=0 && n<=sn.size()){
            auto it=sn.begin();
            advance(it,n);
            sn.insert(it,j);
            }else{
                cout<<"invalid";
            }
            break;
        }
            case 11:
            if(sn.empty()){
                cout<<"empty";
            }else{
            for(auto st:sn){
                cout<<st<<" ";
            }
        }
            break;
        
        default:
        cout<<"invalid no.";
        break;
    
    }
}while(n!=0);
break;

case 7:
    do{
        cout<<"0. exit operation \n";
        cout<<"1. front operation \n";
        cout<<"2. back operation \n";
        cout<<"3. push_front operation \n";
        cout<<"4. push_back operation \n";
        cout<<"5. pop_front operation \n";
        cout<<"6. pop_back operation \n";
        cout<<"7. size operation \n";
        cout<<"8. empty operation \n";
        cout<<"9. at operation \n";
        cout<<"10. display operation \n";

        cout<<"enter the no.:- ";
        cin>>n;

        switch(n){
            case 0:
            cout<<"exit program \n";
            break;

            case 1:
            if(d.empty()){
                cout<<"empty";
                break;
            }else{
               cout<<d.front();
               break;
            }

            case 2:
             if(d.empty()){
                cout<<"empty";
                break;
            }else{
               cout<<d.back();
               break;
            }

            case 3:
            {
                int x;
                cout<<"enter the no.:- ";
                cin>>x;
                d.push_front(x);
                break;
            }

            case 4:
             {
                int x;
                cout<<"enter the no.:- ";
                cin>>x;
                d.push_back(x);
                break;
            }

            case 5:
            if(d.empty()){
                cout<<"empty";
                break;
            }else{
                d.pop_front();
                break;
            }

            case 6:
            if(d.empty()){
                cout<<"empty";
                break;
            }else{
                d.pop_back();
                break;
            }

            case 7:
            cout<<"size is:- "<<d.size();
            break;

            case 8:
            if(d.empty()){
                cout<<"empty";
                break;
            }else{
                cout<<"non-empty";
                break;
            }

            case 9:
            {
                int i;
                cout<<"enter the index:- ";
                cin>>i;
                cout<<"the answer is :- "<<d.at(i);
                break;
            }

            case 10:
            if(d.empty()){
                cout<<"empty";
                break;
            }else{
                for(int i=0;i<d.size();i++){
                    cout<<d[i]<<" ";
                }
                break;
            }
            default:
            cout<<"invalid";
            break;
        }
    }while(n!=0);
    break;


    case 8:
    do {
        cout << "\n===== STL MENU =====\n";
        cout << "0. Exit\n";
        cout << "1. Sort\n";
        cout << "2. Accumulate (Sum)\n";
        cout << "3. Max Element\n";
        cout << "4. Min Element\n";
        cout << "5. Fill\n";
        cout << "6. Adjacent Find\n";
        cout << "7. Binary Search\n";
        cout << "8. Copy\n";
        cout << "9. Count\n";
        cout << "10. Find\n";
        cout << "11. Is Permutation\n";
        cout << "12. Lower Bound\n";
        cout << "13. Upper Bound\n";
        cout << "14. Merge\n";
        cout << "15. Replace\n";
        cout << "16. Reverse\n";
        cout << "17. Search (Subsequence)\n";
        cout << "18. Swap\n";
        cout << "19. Display\n";
        cout << "Enter choice: ";
        cin >> n;

        switch (n) {

        case 0:
            cout << "Program Exit\n";
            break;

        case 1:
            sort(s.begin(), s.end());
            cout << "Sorted\n";
            break;

        case 2: {
            int sum = accumulate(s.begin(), s.end(), 0);
            cout << "Sum = " << sum << endl;
            break;
        }

        case 3: {
            auto it = max_element(s.begin(), s.end());
            cout << "Max = " << *it << endl;
            break;
        }

        case 4: {
            auto it = min_element(s.begin(), s.end());
            cout << "Min = " << *it << endl;
            break;
        }

        case 5:
            fill(s.begin(), s.end(), 3);
            cout << "Filled with 3\n";
            break;

        case 6: {
            auto it = adjacent_find(s.begin(), s.end());
            if (it != s.end())
                cout << "Adjacent found: " << *it << endl;
            else
                cout << "No adjacent elements\n";
            break;
        }

        case 7:
            sort(s.begin(), s.end());
            if (binary_search(s.begin(), s.end(), 2))
                cout << "2 Found\n";
            else
                cout << "2 Not Found\n";
            break;

        case 8: {
            vector<int> t(s.size());
            copy(s.begin(), s.end(), t.begin());
            cout << "Copied vector: ";
            for (int x : t) cout << x << " ";
            cout << endl;
            break;
        }

        case 9: {
            int c = count(s.begin(), s.end(), 3);
            cout << "Count of 3 = " << c << endl;
            break;
        }

        case 10: {
            auto it = find(s.begin(), s.end(), 2);
            if (it != s.end())
                cout << "2 Found\n";
            else
                cout << "2 Not Found\n";
            break;
        }

        case 11: {
            vector<int> other = {5, 4, 3, 2, 1};
            if (is_permutation(s.begin(), s.end(), other.begin()))
                cout << "Permutation hai\n";
            else
                cout << "Permutation nahi hai\n";
            break;
        }

        case 12: {
            sort(s.begin(), s.end());
            auto lb = lower_bound(s.begin(), s.end(), 4);
            cout << "Lower Bound = " << *lb << endl;
            break;
        }

        case 13: {
            sort(s.begin(), s.end());
            auto ub = upper_bound(s.begin(), s.end(), 4);
            cout << "Upper Bound = " << *ub << endl;
            break;
        }

        case 14: {
            vector<int> numbers2 = {2, 4, 6, 8};
            sort(s.begin(), s.end());
            sort(numbers2.begin(), numbers2.end());

            vector<int> merged(s.size() + numbers2.size());
            merge(s.begin(), s.end(),
                  numbers2.begin(), numbers2.end(),
                  merged.begin());

            cout << "Merged: ";
            for (int x : merged) cout << x << " ";
            cout << endl;
            break;
        }

        case 15:
            replace(s.begin(), s.end(), 3, 4);
            cout << "3 replaced with 4\n";
            break;

        case 16:
            reverse(s.begin(), s.end());
            cout << "Reversed\n";
            break;

        case 17: {
            vector<int> target = {3, 5};
            if (search(s.begin(), s.end(), target.begin(), target.end()) != s.end())
                cout << "Sequence Found\n";
            else
                cout << "Sequence Not Found\n";
            break;
        }

        case 18: {
            int a = 10, b = 11;
            swap(a, b);
            cout << "After swap: a=" << a << " b=" << b << endl;
            break;
        }

        case 19:
            cout << "Vector: ";
            for (int x : s) cout << x << " ";
            cout << endl;
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (n != 0);

    default:
    cout<<"invalid no.";
    break;
}
}while(m!=0);
}