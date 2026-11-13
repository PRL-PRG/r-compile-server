# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-NN/k-NN.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k Nearest Neighbor - R built-in knn1 based implementation
# 
# Author: Haichuan Wang
###############################################################################
library(class) #use built-in knn

run <- function(dataset) {
    set.seed(42)
    list_train<-dataset$train_set
    train_n <- length(list_train)
    list_test<-dataset$test_set
    test_n <- length(list_test)
    clusters<- dataset$clusters
    k <- dataset$k
    
    #change list_train into matrix
    train <- t(sapply(list_train, function(item){item$val}))
    train_cl <- factor(sapply(list_train, function(item){item$label}))
    test <- t(sapply(list_test, function(item){item$val}))
    test_cl <- knn(train, test, train_cl, k)

    #the raw data
    test_labels <- attr(test_cl, "levels")
    #finally change the test data to attach the label
    out_list_test <- lapply(1:test_n, function(i){
                                 item<-list_test[[i]]
                                 item$label<- test_labels[test_cl[i]]
                                 item
                             })
    summary(test_cl)
}

# setup_k-NN.R
set.seed(42)
train_n <- 2600L
test_n <- 2600L
ncluster <- 10L
k <- 5L
#generate training
mean_shift <- rep(0:(ncluster-1), length.out = 3*train_n)
train_set <- matrix(rnorm(3*train_n, sd = ncluster/2) + mean_shift, ncol=3)
list_train_set <- lapply(1:train_n, function(i) {
            label_str <-paste('C', as.character(mean_shift[i]), sep="")
            list(val=train_set[i,], label=label_str)
        })

test_set <- matrix(runif(3*test_n, min=-ncluster, max=2*ncluster-1), ncol=3)
list_test_set <- lapply(1:test_n, function(i) {
            list(val=test_set[i,])
        })

data <- list(train_set=list_train_set,
     test_set=list_test_set,
     ncluster=ncluster,
     k=k)

#? benchmark: run(data)

# warmup
warm <- data
warm$train_set <- data$train_set[1:20]
warm$test_set <- data$test_set[1:3]
for (i in 1:12) {
  run(warm)
}
