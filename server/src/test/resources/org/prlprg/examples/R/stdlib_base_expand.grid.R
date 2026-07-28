#? stdlib
`expand.grid` <- function (..., KEEP.OUT.ATTRS = TRUE, stringsAsFactors = TRUE) 
{
    nargs <- length(args <- list(...))
    if (!nargs) 
        return(as.data.frame(list()))
    if (nargs == 1L && is.list(a1 <- args[[1L]])) 
        nargs <- length(args <- a1)
    if (nargs == 0L) 
        return(as.data.frame(list()))
    cargs <- vector("list", nargs)
    iArgs <- seq_len(nargs)
    nmc <- paste0("Var", iArgs)
    nm <- names(args)
    if (is.null(nm)) 
        nm <- nmc
    else if (any(ng0 <- nzchar(nm))) 
        nmc[ng0] <- nm[ng0]
    names(cargs) <- nmc
    rep.fac <- 1L
    d <- lengths(args)
    if (KEEP.OUT.ATTRS) {
        dn <- vector("list", nargs)
        names(dn) <- nmc
    }
    orep <- prod(d)
    if (orep == 0L) {
        for (i in iArgs) cargs[[i]] <- args[[i]][FALSE]
    }
    else {
        for (i in iArgs) {
            x <- args[[i]]
            if (KEEP.OUT.ATTRS) 
                dn[[i]] <- paste0(nmc[i], "=", if (is.numeric(x)) 
                  format(x)
                else x)
            nx <- length(x)
            orep <- orep/nx
            if (stringsAsFactors && is.character(x)) 
                x <- factor(x, levels = unique(x))
            x <- x[rep.int(rep.int(seq_len(nx), rep.int(rep.fac, 
                nx)), orep)]
            cargs[[i]] <- x
            rep.fac <- rep.fac * nx
        }
    }
    if (KEEP.OUT.ATTRS) 
        attr(cargs, "out.attrs") <- list(dim = d, dimnames = dn)
    rn <- .set_row_names(as.integer(prod(d)))
    structure(cargs, class = "data.frame", row.names = rn)
}

# Examples
require(utils)

expand.grid(height = seq(60, 80, 5), weight = seq(100, 300, 50),
            sex = c("Male","Female"))

x <- seq(0, 10, length.out = 100)
y <- seq(-1, 1, length.out = 20)
d1 <- expand.grid(x = x, y = y)
d2 <- expand.grid(x = x, y = y, KEEP.OUT.ATTRS = FALSE)
object.size(d1) - object.size(d2)
##-> 5992 or 8832 (on 32- / 64-bit platform)
stopifnot(object.size(d1) > object.size(d2))

