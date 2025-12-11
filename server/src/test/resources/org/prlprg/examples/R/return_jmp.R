#? returns(42)
f <- function() {
    g <- function(x) {
        y <- x
        return(1L)
    }
    g(return(42L))
    return(2L)
}
f()
