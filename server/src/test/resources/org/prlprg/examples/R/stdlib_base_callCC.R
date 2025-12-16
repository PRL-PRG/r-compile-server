#? stdlib
`callCC` <- function (fun) 
{
    value <- NULL
    delayedAssign("throw", return(value))
    fun(function(v) {
        value <<- v
        throw
    })
}

# Examples
# The following all return the value 1
callCC(function(k) 1)
callCC(function(k) k(1))
callCC(function(k) {k(1); 2})
callCC(function(k) repeat k(1))

