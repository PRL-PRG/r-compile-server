#? stdlib
`chkDots` <- function (..., which.call = -1, allowed = character(0)) 
{
    if (nx <- ...length()) 
        warning(sprintf(ngettext(nx, "In %s :\n extra argument %s will be disregarded", 
            "In %s :\n extra arguments %s will be disregarded"), 
            paste(deparse(sys.call(which.call), control = c()), 
                collapse = "\n"), paste(sQuote(...names()), collapse = ", ")), 
            call. = FALSE, domain = NA)
}

# Examples
seq.default ## <- you will see  ' chkDots(...) '

seq(1,5, foo = "bar") # gives warning via chkDots()

## warning with more than one ...-entry:
density.f <- function(x, ...) NextMethod("density")
x <- density(structure(rnorm(10), class="f"), bar=TRUE, baz=TRUE)

