long minTime (vector<int> batchSize, vector<int> processingTime, vector <int> numTasks) {

    long n=batchSize.size();
    long total_time=0;
    int i=0,j;
    vector<long> total;

    for (i=0;i<n;i++)
    {
        total.push_back(ceil(numTasks[i]/batchSize[i]) *processingTime[i]); // since the tasks are asynchronous we can start all at the same time and 
                                                                            // keep on pushing the total processing time taken at each task to be completed
    }
    
    total_time = *max_element(total.begin(), total.end());  // finds maximum element out of the vector total
    return total_time;
}
