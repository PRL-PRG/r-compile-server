execute <- function(unused) {
  sim <- function() {
    N <- 10000; V <- 10
    df <- data.frame(matrix(NA, N, V))
    colnames(df) <- paste("VAR", 1:V, sep="")
    for (i in 1:V) {
      if (i %% 4 == 0) df[,i] <- rnorm(N, 0.1*(i+(1:N)), 25)
      else if (i %% 4 == 1) df[,i] <- runif(N) < 0.7
      else if (i %% 4 == 2) df[,i] <- paste("xyz", rpois(N,3), sep="")
      else df[,i] <- 0.01*(1:N) + rpois(N,3)
    }
    df
  }
  
  set.seed(1)
  data <- sim()
  analyse <- function(df) {
    df2 <- df[, !sapply(df, is.character)]
    coef(lm(VAR4 ~ ., data = df2))
  }
  
  for (i in 1:150) res <- analyse(data)
  return(res)
}