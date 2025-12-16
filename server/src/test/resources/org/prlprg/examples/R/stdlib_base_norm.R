#? stdlib
`norm` <- function (x, type = c("O", "I", "F", "M", "2")) 
{
    if (identical("2", type)) {
        if (!length(x)) 
            0
        else if (anyNA(x)) 
            NA_real_
        else svd(x, nu = 0L, nv = 0L)$d[1L]
    }
    else if (is.numeric(x) || is.logical(x)) 
        .Internal(La_dlange(x, type))
    else if (is.complex(x)) 
        .Internal(La_zlange(x, type))
    else stop(gettextf("invalid '%s': type \"%s\"", "x", typeof(x)), 
        domain = NA)
}

# Examples
(x1 <- cbind(1, 1:10))
norm(x1)
norm(x1, "I")
norm(x1, "M")
stopifnot(all.equal(norm(x1, "F"),
                    sqrt(sum(x1^2))))

hilbert <- function(n) { i <- 1:n; 1 / outer(i - 1, i, `+`) }
h9 <- hilbert(9)
## all 5 (4 different) types of norm:
(nTyp <- eval(formals(base::norm)$type))
sapply(nTyp, norm, x = h9)
stopifnot(exprs = { # 0-extent matrices:
    sapply(nTyp, norm, x = matrix(, 1,0)) == 0
    sapply(nTyp, norm, x = matrix(, 0,0)) == 0
})

