#? stdlib
`noquote` <- function (obj, right = FALSE) 
{
    if (!inherits(obj, "noquote")) 
        class(obj) <- c(attr(obj, "class"), if (right) c(right = "noquote") else "noquote")
    obj
}

# Examples
letters
nql <- noquote(letters)
nql
nql[1:4] <- "oh"
nql[1:12]

cmp.logical <- function(log.v)
{
  ## Purpose: compact printing of logicals
  log.v <- as.logical(log.v)
  noquote(if(length(log.v) == 0)"()" else c(".","|")[1 + log.v])
}
cmp.logical(stats::runif(20) > 0.8)

chmat <- as.matrix(format(stackloss)) # a "typical" character matrix
## noquote(*, right=TRUE)  so it prints exactly like a data frame
chmat <- noquote(chmat, right = TRUE)
chmat

stopifnot(identical(
   capture.output(stackloss),
   capture.output(chmat)))


