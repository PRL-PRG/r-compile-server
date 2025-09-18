execute <- function(size=100000L){
  a <- rep(6L,100000); class(a) <- "mod12"

  `[.mod12` <- function (x,i) unclass(x)[i] %% 12L

  # Original function with arg i set to 3000 in test, seemingly unused:
  # g <- function (n,a,i){for (i in 1:n) r <- a[i]; r}
  for (i in 1:size) r <- a[i]
  return(r)
}