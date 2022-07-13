//
// Created by Administrator on 2022/7/13 0013.
//

#ifndef MY_CPP_STD_LOGISTICREGRESSION_H
#define MY_CPP_STD_LOGISTICREGRESSION_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <assert.h>
//https://blog.csdn.net/qrqpjxq/article/details/77414898
struct DataSet {
    int numData;
    int numFeature;
    std::vector<std::vector<float>> features;
    std::vector<int> labels;
};


class LR{
public:
    LR(int max_iter,  float learning_rate, float tol);;
    ~LR();
    DataSet loadData(std::string filename);

    std::vector<float> oneSampleGridient(std::vector<float> feature, int label);
    void train(DataSet* dataset, std::string gdType);
    std::vector<float> getWeight();
    int predict_prob(std::vector<float> feature);
    float score(DataSet* dataset);

private:
    int maxIter_;
    float learnRate_;
    float tol_;
    std::vector<float> weights;
};





#endif //MY_CPP_STD_LOGISTICREGRESSION_H
