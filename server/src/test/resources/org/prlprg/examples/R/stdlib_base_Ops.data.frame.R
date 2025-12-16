#? stdlib
`Ops.data.frame` <- function (e1, e2 = NULL) 
{
    unary <- nargs() == 1L
    lclass <- nzchar(.Method[1L])
    rclass <- !unary && (nzchar(.Method[2L]))
    value <- list()
    rn <- NULL
    FUN <- get(.Generic, envir = parent.frame(), mode = "function")
    f <- if (unary) 
        quote(FUN(left))
    else quote(FUN(left, right))
    lscalar <- rscalar <- FALSE
    if (lclass && rclass) {
        nr <- .row_names_info(e1, 2L)
        if (.row_names_info(e1) > 0L) 
            rn <- attr(e1, "row.names")
        cn <- names(e1)
        if (any(dim(e2) != dim(e1))) 
            stop(gettextf("%s only defined for equally-sized data frames", 
                sQuote(.Generic)), domain = NA)
    }
    else if (lclass) {
        nr <- .row_names_info(e1, 2L)
        if (.row_names_info(e1) > 0L) 
            rn <- attr(e1, "row.names")
        cn <- names(e1)
        rscalar <- length(e2) <= 1L
        if (is.list(e2)) {
            if (rscalar) 
                e2 <- e2[[1L]]
            else if (length(e2) != ncol(e1)) 
                stop(gettextf("list of length %d not meaningful", 
                  length(e2)), domain = NA)
        }
        else {
            if (!rscalar) 
                e2 <- split(rep_len(as.vector(e2), prod(dim(e1))), 
                  rep.int(seq_len(ncol(e1)), rep.int(nrow(e1), 
                    ncol(e1))))
        }
    }
    else {
        nr <- .row_names_info(e2, 2L)
        if (.row_names_info(e2) > 0L) 
            rn <- attr(e2, "row.names")
        cn <- names(e2)
        lscalar <- length(e1) <= 1L
        if (is.list(e1)) {
            if (lscalar) 
                e1 <- e1[[1L]]
            else if (length(e1) != ncol(e2)) 
                stop(gettextf("list of length %d not meaningful", 
                  length(e1)), domain = NA)
        }
        else {
            if (!lscalar) 
                e1 <- split(rep_len(as.vector(e1), prod(dim(e2))), 
                  rep.int(seq_len(ncol(e2)), rep.int(nrow(e2), 
                    ncol(e2))))
        }
    }
    for (j in seq_along(cn)) {
        left <- if (!lscalar) 
            e1[[j]]
        else e1
        right <- if (!rscalar) 
            e2[[j]]
        else e2
        value[[j]] <- eval(f)
    }
    if (.Generic %in% c("+", "-", "*", "^", "%%", "%/%", "/")) {
        if (length(value)) {
            names(value) <- cn
            data.frame(value, row.names = rn, check.names = FALSE)
        }
        else data.frame(row.names = rn, check.names = FALSE)
    }
    else {
        value <- unlist(value, recursive = FALSE, use.names = FALSE)
        if (!length(value)) 
            matrix(logical(), nrow = nr, ncol = length(cn), dimnames = list(rn, 
                cn))
        else matrix(value, nrow = nr, dimnames = list(rn, cn))
    }
}
