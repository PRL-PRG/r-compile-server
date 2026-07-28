#? stdlib
`[[<-.data.frame` <- function (x, i, j, value) 
{
    if (!all(names(sys.call()) %in% c("", "value"))) 
        warning("named arguments are discouraged")
    cl <- oldClass(x)
    class(x) <- NULL
    nrows <- .row_names_info(x, 2L)
    if (is.atomic(value) && !is.null(names(value))) 
        names(value) <- NULL
    if (nargs() < 4L) {
        nc <- length(x)
        if (!is.null(value)) {
            N <- NROW(value)
            if (N > nrows) 
                stop(sprintf(ngettext(N, "replacement has %d row, data has %d", 
                  "replacement has %d rows, data has %d"), N, 
                  nrows), domain = NA)
            if (N < nrows) 
                if (N > 0L && (nrows%%N == 0L) && length(dim(value)) <= 
                  1L) 
                  value <- rep(value, length.out = nrows)
                else stop(sprintf(ngettext(N, "replacement has %d row, data has %d", 
                  "replacement has %d rows, data has %d"), N, 
                  nrows), domain = NA)
        }
        x[[i]] <- value
        if (length(x) > nc) {
            nc <- length(x)
            if (names(x)[nc] == "") 
                names(x)[nc] <- paste0("V", nc)
            names(x) <- make.unique(names(x))
        }
        class(x) <- cl
        return(x)
    }
    if (missing(i) || missing(j)) 
        stop("only valid calls are x[[j]] <- value or x[[i,j]] <- value")
    rows <- attr(x, "row.names")
    nvars <- length(x)
    if (n <- is.character(i)) {
        ii <- match(i, rows)
        n <- sum(new.rows <- is.na(ii))
        if (n > 0L) {
            ii[new.rows] <- seq.int(from = nrows + 1L, length.out = n)
            new.rows <- i[new.rows]
        }
        i <- ii
    }
    if (all(i >= 0L) && (nn <- max(i)) > nrows) {
        if (n == 0L) {
            nrr <- (nrows + 1L):nn
            if (inherits(value, "data.frame") && (dim(value)[1L]) >= 
                length(nrr)) {
                new.rows <- attr(value, "row.names")[seq_len(nrr)]
                repl <- duplicated(new.rows) | match(new.rows, 
                  rows, 0L)
                if (any(repl)) 
                  new.rows[repl] <- nrr[repl]
            }
            else new.rows <- nrr
        }
        x <- xpdrows.data.frame(x, rows, new.rows)
        rows <- attr(x, "row.names")
        nrows <- length(rows)
    }
    iseq <- seq_len(nrows)[i]
    if (anyNA(iseq)) 
        stop("non-existent rows not allowed")
    if (is.character(j)) {
        if ("" %in% j) 
            stop("column name \"\" cannot match any column")
        jseq <- match(j, names(x))
        if (anyNA(jseq)) 
            stop(gettextf("replacing element in non-existent column: %s", 
                j[is.na(jseq)]), domain = NA)
    }
    else if (is.logical(j) || min(j) < 0L) 
        jseq <- seq_along(x)[j]
    else {
        jseq <- j
        if (max(jseq) > nvars) 
            stop(gettextf("replacing element in non-existent column: %s", 
                jseq[jseq > nvars]), domain = NA)
    }
    if (length(iseq) > 1L || length(jseq) > 1L) 
        stop("only a single element should be replaced")
    x[[jseq]][[iseq]] <- value
    class(x) <- cl
    x
}
