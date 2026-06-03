#? stdlib
`which` <- function (x, arr.ind = FALSE, useNames = TRUE) 
{
    wh <- .Internal(which(x))
    if (isTRUE(arr.ind) && !is.null(d <- dim(x))) 
        arrayInd(wh, d, dimnames(x), useNames = useNames)
    else wh
}

# Examples
which(LETTERS == "R")
which(ll <- c(TRUE, FALSE, TRUE, NA, FALSE, FALSE, TRUE)) #> 1 3 7
names(ll) <- letters[seq(ll)]
which(ll)
which((1:12)%%2 == 0) # which are even?
which(1:10 > 3, arr.ind = TRUE)

( m <- matrix(1:12, 3, 4) )
div.3 <- m %% 3 == 0
which(div.3)
which(div.3, arr.ind = TRUE)
rownames(m) <- paste("Case", 1:3, sep = "_")
which(m %% 5 == 0, arr.ind = TRUE)

dim(m) <- c(2, 2, 3); m
which(div.3, arr.ind = FALSE)
which(div.3, arr.ind = TRUE)

vm <- c(m)
dim(vm) <- length(vm) #-- funny thing with  length(dim(...)) == 1
which(div.3, arr.ind = TRUE)

dimnames(m) <- list(X = c("U", "V"), Z = c("y","z"), three = LETTERS[1:3])
wm <- which(m %% 3 == 0, arr.ind = TRUE)
vn <- vm; dimnames(vn) <- list(LETTERS[1:12])
wv <- which(vn %% 3 == 0, arr.ind = TRUE)

stopifnot(identical(wv, array(3L*(1:4), dim = c(4, 1),
                              dimnames = list(c("C", "F", "I", "L"), "dim1"))),
          identical(wm, array(c(1:2, 1:2, 2:1, 1:2, 1:3, 3L),
                              dim = 4:3,
                              dimnames = list(rep(c("U","V"),2),
                                              c("X", "Z", "three"))))
)


