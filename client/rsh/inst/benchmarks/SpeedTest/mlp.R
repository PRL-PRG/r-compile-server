execute <- function(size = 200L) {
  mlp.forward <- function(X, q, params) {
    n <- nrow(X)
    p <- ncol(X)
    beta0 <- params[1]
    beta <- params[2:(q+1)]
    gamma0 <- params[(q+2):(2*q+1)]
    gamma0m <- matrix(gamma0,n,q,byrow=T)
    gamma <- matrix(params[(2*q+2):length(params)],p,q)
    s <- X %*% gamma + gamma0m
    h <- tanh(s)
    o <- h %*% beta + beta0
    list(s=s, h=h, o=o)
  }

  mlp.backward <- function(y, X, q, params, fw) {
    beta <- params[2:(q+1)]
    p1 <- 1/(1+exp(-fw$o))
    dl.do <- y-p1
    dl.dh <- dl.do %*% beta
    dl.ds <- (1-fw$h^2) * dl.dh
    list(dl.do=dl.do, dl.dh=dl.dh, dl.ds=dl.ds)
  }

  mlp.grad <- function(X, q, fw, bk) {
    p <- ncol(X)
    dl.dbeta0 <- sum(bk$dl.do)
    dl.dbeta <- t(fw$h) %*% bk$dl.do
    dl.dgamma0 <- apply(bk$dl.ds, 2, sum)
    dl.dgamma <- matrix(NA,p,q)
    for (j in 1:p) {
      dl.dgamma[j,] <- X[,j] %*% bk$dl.ds
    }
    c(dl.dbeta0=dl.dbeta0, dl.dbeta=dl.dbeta, dl.dgamma0=dl.dgamma0, dl.dgamma=dl.dgamma)
  }

  mlp.log.likelihood <- function(y, o) {
    sum(-log(1+exp(-(2*y-1)*o)))
  }

  mlp.train <- function(y, X, eta1, eta2, iters, q=NULL, init=NULL) {
    n <- nrow(X)
    p <- ncol(X)
    if (is.null(q)) q <- as.integer((length(init)-1)/(p+2))
    M <- (q+1) + q*(p+1)
    if (is.null(init)) init <- c(log(mean(y)/(1-mean(y))), rnorm(M-1,0,0.01))
    eta <- c(rep(eta2,q+1), rep(eta1,q*(p+1)))
    ll <- rep(NA,iters)
    params <- matrix(NA,iters,M)
    p1 <- matrix(NA,iters,n)
    current <- init
    fw <- mlp.forward(X,q,current)
    for (iter in 1:iters) {
      bk <- mlp.backward(y,X,q,current,fw)
      gr <- mlp.grad(X,q,fw,bk)
      current <- current + eta*gr
      params[iter,] <- current
      fw <- mlp.forward(X,q,current)
      p1[iter,] <- 1/(1+exp(-fw$o))
      ll[iter] <- mlp.log.likelihood(y,fw$o)
    }
    list(ll=ll, p1=p1, params=params)
  }

  set.seed(1)
  X <- matrix(rnorm(12*size), size, 12)
  y <- 1/(1 + exp(-(X[,1]-X[,2]^2-4*sin(2*X[,3]-0.3*X[,4]*X[,5]))))
  res <- mlp.train(y, X, 0.004, 0.004, 1500, 20)
  return(res$params[1500,])
}