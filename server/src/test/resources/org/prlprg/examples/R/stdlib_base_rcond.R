#? stdlib
`rcond` <- function (x, norm = c("O", "I", "1"), triangular = FALSE, uplo = "U", 
    ...) 
{
    norm <- match.arg(norm)
    stopifnot(length(d <- dim(x)) == 2L)
    if (!all(d)) 
        return(1/0)
    if (d[1L] != d[2L]) 
        return(rcond(qr.R(qr(if (d[1L] < d[2L]) t(x) else x)), 
            triangular = TRUE, uplo = "U", norm = norm, ...))
    if (is.complex(x)) {
        if (triangular) 
            switch(uplo, U = .Internal(La_ztrcon(x, norm)), L = .Internal(La_ztrcon3(x, 
                norm, "L")), stop("'uplo' must be \"U\" or \"L\""))
        else .Internal(La_zgecon(x, norm))
    }
    else {
        if (triangular) 
            switch(uplo, U = .Internal(La_dtrcon(x, norm)), L = .Internal(La_dtrcon3(x, 
                norm, "L")), stop("'uplo' must be \"U\" or \"L\""))
        else .Internal(La_dgecon(x, norm))
    }
}
