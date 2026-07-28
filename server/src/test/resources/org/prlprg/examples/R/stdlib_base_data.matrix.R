#? stdlib
`data.matrix` <- function (frame, rownames.force = NA) 
{
    if (!is.data.frame(frame)) 
        return(as.matrix(frame))
    d <- dim(frame)
    rn <- if (isFALSE(rownames.force)) 
        NULL
    else if (isTRUE(rownames.force)) 
        row.names(frame)
    else if (.row_names_info(frame) <= 0L) 
        NULL
    else row.names(frame)
    for (i in seq_len(d[2L])) {
        xi <- frame[[i]]
        if (is.integer(xi) || is.numeric(xi)) 
            next
        if (is.logical(xi) || is.factor(xi)) {
            frame[[i]] <- as.integer(xi)
            next
        }
        if (is.character(xi)) {
            frame[[i]] <- as.integer(factor(xi))
            next
        }
        frame[[i]] <- if (isS4(xi)) 
            methods::as(xi, "numeric")
        else as.numeric(xi)
    }
    intOK <- all(unlist(lapply(frame, is.integer)))
    x <- matrix(if (intOK) 
        NA_integer_
    else NA_real_, nrow = d[1L], ncol = d[2L], dimnames = list(rn, 
        names(frame)))
    for (i in seq_len(d[2L])) x[, i] <- frame[[i]]
    x
}

# Examples
DF <- data.frame(a = 1:3, b = letters[10:12],
                 c = seq(as.Date("2004-01-01"), by = "week", length.out = 3),
                 stringsAsFactors = TRUE)
data.matrix(DF[1:2])
data.matrix(DF)

