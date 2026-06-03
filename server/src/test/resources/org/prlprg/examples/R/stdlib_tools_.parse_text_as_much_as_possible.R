#? stdlib
`.parse_text_as_much_as_possible` <- function (txt) 
{
    fun <- function(txt) {
        if (!l10n_info()$MBCS && identical(Encoding(txt), "UTF-8")) 
            parse(text = txt, encoding = "UTF-8")
        else str2expression(txt)
    }
    exprs <- tryCatch(fun(txt), error = identity)
    if (!inherits(exprs, "error")) 
        return(exprs)
    exprs <- expression()
    lines <- unlist(strsplit(txt, "\n"))
    bad_lines <- character()
    while ((n <- length(lines))) {
        i <- 1L
        txt <- lines[1L]
        while (inherits(yy <- tryCatch(fun(txt), error = identity), 
            "error") && (i < n)) {
            i <- i + 1L
            txt <- paste(txt, lines[i], collapse = "\n")
        }
        if (inherits(yy, "error")) {
            bad_lines <- c(bad_lines, lines[1L])
            lines <- lines[-1L]
        }
        else {
            exprs <- c(exprs, yy)
            lines <- lines[-seq_len(i)]
        }
    }
    attr(exprs, "bad_lines") <- bad_lines
    exprs
}
