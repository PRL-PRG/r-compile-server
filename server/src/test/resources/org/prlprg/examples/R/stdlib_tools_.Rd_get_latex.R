#? stdlib
`.Rd_get_latex` <- function (x) 
{
    tf <- tempfile()
    save <- options(useFancyQuotes = FALSE)
    on.exit({
        options(save)
        unlink(tf)
    })
    tryCatch(Rd2latex(x, tf, fragment = TRUE, outputEncoding = "UTF-8"), 
        error = function(e) return(character()))
    enc2utf8(readLines(tf, warn = FALSE, encoding = "UTF-8"))
}
