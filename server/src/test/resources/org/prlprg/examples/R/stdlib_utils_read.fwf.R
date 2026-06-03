#? stdlib
`read.fwf` <- function (file, widths, header = FALSE, sep = "\t", skip = 0L, 
    row.names, col.names, n = -1L, buffersize = 2000, fileEncoding = "", 
    ...) 
{
    doone <- function(x) {
        x <- substring(x, first, last)
        x[!nzchar(x)] <- NA_character_
        x
    }
    if (is.list(widths)) {
        recordlength <- length(widths)
        widths <- do.call(c, widths)
    }
    else recordlength <- 1L
    drop <- (widths < 0L)
    cwidths <- cumsum(abs(widths))
    st <- c(1L, 1L + cwidths)
    first <- st[-length(st)][!drop]
    last <- cwidths[!drop]
    outsep <- c(rep_len(sep, length(first) - 1L), "\n")
    buffersize <- (buffersize%/%recordlength) * recordlength
    FILENAME <- tempfile("Rfwf.")
    on.exit(unlink(FILENAME))
    FILE <- file(FILENAME, "a")
    on.exit(close(FILE), add = TRUE)
    if (is.character(file)) {
        file <- if (nzchar(fileEncoding)) 
            file(file, "rt", encoding = fileEncoding)
        else file(file, "rt")
        on.exit(close(file), add = TRUE)
    }
    else if (!isOpen(file)) {
        open(file, "rt")
        on.exit(close(file), add = TRUE)
    }
    if (skip) 
        readLines(file, n = skip)
    if (header) {
        headerline <- readLines(file, n = 1L)
        cat(file = FILE, headerline, "\n")
    }
    repeat ({
        if (n == 0L) 
            break
        thisblock <- if (n == -1L) 
            buffersize
        else min(buffersize, n * recordlength)
        raw <- readLines(file, n = thisblock)
        nread <- length(raw)
        if (recordlength > 1L && nread%%recordlength) {
            raw <- raw[1L:(nread - nread%%recordlength)]
            warning(sprintf(ngettext(nread%%recordlength, "last record incomplete, %d line discarded", 
                "last record incomplete, %d lines discarded"), 
                nread%%recordlength), domain = NA)
        }
        if (recordlength > 1L) {
            raw <- matrix(raw, nrow = recordlength)
            raw <- apply(raw, 2L, paste, collapse = "")
        }
        cat(file = FILE, sapply(raw, doone, USE.NAMES = FALSE), 
            sep = outsep)
        if (nread < thisblock) 
            break
        if (n > 0L) 
            n <- n - length(raw)
    })
    close(FILE)
    FILE <- file(FILENAME, "r")
    read.table(file = FILE, header = header, sep = sep, row.names = row.names, 
        col.names = col.names, quote = "", ...)
}

# Examples
ff <- tempfile()
cat(file = ff, "123456", "987654", sep = "\n")
read.fwf(ff, widths = c(1,2,3))    #> 1 23 456 \ 9 87 654
read.fwf(ff, widths = c(1,-2,3))   #> 1 456 \ 9 654
unlink(ff)
cat(file = ff, "123", "987654", sep = "\n")
read.fwf(ff, widths = c(1,0, 2,3))    #> 1 NA 23 NA \ 9 NA 87 654
unlink(ff)
cat(file = ff, "123456", "987654", sep = "\n")
read.fwf(ff, widths = list(c(1,0, 2,3), c(2,2,2))) #> 1 NA 23 456 98 76 54
unlink(ff)

