#? stdlib
`read.ftable` <- function (file, sep = "", quote = "\"", row.var.names, col.vars, 
    skip = 0) 
{
    if (is.character(file)) {
        file <- file(file, "r")
        on.exit(close(file))
    }
    if (!inherits(file, "connection")) 
        stop("'file' must be a character string or connection")
    if (!isSeekable(file)) {
        tmpf <- tempfile()
        cat(readLines(file), file = tmpf, sep = "\n")
        file <- file(tmpf, "r")
        on.exit({
            close(file)
            unlink(tmpf)
        }, add = TRUE)
    }
    z <- count.fields(file, sep, quote, skip)
    n.row.vars <- z[max(which(z == max(z)))] - z[length(z)] + 
        1
    seek(file, where = 0)
    if (skip > 0) 
        readLines(file, skip)
    lines <- readLines(file)
    seek(file, where = 0)
    if (skip > 0) 
        readLines(file, skip)
    i <- which(z == n.row.vars)
    j <- i[grep("^[^[:space:]]", lines[i])]
    if ((length(j) == 1L) && (j > 1)) {
        n.col.vars <- j - 1
        col.vars <- vector("list", length = n.col.vars)
        n <- c(1, z[1:n.col.vars] - 1)
        for (k in seq.int(from = 1, to = n.col.vars)) {
            s <- scan(file, what = "", sep = sep, quote = quote, 
                nlines = 1, quiet = TRUE)
            col.vars[[k]] <- s[-1L]
            names(col.vars)[k] <- s[1L]
        }
        row.vars <- setNames(vector("list", length = n.row.vars), 
            scan(file, what = "", sep = sep, quote = quote, nlines = 1, 
                quiet = TRUE))
        z <- z[-(1:(n.col.vars + 1))]
    }
    else {
        if ((z[1L] == 1) && z[2L] == max(z)) {
            n.col.vars <- 1
            col.vars <- vector("list", length = n.col.vars)
            s <- scan(file, what = "", sep = sep, quote = quote, 
                nlines = 2, quiet = TRUE)
            names(col.vars) <- s[1L]
            s <- s[-1L]
            row.vars <- vector("list", length = n.row.vars)
            i <- 1:n.row.vars
            names(row.vars) <- s[i]
            col.vars[[1L]] <- s[-i]
            z <- z[-(1:2)]
        }
        else {
            if (missing(row.var.names)) {
                stop("'row.var.names' missing")
            }
            n.row.vars <- length(row.var.names)
            row.vars <- setNames(vector("list", length = n.row.vars), 
                as.character(row.var.names))
            if (missing(col.vars) || !is.list(col.vars)) {
                stop("'col.vars' missing or incorrect")
            }
            col.vars <- lapply(col.vars, as.character)
            n.col.vars <- length(col.vars)
            if (is.null(names(col.vars))) 
                names(col.vars) <- paste0("Factor.", seq_along(col.vars))
            else {
                nam <- names(col.vars)
                ind <- which(!nzchar(nam))
                names(col.vars)[ind] <- paste0("Factor.", ind)
            }
        }
    }
    p <- 1
    n <- integer(n.row.vars)
    for (k in seq.int(from = 1, to = n.row.vars)) {
        n[k] <- sum(z >= max(z) - k + 1)/p
        p <- p * n[k]
    }
    is.row.lab <- rep(rep(c(TRUE, FALSE), length(z)), c(rbind(z - 
        min(z) + 1, min(z) - 1)))
    s <- scan(file, what = "", sep = sep, quote = quote, quiet = TRUE)
    values <- as.numeric(s[!is.row.lab])
    tmp <- s[is.row.lab]
    len <- length(tmp)
    for (k in seq.int(from = 1, to = n.row.vars)) {
        i <- seq.int(from = 1, to = len, by = len/n[k])
        row.vars[[k]] <- unique(tmp[i])
        tmp <- tmp[seq.int(from = 2, to = len/n[k])]
        len <- length(tmp)
    }
    values <- matrix(values, nrow = prod(lengths(row.vars)), 
        ncol = prod(lengths(col.vars)), byrow = TRUE)
    structure(values, row.vars = row.vars, col.vars = col.vars, 
        class = "ftable")
}

# Examples
## Agresti (1990), page 157, Table 5.8.
## Not in ftable standard format, but o.k.
file <- tempfile()
cat("             Intercourse\n",
    "Race  Gender     Yes  No\n",
    "White Male        43 134\n",
    "      Female      26 149\n",
    "Black Male        29  23\n",
    "      Female      22  36\n",
    file = file)
\donttest{file.show(file)}
ft1 <- read.ftable(file)
ft1
unlink(file)

## Agresti (1990), page 297, Table 8.16.
## Almost o.k., but misses the name of the row variable.
file <- tempfile()
cat("                      \"Tonsil Size\"\n",
    "            \"Not Enl.\" \"Enl.\" \"Greatly Enl.\"\n",
    "Noncarriers       497     560           269\n",
    "Carriers           19      29            24\n",
    file = file)
\donttest{file.show(file)}
ft <- read.ftable(file, skip = 2,
                  row.var.names = "Status",
                  col.vars = list("Tonsil Size" =
                      c("Not Enl.", "Enl.", "Greatly Enl.")))
ft
unlink(file)

ft22 <- ftable(Titanic, row.vars = 2:1, col.vars = 4:3)
write.ftable(ft22, quote = FALSE) # is the same as
print(ft22)#method="non.compact" is default
print(ft22, method="row.compact")
print(ft22, method="col.compact")
print(ft22, method="compact")

## using 'justify' and 'quote' :
format(ftable(wool + tension ~ breaks, warpbreaks),
       justify = "none", quote = FALSE)

 op <- options(warn = 2) # no warnings allowed
 stopifnot(dim(format(ft)) == 4:5,
	   dim(format(ftable(UCBAdmissions))) == c(6,9))
 meths <- c("non.compact", "row.compact", "col.compact", "compact")
 dimform <-
    function(ft) sapply(meths, function(M) dim(format(ft, method = M)))
 m.eq    <- function(M,m) all.equal(unname(M), m, tolerance = 0)
 ## All format(..) w/o warnings:
 stopifnot(m.eq(print(dimform(ft22)),
		rbind(11:10, rep(7:6, each = 2))),
	   m.eq(print(dimform(ftable(Titanic, row.vars = integer()))),
		rbind(rep(6:5,2), 33)))
 options(op)


