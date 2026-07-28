#? stdlib
`.write_repositories` <- function (repos, file = stdout(), ...) 
{
    x <- list(...)
    n <- length(repos)
    h <- "menu_name\tURL\tdefault\tsource\twin.binary\tmac.binary"
    s <- sprintf(paste(rep.int("%s", 7L), collapse = "\t"), names(repos), 
        names(repos), repos, rep_len(x$default %||% "TRUE", n), 
        rep_len(x$source %||% "NA", n), rep_len(x$win.binary %||% 
            "NA", n), rep_len(x$mac.binary %||% "NA", n))
    writeLines(c(h, s), file)
}
