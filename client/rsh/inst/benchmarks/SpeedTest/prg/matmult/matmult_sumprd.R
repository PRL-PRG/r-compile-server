execute <- function(r = 2000L) {
  matmult <- function(A, B) {
    stopifnot(is.matrix(A) && is.matrix(B) && ncol(A)==nrow(B))
    
    n <- nrow(A)
    m <- ncol(B)
    k <- ncol(A)
    
    R <- matrix(numeric(0), n, m)
    
    for (i in seq_len(n))
    { for (j in seq_len(m))
        { R[i,j] <- sum(A[i,]*B[,j])
        }
    }
    R
  }
set.seed(1)

gen <- function (n) as.double(rbinom(n,1000,0.5))

A0 <- matrix(gen(1*40000),1,40000)
A1 <- matrix(gen(2*20000),2,20000)
A2 <- matrix(gen(200*200),200,200)
A3 <- matrix(gen(133*301),133,301)

B0 <- matrix(gen(40000*1),40000,1)
B1 <- matrix(gen(2*20000),20000,2)
B2 <- matrix(gen(200*200),200,200)
B3 <- matrix(gen(301*133),301,133)

R <- A3 %*% B3

V <- vector("list",r)
for (i in 1:r) V[[i]] <- matmult(A0,B0)
for (i in 1:r) V[[i]] <- matmult(A1,B1)
for (i in 1:(r/50)) V[[i]] <- matmult(A2,B2)
for (i in 1:(r/50)) V[[i]] <- matmult(A3,B3)
for (i in 1:length(V)) {if (!identical(V[[i]],R)) return(FALSE)}
  return(TRUE)
}