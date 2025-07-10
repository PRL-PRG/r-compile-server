execute <- function(size = 25L) {
  lm.nn <- function(x.train, y.train, x.test, K = length(y.train), lambda = 0) {
    if (K > length(y.train)) K <- length(y.train)
    
    x.train <- cbind(1, as.matrix(x.train))
    x.test <- cbind(1, as.matrix(x.test))
    
    if (is.finite(lambda)) {
      Istar <- diag(ncol(x.train)) 
      Istar[1,1] <- 0
      S <- lambda*Istar + t(x.train)%*%x.train
      b <- as.vector(solve(S) %*% t(x.train) %*% y.train)
    } else {
      b <- c(mean(y.train), rep(0, ncol(x.train)-1))
    }
    
    r <- y.train - x.train %*% b
    yp <- numeric(nrow(x.test))
    
    for (i in 1:nrow(x.test)) {
      x <- x.test[i,]
      dsq <- colSums((t(x.train) - x)^2)
      nn <- order(dsq)[1:K]
      lmp <- x %*% b
      yp[i] <- lmp + mean(r[nn])
    }
    yp
  }

  lm.nn.cross.val <- function(x.train, y.train, S, try.K, try.lambda) {
    n <- length(y.train)
    m <- round((0:S)*n/S)
    Vsum <- NULL
    
    for (h in 1:S) {
      val.ix <- (m[h]+1):m[h+1]
      V <- matrix(NA, length(try.K), length(try.lambda))
      
      for (i in 1:length(try.K)) {
        for (j in 1:length(try.lambda)) {
          yp <- lm.nn(x.train[-val.ix,], y.train[-val.ix], 
                      x.train[val.ix,,drop=FALSE],
                      K = try.K[i], lambda = try.lambda[j])
          V[i,j] <- mean((y.train[val.ix] - yp)^2)
        }
      }
      Vsum <- if (is.null(Vsum)) V else Vsum + V
    }
    
    V <- Vsum / S
    best.err <- Inf
    
    for (i in 1:length(try.K)) {
      for (j in 1:length(try.lambda)) {
        if (V[i,j] < best.err) {
          best.K <- try.K[i]
          best.lambda <- try.lambda[j]
          best.err <- V[i,j]
        }
      }
    }
    list(K = best.K, lambda = best.lambda, rms = sqrt(best.err))
  }

  # Fixed dataset (same as original)
  trn <- matrix(c(
    0.880502, 0.184882, 1.028223, 0.702374, 0.972312, 0.573326,
    0.909021, 0.168052, 0.95079, 0.943839, 0.887451, 0.943475,
    0.839248, 0.129159, 1.043134, 0.833449, 0.973279, 0.468019,
    0.961081, 0.549984, 0.949531, 0.552674, 0.91663, 0.238895,
    0.990195, 0.760513, 0.896209, 0.18082, 0.938033, 0.405282,
    0.990347, 0.853548, 0.925798, 0.976398, 0.842838, 0.225825,
    0.983122, 0.444809, 0.815483, 0.074979, 1.008201, 0.661899,
    0.899325, 0.38755, 0.958679, 0.836889, 0.815854, 0.150501,
    0.965061, 0.347272, 0.955632, 0.488773, 0.869407, 0.149247,
    0.932092, 0.357063, 0.979991, 0.962644, 0.845821, 0.132372,
    0.865177, 0.010415, 0.837018, 0.164642, 1.056621, 0.810192,
    1.027535, 0.868861, 0.958395, 0.514282, 1.006573, 0.627196,
    0.966963, 0.844429, 0.926343, 0.284871, 0.951499, 0.667226,
    0.816952, 0.15047, 0.966922, 0.981728, 0.96647, 0.297011,
    0.890256, 0.115084, 0.888619, 0.163201, 0.940952, 0.944042,
    1.032706, 0.794864, 0.950564, 0.974688, 0.902847, 0.349088,
    0.947514, 0.50197, 1.032153, 0.810397), ncol = 2, byrow = TRUE)
  
  x.train <- as.matrix(trn[,-1])
  y.train <- as.vector(trn[,1])
  
  # Parameter options (same as original)
  try.K <- c(1,2,3,4,5,8,11,16,21,32,Inf)
  try.lambda <- c(0,0.003,0.1,0.3,1,3,10,30,100,300,1000,3000,Inf)
  
  # Run cross-validation with size controlling S (number of folds)
  result <- lm.nn.cross.val(x.train, y.train, size, try.K, try.lambda)
  return(result)
}