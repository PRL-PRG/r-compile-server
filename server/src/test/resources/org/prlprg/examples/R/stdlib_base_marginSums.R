#? stdlib
`marginSums` <- function (x, margin = NULL) 
{
    if (!is.array(x)) 
        if (is.numeric(x)) 
            dim(x) <- length(x)
        else stop("'x' is not an array")
    if (length(margin)) {
        z <- apply(x, margin, sum)
        if (!is.array(z)) {
            if (is.character(margin)) 
                margin <- match(margin, names(dimnames(x)))
            dim(z) <- dim(x)[margin]
            dimnames(z) <- dimnames(x)[margin]
        }
        class(z) <- oldClass(x)
        z
    }
    else sum(x)
}

# Examples
m <- matrix(1:4, 2)
marginSums(m, 1)  # = rowSums(m)
marginSums(m, 2)  # = colSums(m)

DF <- as.data.frame(UCBAdmissions)
tbl <- xtabs(Freq ~ Gender + Admit, DF)
tbl
marginSums(tbl, "Gender")  # a 1-dim "table"
rowSums(tbl)               # a numeric vector

