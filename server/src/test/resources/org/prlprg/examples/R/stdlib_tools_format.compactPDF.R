#? stdlib
`format.compactPDF` <- function (x, ratio = 0.9, diff = 10000, ...) 
{
    if (!nrow(x)) 
        return(character())
    z <- y <- x[with(x, new/old < ratio & new < old - diff), 
        ]
    if (!nrow(z)) 
        return(character())
    z[] <- lapply(y, function(x) sprintf("%.0fKb", x/1024))
    large <- y$new >= 1024^2
    z[large, ] <- lapply(y[large, ], function(x) sprintf("%.1fMb", 
        x/1024^2))
    paste("  compacted", sQuote(basename(row.names(y))), "from", 
        z[, 1L], "to", z[, 2L])
}
