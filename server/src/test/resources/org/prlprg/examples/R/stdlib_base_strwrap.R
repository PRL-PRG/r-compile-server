#? stdlib
`strwrap` <- function (x, width = 0.9 * getOption("width"), indent = 0, exdent = 0, 
    prefix = "", simplify = TRUE, initial = prefix) 
{
    if (!is.character(x)) 
        x <- as.character(x)
    indentString <- strrep(" ", indent)
    exdentString <- strrep(" ", exdent)
    y <- list()
    enc <- Encoding(x)
    x <- enc2utf8(x)
    if (any(ind <- !validEnc(x))) 
        x[ind] <- iconv(x[ind], "UTF-8", "UTF-8", sub = "byte")
    z <- lapply(strsplit(x, "\n[ \t\n]*\n", perl = TRUE), strsplit, 
        "[ \t\n]", perl = TRUE)
    for (i in seq_along(z)) {
        yi <- character()
        for (j in seq_along(z[[i]])) {
            words <- z[[i]][[j]]
            nc <- nchar(words, type = "w")
            if (anyNA(nc)) {
                nc0 <- nchar(words, type = "b")
                nc[is.na(nc)] <- nc0[is.na(nc)]
            }
            if (any(nc == 0L)) {
                zLenInd <- which(nc == 0L)
                zLenInd <- zLenInd[!(zLenInd %in% (grep("[.?!][)\"']{0,1}$", 
                  words, perl = TRUE, useBytes = TRUE) + 1L))]
                if (length(zLenInd)) {
                  words <- words[-zLenInd]
                  nc <- nc[-zLenInd]
                }
            }
            if (!length(words)) {
                yi <- c(yi, "", initial)
                next
            }
            currentIndex <- 0L
            lowerBlockIndex <- 1L
            upperBlockIndex <- integer()
            lens <- cumsum(nc + 1L)
            first <- TRUE
            maxLength <- width - nchar(initial, type = "w") - 
                indent
            while (length(lens)) {
                k <- max(sum(lens <= maxLength), 1L)
                if (first) {
                  first <- FALSE
                  maxLength <- width - nchar(prefix, type = "w") - 
                    exdent
                }
                currentIndex <- currentIndex + k
                if (nc[currentIndex] == 0L) 
                  upperBlockIndex <- c(upperBlockIndex, currentIndex - 
                    1L)
                else upperBlockIndex <- c(upperBlockIndex, currentIndex)
                if (length(lens) > k) {
                  if (nc[currentIndex + 1L] == 0L) {
                    currentIndex <- currentIndex + 1L
                    k <- k + 1L
                  }
                  lowerBlockIndex <- c(lowerBlockIndex, currentIndex + 
                    1L)
                }
                if (length(lens) > k) 
                  lens <- lens[-seq_len(k)] - lens[k]
                else lens <- NULL
            }
            nBlocks <- length(upperBlockIndex)
            s <- paste0(c(initial, rep.int(prefix, nBlocks - 
                1L)), c(indentString, rep.int(exdentString, nBlocks - 
                1L)))
            initial <- prefix
            for (k in seq_len(nBlocks)) s[k] <- paste0(s[k], 
                paste(words[lowerBlockIndex[k]:upperBlockIndex[k]], 
                  collapse = " "))
            yi <- c(yi, s, prefix)
        }
        y <- if (length(yi)) 
            c(y, list(yi[-length(yi)]))
        else c(y, "")
    }
    if (length(pos <- which(enc == "latin1"))) {
        y[pos] <- lapply(y[pos], function(s) {
            e <- Encoding(s)
            if (length(p <- which(e == "UTF-8"))) 
                s[p] <- iconv(s[p], "UTF-8", "latin1", sub = "byte")
            s
        })
    }
    if (simplify) 
        y <- as.character(unlist(y))
    y
}

# Examples
## Read in file 'THANKS'.
x <- paste(readLines(file.path(R.home("doc"), "THANKS")), collapse = "\n")
## Split into paragraphs and remove the first three ones
x <- unlist(strsplit(x, "\n[ \t\n]*\n"))[-(1:3)]
## Join the rest
x <- paste(x, collapse = "\n\n")
## Now for some fun:
writeLines(strwrap(x, width = 60))
writeLines(strwrap(x, width = 60, indent = 5))
writeLines(strwrap(x, width = 60, exdent = 5))
writeLines(strwrap(x, prefix = "THANKS> "))

## Note that messages are wrapped AT the target column indicated by
## 'width' (and not beyond it).
## From an R-devel posting by J. Hosking <jh910@juno.com>.
x <- paste(sapply(sample(10, 100, replace = TRUE),
           function(x) substring("aaaaaaaaaa", 1, x)), collapse = " ")
sapply(10:40,
       function(m)
       c(target = m, actual = max(nchar(strwrap(x, m)))))

