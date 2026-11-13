# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-NN/k-NN_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k Nearest Neighbor - lapply based implementation
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    list_train<-dataset$train_set
    train_n <- length(list_train)
    list_test<-dataset$test_set
    test_n <- length(list_test)
    clusters<- dataset$clusters
    k <- dataset$k
    
    #outer loop, map function for each test
    kNN.fun <- function(test_item) {
        #calculate the distance to all 
        dists.fun <- function(train_item) {
            sum((train_item$val - test_item$val)^2)
        }
        
        dists_list <- lapply(list_train, dists.fun)
        #change to dists_vec, and do the sorting
        dists <- unlist(dists_list)
        
        mink.indices <-order(dists)
        #then should pick the first k items, find t
        train_items_indices <- mink.indices[1:k]

        train_items_category <- character(k)
        for(i in 1:k) {
          train_items_category[i] <- list_train[[train_items_indices[i]]]$label
        }
        
        #now get the their label and vote
        test_item$label <- names(which.max(table(train_items_category)))
        test_item
    }
    
    out_list_test <- lapply(list_test, kNN.fun)
    
    
    #get the cl
    test_cl <- lapply(out_list_test, function(test_item){test_item$label})
    test_cl <- factor(unlist(test_cl))
    summary(test_cl)
}

# setup_k-NN.R
set.seed(42)
train_n <- 200L
test_n <- 200L
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
