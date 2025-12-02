#include <iostream>
#include <vector>


std::vector<int> arr3_make_arry(){
    std::vector<int> arr = {1 , 5, 4};
    return arr; // vector 자체를 return 할 수 있음
}


struct Node{
    int y,x;
};


int arr3(){
    
    std::vector<int> result = arr3_make_arry();

    for(int i = 0; i < 3; i++){
        std::cout << result[i] << " " ;
    }
    std::cout << " " << std::endl;

    std::vector<std::string> arr = {"OK", "NOO"};

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            std::cout << arr[i][j] << " " ;
        }
    }
    
    std::cout << " " << std::endl;
    
    std::vector<Node> arr1 = {{1,2,},{5,6},{10,20}};

    for(int i = 0; i < arr1.size(); i++){
        std::cout << arr1[i].y << " " << arr1[i].x << std::endl;
    }
    
    std::vector<std::vector<int>> vrr(4);
    
    vrr[0] = { 1, 2, 3};
    vrr[1] = { 1, 2};
    vrr[2] = { 6 };
    vrr[3] = { 4, 5, 1, 2};
    
    for(int i = 0; i < vrr.size(); i++){
        for(int j = 0; j < vrr[i].size(); j++){
            std::cout << vrr[i][j] << " " ;
        }
    }
    
    
    


    return 0;
}
