#? stdlib
`body` <- function (fun = sys.function(sys.parent())) 
{
    if (is.character(fun)) 
        fun <- get(fun, mode = "function", envir = parent.frame())
    .Internal(body(fun))
}

# Examples
body(body)
f <- function(x) x^5
body(f) <- quote(5^x)
## or equivalently  body(f) <- expression(5^x)
f(3) # = 125
body(f)

## creating a multi-expression body
e <- expression(y <- x^2, return(y)) # or a list
body(f) <- as.call(c(as.name("{"), e))
f
f(8)

## Using substitute() may be simpler than 'as.call(c(as.name("{",..)))':
stopifnot(identical(body(f), substitute({ y <- x^2; return(y) })))

