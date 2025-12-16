#? stdlib
`xpdrows.data.frame` <- function (x, old.rows, new.rows) 
{
    nc <- length(x)
    nro <- length(old.rows)
    nrn <- length(new.rows)
    nr <- nro + nrn
    for (i in seq_len(nc)) {
        y <- x[[i]]
        dy <- dim(y)
        cy <- oldClass(y)
        class(y) <- NULL
        if (length(dy) == 2L) {
            dny <- dimnames(y)
            if (length(dny[[1L]]) > 0L) 
                dny[[1L]] <- c(dny[[1L]], new.rows)
            z <- array(y[1L], dim = c(nr, nc), dimnames = dny)
            z[seq_len(nro), ] <- y
            class(z) <- cy
            x[[i]] <- z
        }
        else {
            ay <- attributes(y)
            if (length(names(y)) > 0L) 
                ay$names <- c(ay$names, new.rows)
            length(y) <- nr
            attributes(y) <- ay
            class(y) <- cy
            x[[i]] <- y
        }
    }
    nm <- c(old.rows, new.rows)
    if (any(duplicated(nm))) 
        nm <- make.unique(as.character(nm))
    attr(x, "row.names") <- nm
    x
}
