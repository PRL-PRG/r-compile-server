#? stdlib
`.read_authors_at_R_field` <- function (x) 
{
    out <- if ((Encoding(x) == "UTF-8") && !l10n_info()$"UTF-8") {
        con <- file()
        on.exit(close(con))
        writeLines(x, con, useBytes = TRUE)
        eval(parse(con, encoding = "UTF-8"))
    }
    else {
        eval(str2expression(x))
    }
    if (!inherits(out, "person")) 
        out <- do.call(c, lapply(x, as.person))
    out
}
