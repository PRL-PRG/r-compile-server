#? stdlib
`file_path_relative_to` <- function (x, start = getwd(), parent = TRUE) 
{
    x <- normalizePath(x, "/", mustWork = FALSE)
    if (!parent) {
        p <- normalizePath(start[1L], "/", mustWork = TRUE)
        if (any(i <- startsWith(x, p))) {
            x[i] <- substring(x[i], nchar(p) + 2L)
        }
        x
    }
    else {
        p <- strsplit(normalizePath(start, "/", mustWork = FALSE), 
            "/", fixed = TRUE)[[1L]]
        y <- strsplit(x, "/", fixed = TRUE)
        f <- function(u, v) {
            i <- 1L
            while (i <= min(length(v), length(p))) {
                if (v[i] == p[i]) 
                  i <- i + 1L
                else break
            }
            if (i == 1L) {
                u
            }
            else {
                i <- i - 1L
                paste(c(rep_len("..", length(p) - i), v[-seq_len(i)]), 
                  collapse = .Platform$file.sep)
            }
        }
        unlist(Map(f, x, y, USE.NAMES = FALSE))
    }
}
