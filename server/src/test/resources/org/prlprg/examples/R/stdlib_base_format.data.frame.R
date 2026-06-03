#? stdlib
`format.data.frame` <- function (x, ..., justify = "none", cut.names = TRUE) 
{
    nc <- length(x)
    if (!nc) 
        return(x)
    nr <- .row_names_info(x, 2L)
    rval <- vector("list", nc)
    for (i in seq_len(nc)) rval[[i]] <- format(x[[i]], ..., justify = justify)
    lens <- vapply(rval, NROW, 1)
    if (any(lens != nr)) {
        warning("corrupt data frame: columns will be truncated or padded with NAs")
        for (i in seq_len(nc)) {
            len <- NROW(rval[[i]])
            if (len == nr) 
                next
            rval[[i]] <- if (length(dim(rval[[i]])) == 2L) {
                if (len < nr) 
                  rbind(rval[[i]], matrix(NA, nr - len, ncol(rval[[i]])))
                else rval[[i]][seq_len(nr), ]
            }
            else {
                if (len < nr) 
                  c(rval[[i]], rep.int(NA, nr - len))
                else rval[[i]][seq_len(nr)]
            }
        }
    }
    for (i in seq_len(nc)) {
        if (is.character(rval[[i]]) && inherits(rval[[i]], "character")) 
            oldClass(rval[[i]]) <- "AsIs"
    }
    y <- as.data.frame.list(rval, row.names = seq_len(nr), col.names = names(x), 
        optional = TRUE, fix.empty.names = FALSE, cut.names = cut.names)
    attr(y, "row.names") <- row.names(x)
    y
}
