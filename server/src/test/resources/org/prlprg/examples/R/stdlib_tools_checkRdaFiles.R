#? stdlib
`checkRdaFiles` <- function (paths) 
{
    if (length(paths) == 1L && dir.exists(paths)) {
        paths <- Sys.glob(c(file.path(paths, "*.rda"), file.path(paths, 
            "*.RData")))
        paths <- paths[!endsWith(paths, "/.RData")]
    }
    res <- data.frame(size = NA_real_, ASCII = NA, compress = NA_character_, 
        version = NA_integer_, stringsAsFactors = FALSE)
    res <- res[rep_len(1L, length(paths)), ]
    row.names(res) <- paths
    keep <- file.exists(paths)
    res$size[keep] <- file.size(paths)[keep]
    for (p in paths[keep]) {
        magic <- readBin(p, "raw", n = 5)
        res[p, "compress"] <- if (all(magic[1:2] == c(31, 139))) 
            "gzip"
        else if (rawToChar(magic[1:3]) == "BZh") 
            "bzip2"
        else if (magic[1L] == 253 && rawToChar(magic[2:5]) == 
            "7zXZ") 
            "xz"
        else if (grepl("RD[ABX][1-9]", rawToChar(magic), useBytes = TRUE)) 
            "none"
        else "unknown"
        con <- gzfile(p)
        magic <- readChar(con, 5L, useBytes = TRUE)
        close(con)
        if (grepl("RD[ABX][1-9]", magic, useBytes = TRUE)) {
            res[p, "ASCII"] <- substr(magic, 3, 3) == "A"
            ver <- sub("(RD[ABX])([1-9])", "\\2", magic, useBytes = TRUE)
            res[p, "version"] <- as.integer(ver)
        }
    }
    res
}

# Examples
