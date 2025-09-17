execute <- function(size = 10L) {
  sim <- function() {
    N <- size*1000; out <- list()
    df <- data.frame(matrix(NA, N, size))
    colnames(df) <- paste("VAR", 1:size, sep="")
    for (i in 1:size) {
      if (i %% 4 == 0) df[,i] <- rnorm(N, 0.1*(i+(1:N)), 25)
      else if (i %% 4 == 1) df[,i] <- runif(N) < 0.7
      else if (i %% 4 == 2) df[,i] <- paste("xyz", rpois(N,3), sep="")
      else df[,i] <- 0.01*(1:N) + rpois(N,3)
    }
    df
  }

  analyse <- function(df,pr=FALSE) {
    s <- summary(df)
    if (pr) c(out, s)
    df2 <- df[,!sapply(df,is.character)]
    m <- lm (VAR4 ~ ., data = df2)
    if (pr) c(out, m)
    sm <- summary(m)
    if (pr) c(out, sm)
    coef(m)
  }

  set.seed(1)
  out <- list()
  test_data_file <- tempfile()
  for (i in 1:50) data <- sim()
  for (i in 1:25) write.table(data,test_data_file,quote=FALSE)
  for (i in 1:50) rdata <- read.table(test_data_file,head=TRUE,stringsAsFactors=FALSE)
  for (i in 1:150) res <- analyse(rdata)
  analyse(rdata,TRUE)
  
  unlink(test_data_file)
  list(out, res)
}