#? stdlib
`.rowNamesDF<-` <- function (x, make.names = FALSE, value) 
{
    if (!is.data.frame(x)) 
        x <- as.data.frame(x)
    n <- .row_names_info(x, 2L)
    if (is.null(value)) {
        attr(x, "row.names") <- .set_row_names(n)
        return(x)
    }
    if (is.object(value) || !is.integer(value)) 
        value <- as.character(value)
    if (n == 0L) {
        if (!is.null(attr(x, "row.names")) && length(value) > 
            0L) 
            stop("invalid 'row.names' length")
    }
    else if (length(value) != n) {
        if (isFALSE(make.names)) 
            stop("invalid 'row.names' length")
        else if (is.na(make.names)) {
            attr(x, "row.names") <- .set_row_names(n)
            return(x)
        }
        else if (!isTRUE(make.names)) 
            stop("invalid 'make.names'")
        else if ((nv <- length(value)) < n) 
            value <- c(value, rep_len(value[nv], n - nv))
        else value <- value[seq_len(n)]
    }
    if (anyDuplicated(value)) {
        if (isFALSE(make.names)) {
            nonuniq <- sort(unique(value[duplicated(value)]))
            warning(ngettext(length(nonuniq), sprintf("non-unique value when setting 'row.names': %s", 
                sQuote(nonuniq[1L])), sprintf("non-unique values when setting 'row.names': %s", 
                paste(sQuote(nonuniq), collapse = ", "))), domain = NA, 
                call. = FALSE)
            stop("duplicate 'row.names' are not allowed")
        }
        else if (is.na(make.names)) {
            value <- .set_row_names(if (n == 0L && is.null(.row_names_info(x, 
                0L)) && length(x) > 0L) 
                length(x[[1L]])
            else n)
        }
        else if (!isTRUE(make.names)) 
            stop("invalid 'make.names'")
        else value <- make.names(value, unique = TRUE)
    }
    else if (anyNA(value)) {
        if (isFALSE(make.names)) 
            stop("missing values in 'row.names' are not allowed")
        if (is.na(make.names)) 
            value <- .set_row_names(if (n > 0) 
                n
            else length(value))
        else if (!isTRUE(make.names)) 
            stop("invalid 'make.names'")
        else value <- make.names(value, unique = TRUE)
    }
    attr(x, "row.names") <- value
    x
}
