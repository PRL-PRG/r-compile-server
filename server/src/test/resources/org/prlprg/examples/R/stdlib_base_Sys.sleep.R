#? stdlib
`Sys.sleep` <- function (time) 
.Internal(Sys.sleep(time))

# Examples\donttest{
testit <- function(x)
{
    p1 <- proc.time()
    Sys.sleep(x)
    proc.time() - p1 # The cpu usage should be negligible
}
testit(3.7)
}
