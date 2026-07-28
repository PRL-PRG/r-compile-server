#? stdlib
`bquote` <- function (expr, where = parent.frame(), splice = FALSE) 
{
    if (!is.environment(where)) 
        where <- as.environment(where)
    unquote <- function(e) {
        if (is.pairlist(e)) 
            as.pairlist(lapply(e, unquote))
        else if (is.call(e)) {
            if (is.name(e[[1L]]) && as.character(e[[1]]) == ".") 
                eval(e[[2L]], where)
            else if (splice) {
                if (is.name(e[[1L]]) && as.character(e[[1L]]) == 
                  "..") 
                  stop("can only splice inside a call", call. = FALSE)
                else as.call(unquote.list(e))
            }
            else as.call(lapply(e, unquote))
        }
        else e
    }
    is.splice.macro <- function(e) is.call(e) && is.name(e[[1L]]) && 
        as.character(e[[1L]]) == ".."
    unquote.list <- function(e) {
        p <- Position(is.splice.macro, e, nomatch = NULL)
        if (is.null(p)) 
            lapply(e, unquote)
        else {
            n <- length(e)
            head <- if (p == 1) 
                NULL
            else e[1:(p - 1)]
            tail <- if (p == n) 
                NULL
            else e[(p + 1):n]
            macro <- e[[p]]
            mexp <- eval(macro[[2L]], where)
            if (!is.vector(mexp) && !is.expression(mexp)) 
                stop("can only splice vectors")
            c(lapply(head, unquote), mexp, as.list(unquote.list(tail)))
        }
    }
    unquote(substitute(expr))
}

# Examples
require(graphics)

a <- 2

bquote(a == a)
quote(a == a)

bquote(a == .(a))
substitute(a == A, list(A = a))

plot(1:10, a*(1:10), main = bquote(a == .(a)))

## to set a function default arg
default <- 1
bquote( function(x, y = .(default)) x+y )

exprs <- expression(x <- 1, y <- 2, x + y)
bquote(function() {..(exprs)}, splice = TRUE)

