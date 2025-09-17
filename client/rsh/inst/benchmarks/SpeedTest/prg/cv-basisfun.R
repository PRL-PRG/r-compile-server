execute <- function(reps = 10L) {
  Phi <- function(xv, s) {
    m <- seq(-2*s, 1+2*s, by=s)
    Phi <- matrix(1, length(xv), length(m)+1)
    for (j in 1:length(m)) {
      Phi[,1+j] <- exp(-0.5*(xv-m[j])^2/s^2)
    }
    Phi
  }

  penalized.least.squares <- function(Phi, tv, lambda=0) {
    S <- diag(ncol(Phi)) 
    S[1,1] <- 0
    as.vector(solve(lambda*S + t(Phi)%*%Phi) %*% t(Phi) %*% tv)
  }

  predictions <- function(Phi, w) {
    as.vector(Phi %*% w)
  }

  validation.error <- function(xv, tv, s, lambda, vix) { 
    w <- penalized.least.squares(Phi(xv[-vix],s), tv[-vix], lambda)
    p <- predictions(Phi(xv[vix],s), w)
    mean((tv[vix]-p)^2)
  }

  val.array <- function(xv, tv, try.s, try.lambda, vix) {
    V <- matrix(NA, length(try.s), length(try.lambda))
    rownames(V) <- paste("s=",try.s,sep="")
    colnames(V) <- paste("lambda=",try.lambda,sep="")

    for (i in 1:length(try.s)) {
      for (j in 1:length(try.lambda)) {
        V[i,j] <- validation.error(xv, tv, try.s[i], try.lambda[j], vix)
      }
    }
    V
  }

  cross.val.array <- function(xv, tv, try.s, try.lambda, S) {
    n <- length(tv)
    for (r in 1:S) {
      vix <- floor(1 + n*(r-1)/S) : floor(n*r/S)
      V <- val.array(xv, tv, try.s, try.lambda, vix)
      V.sum <- if (r==1) V else V.sum + V
    }
    V.sum / S
  }

  set.seed(2)
  xt <- runif(50)
  tt <- sin(1+xt^2) + rnorm(50, 0, 0.03)
  try.lambda <- c(0.001,0.01,0.1,1,10)
  try.s <- c(0.02,0.1,0.5,2.5)

  for (i in 1:reps) r <- round(sqrt(cross.val.array(xt,tt,try.s,try.lambda,5)),4)
  return(r)
}