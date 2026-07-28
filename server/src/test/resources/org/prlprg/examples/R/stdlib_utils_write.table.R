#? stdlib
`write.table` <- function (x, file = "", append = FALSE, quote = TRUE, sep = " ", 
    eol = "\n", na = "NA", dec = ".", row.names = TRUE, col.names = TRUE, 
    qmethod = c("escape", "double"), fileEncoding = "") 
{
    qmethod <- match.arg(qmethod)
    if (is.logical(quote) && (length(quote) != 1L || is.na(quote))) 
        stop("'quote' must be 'TRUE', 'FALSE' or numeric")
    quoteC <- if (is.logical(quote)) 
        quote
    else TRUE
    qset <- is.logical(quote) && quote
    if (!is.data.frame(x) && !is.matrix(x)) 
        x <- data.frame(x)
    makeRownames <- isTRUE(row.names)
    makeColnames <- is.logical(col.names) && !identical(FALSE, 
        col.names)
    if (is.matrix(x)) {
        p <- ncol(x)
        d <- dimnames(x)
        if (is.null(d)) 
            d <- list(NULL, NULL)
        if (is.null(d[[1L]]) && makeRownames) 
            d[[1L]] <- seq_len(nrow(x))
        if (is.null(d[[2L]]) && makeColnames && p > 0L) 
            d[[2L]] <- paste0("V", 1L:p)
        if (qset) 
            quote <- if (is.character(x)) 
                seq_len(p)
            else numeric()
    }
    else {
        if (qset) 
            quote <- if (length(x)) 
                which(unlist(lapply(x, function(x) is.character(x) || 
                  is.factor(x))))
            else numeric()
        if (any(vapply(x, function(z) length(dim(z)) == 2 && 
            dim(z)[2L] > 1, NA))) {
            c1 <- names(x)
            x <- as.matrix(x, rownames.force = makeRownames)
            d <- dimnames(x)
            if (qset) {
                ord <- match(c1, d[[2L]], 0L)
                quote <- ord[quote]
                quote <- quote[quote > 0L]
            }
        }
        else d <- list(if (makeRownames) row.names(x), if (makeColnames) names(x))
        p <- ncol(x)
    }
    nocols <- p == 0L
    if (is.logical(quote)) 
        quote <- NULL
    else if (is.numeric(quote)) {
        if (any(quote < 1L | quote > p)) 
            stop("invalid numbers in 'quote'")
    }
    else stop("invalid 'quote' specification")
    rn <- FALSE
    rnames <- NULL
    if (is.logical(row.names)) {
        if (row.names) {
            rnames <- as.character(d[[1L]])
            rn <- TRUE
        }
    }
    else {
        rnames <- as.character(row.names)
        rn <- TRUE
        if (length(rnames) != nrow(x)) 
            stop("invalid 'row.names' specification")
    }
    if (!is.null(quote) && rn) 
        quote <- c(0, quote)
    if (is.logical(col.names)) {
        if (!rn && is.na(col.names)) 
            stop("'col.names = NA' makes no sense when 'row.names = FALSE'")
        col.names <- if (is.na(col.names) && rn) 
            c("", d[[2L]])
        else if (col.names) 
            d[[2L]]
        else NULL
    }
    else {
        col.names <- as.character(col.names)
        if (length(col.names) != p) 
            stop("invalid 'col.names' specification")
    }
    if (file == "") 
        file <- stdout()
    else if (is.character(file)) {
        file <- if (nzchar(fileEncoding)) 
            file(file, ifelse(append, "a", "w"), encoding = fileEncoding)
        else file(file, ifelse(append, "a", "w"))
        on.exit(close(file))
    }
    else if (!isOpen(file, "w")) {
        open(file, "w")
        on.exit(close(file))
    }
    if (!inherits(file, "connection")) 
        stop("'file' must be a character string or connection")
    qstring <- switch(qmethod, escape = "\\\"", double = "\"\"")
    if (!is.null(col.names)) {
        if (append) 
            warning("appending column names to file")
        if (quoteC) 
            col.names <- paste0("\"", gsub("\"", qstring, col.names, 
                fixed = TRUE), "\"")
        writeLines(paste(col.names, collapse = sep), file, sep = eol)
    }
    if (nrow(x) == 0L) 
        return(invisible())
    if (nocols && !rn) 
        return(cat(rep.int(eol, NROW(x)), file = file, sep = ""))
    if (is.matrix(x) && !is.atomic(x)) 
        mode(x) <- "character"
    if (is.data.frame(x)) {
        needconv <- vapply(x, function(z) is.object(z) && !is.factor(z), 
            TRUE)
        x[needconv] <- lapply(x[needconv], as.character)
    }
    invisible(.External2(C_writetable, x, file, nrow(x), p, rnames, 
        sep, eol, na, dec, as.integer(quote), qmethod != "double"))
}

# Examples
x <- data.frame(a = "a \" quote", b = pi)
tf <- tempfile(fileext = ".csv")

## To write a CSV file for input to Excel one might use
write.table(x, file = tf, sep = ",", col.names = NA,
            qmethod = "double")
file.show(tf)
## and to read this file back into R one needs
read.table(tf, header = TRUE, sep = ",", row.names = 1)
## NB: you do need to specify a separator if qmethod = "double".

### Alternatively
write.csv(x, file = tf)
read.csv(tf, row.names = 1)
## or without row names
write.csv(x, file = tf, row.names = FALSE)
read.csv(tf)


