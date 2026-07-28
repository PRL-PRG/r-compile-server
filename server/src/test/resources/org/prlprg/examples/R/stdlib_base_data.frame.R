#? stdlib
`data.frame` <- function (..., row.names = NULL, check.rows = FALSE, check.names = TRUE, 
    fix.empty.names = TRUE, stringsAsFactors = FALSE) 
{
    data.row.names <- if (check.rows && is.null(row.names)) 
        function(current, new, i) {
            if (is.character(current)) 
                new <- as.character(new)
            if (is.character(new)) 
                current <- as.character(current)
            if (anyDuplicated(new)) 
                return(current)
            if (is.null(current)) 
                return(new)
            if (all(current == new) || all(current == "")) 
                return(new)
            stop(gettextf("mismatch of row names in arguments of 'data.frame', item %d", 
                i), domain = NA)
        }
    else function(current, new, i) {
        current %||% if (anyDuplicated(new)) {
            warning(gettextf("some row.names duplicated: %s --> row.names NOT used", 
                paste(which(duplicated(new)), collapse = ",")), 
                domain = NA)
            current
        }
        else new
    }
    object <- as.list(substitute(list(...)))[-1L]
    mirn <- missing(row.names)
    mrn <- is.null(row.names)
    x <- list(...)
    n <- length(x)
    if (n < 1L) {
        if (!mrn) {
            if (is.object(row.names) || !is.integer(row.names)) 
                row.names <- as.character(row.names)
            if (anyNA(row.names)) 
                stop("row names contain missing values")
            if (anyDuplicated(row.names)) 
                stop(gettextf("duplicate row.names: %s", paste(unique(row.names[duplicated(row.names)]), 
                  collapse = ", ")), domain = NA)
        }
        else row.names <- integer()
        return(structure(list(), names = character(), row.names = row.names, 
            class = "data.frame"))
    }
    vnames <- names(x)
    if (length(vnames) != n) 
        vnames <- character(n)
    no.vn <- !nzchar(vnames)
    vlist <- vnames <- as.list(vnames)
    nrows <- ncols <- integer(n)
    for (i in seq_len(n)) {
        xi <- if (is.character(x[[i]]) || is.list(x[[i]])) 
            as.data.frame(x[[i]], optional = TRUE, stringsAsFactors = stringsAsFactors)
        else as.data.frame(x[[i]], optional = TRUE)
        nrows[i] <- .row_names_info(xi)
        ncols[i] <- length(xi)
        namesi <- names(xi)
        if (ncols[i] > 1L) {
            if (length(namesi) == 0L) 
                namesi <- seq_len(ncols[i])
            vnames[[i]] <- if (no.vn[i]) 
                namesi
            else paste(vnames[[i]], namesi, sep = ".")
        }
        else if (length(namesi)) {
            vnames[[i]] <- namesi
        }
        else if (fix.empty.names && no.vn[[i]]) {
            tmpname <- deparse(object[[i]], nlines = 1L)[1L]
            if (startsWith(tmpname, "I(") && endsWith(tmpname, 
                ")")) {
                ntmpn <- nchar(tmpname, "c")
                tmpname <- substr(tmpname, 3L, ntmpn - 1L)
            }
            vnames[[i]] <- tmpname
        }
        if (mirn && nrows[i] > 0L) {
            rowsi <- attr(xi, "row.names")
            if (any(nzchar(rowsi))) 
                row.names <- data.row.names(row.names, rowsi, 
                  i)
        }
        nrows[i] <- abs(nrows[i])
        vlist[[i]] <- xi
    }
    nr <- max(nrows)
    for (i in seq_len(n)[nrows < nr]) {
        xi <- vlist[[i]]
        if (nrows[i] > 0L && (nr%%nrows[i] == 0L)) {
            xi <- unclass(xi)
            fixed <- TRUE
            for (j in seq_along(xi)) {
                xi1 <- xi[[j]]
                if (is.vector(xi1) || is.factor(xi1)) 
                  xi[[j]] <- rep(xi1, length.out = nr)
                else if (is.character(xi1) && inherits(xi1, "AsIs")) 
                  xi[[j]] <- structure(rep(xi1, length.out = nr), 
                    class = class(xi1))
                else if (inherits(xi1, "Date") || inherits(xi1, 
                  "POSIXct")) 
                  xi[[j]] <- rep(xi1, length.out = nr)
                else {
                  fixed <- FALSE
                  break
                }
            }
            if (fixed) {
                vlist[[i]] <- xi
                next
            }
        }
        stop(gettextf("arguments imply differing number of rows: %s", 
            paste(unique(nrows), collapse = ", ")), domain = NA)
    }
    value <- unlist(vlist, recursive = FALSE, use.names = FALSE)
    vnames <- as.character(unlist(vnames[ncols > 0L]))
    if (fix.empty.names && any(noname <- !nzchar(vnames))) 
        vnames[noname] <- paste0("Var.", seq_along(vnames))[noname]
    if (check.names) {
        if (fix.empty.names) 
            vnames <- make.names(vnames, unique = TRUE)
        else {
            nz <- nzchar(vnames)
            vnames[nz] <- make.names(vnames[nz], unique = TRUE)
        }
    }
    names(value) <- vnames
    if (!mrn) {
        if (length(row.names) == 1L && nr != 1L) {
            if (is.character(row.names)) 
                row.names <- match(row.names, vnames, 0L)
            if (length(row.names) != 1L || row.names < 1L || 
                row.names > length(vnames)) 
                stop("'row.names' should specify one of the variables")
            i <- row.names
            row.names <- value[[i]]
            value <- value[-i]
        }
        else if (!is.null(row.names) && length(row.names) != 
            nr) 
            stop("row names supplied are of the wrong length")
    }
    else if (!is.null(row.names) && length(row.names) != nr) {
        warning("row names were found from a short variable and have been discarded")
        row.names <- NULL
    }
    class(value) <- "data.frame"
    if (is.null(row.names)) 
        attr(value, "row.names") <- .set_row_names(nr)
    else {
        if (is.object(row.names) || !is.integer(row.names)) 
            row.names <- as.character(row.names)
        if (anyNA(row.names)) 
            stop("row names contain missing values")
        if (anyDuplicated(row.names)) 
            stop(gettextf("duplicate row.names: %s", paste(unique(row.names[duplicated(row.names)]), 
                collapse = ", ")), domain = NA)
        row.names(value) <- row.names
    }
    value
}

# Examples
L3 <- LETTERS[1:3]
char <- sample(L3, 10, replace = TRUE)
(d <- data.frame(x = 1, y = 1:10, char = char))
## The "same" with automatic column names:
data.frame(1, 1:10, sample(L3, 10, replace = TRUE))

is.data.frame(d)

## enable automatic conversion of character arguments to factor columns:
(dd <- data.frame(d, fac = letters[1:10], stringsAsFactors = TRUE))
rbind(class = sapply(dd, class), mode = sapply(dd, mode))

stopifnot(1:10 == row.names(d))  # {coercion}

(d0  <- d[, FALSE])   # data frame with 0 columns and 10 rows
(d.0 <- d[FALSE, ])   # <0 rows> data frame  (3 named cols)
(d00 <- d0[FALSE, ])  # data frame with 0 columns and 0 rows

