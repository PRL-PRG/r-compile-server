#? stdlib
`as.hclust` <- function (x, ...) 
UseMethod("as.hclust")

# Examples
x <- matrix(rnorm(30), ncol = 3)
hc <- hclust(dist(x), method = "complete")

\donttest{if(require("cluster", quietly = TRUE)) {# is a recommended package
  ag <- agnes(x, method = "complete")
  hcag <- as.hclust(ag)
  ## The dendrograms order slightly differently:
  op <- par(mfrow = c(1,2))
  plot(hc) ;  mtext("hclust", side = 1)
  plot(hcag); mtext("agnes",  side = 1)
  detach("package:cluster")
}}

