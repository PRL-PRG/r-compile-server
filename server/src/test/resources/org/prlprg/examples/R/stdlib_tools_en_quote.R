#? stdlib
`en_quote` <- function (potfile, outfile) 
{
    tfile <- tempfile()
    cmd <- paste("msginit -i", potfile, "--no-translator -l en -o", 
        tfile)
    if (system(cmd, ignore.stderr = TRUE) != 0L) 
        stop("running msginit failed", domain = NA)
    tfile2 <- tempfile()
    cmd <- paste("msgconv -t UTF-8 -o", tfile2, tfile)
    if (system(cmd) != 0L) 
        stop("running msgconv failed", domain = NA)
    lines <- readLines(tfile2)
    starts <- which(startsWith(lines, "msgstr"))
    current <- 1L
    out <- character()
    for (s in starts) {
        if (current < s) 
            out <- c(out, lines[seq.int(current, s - 1L, 1L)])
        start <- sub("([^\"]*)\"(.*)\"$", "\\1", lines[s])
        this <- sub("([^\"]*)\"(.*)\"$", "\\2", lines[s])
        current <- s + 1L
        while (!is.na(line <- lines[current]) && startsWith(line, 
            "\"")) {
            this <- c(this, sub("^\"(.*)\"$", "\\1", line))
            current <- current + 1L
        }
        nc <- nchar(this)
        n <- length(nc)
        this <- paste0(this, collapse = "")
        this <- gsub("^'([^`']*)'", "‘\\1’", this)
        this <- gsub("([^[:alpha:]]|\\\\n)'([^`']*)'", "\\1‘\\2’", 
            this)
        out <- if (n > 1L) {
            this1 <- character()
            sc <- c(0, cumsum(nc))
            for (i in seq_along(nc)) {
                if (!nc[i]) 
                  this1 <- c(this1, "")
                else {
                  this1 <- c(this1, substr(this, sc[i] + 1L, 
                    sc[i + 1]))
                }
            }
            c(out, paste0(start, "\"", this1[1L], "\""), paste0("\"", 
                this1[-1L], "\""))
        }
        else c(out, paste0(start, "\"", this, "\""))
    }
    if (current <= length(lines)) 
        out <- c(out, lines[seq.int(current, length(lines), 1L)])
    con <- file(outfile, "wb")
    writeLines(out, con, useBytes = TRUE)
    close(con)
}
