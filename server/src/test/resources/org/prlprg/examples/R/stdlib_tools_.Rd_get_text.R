#? stdlib
`.Rd_get_text` <- function (x) 
{
    if (is.character(x)) 
        return(c(x))
    rval <- NULL
    file <- textConnection("rval", "w", local = TRUE)
    save <- options(useFancyQuotes = FALSE)
    Rdsave <- Rd2txt_options(underline_titles = FALSE)
    sink(file)
    tryCatch(Rd2txt(x, fragment = TRUE), finally = {
        sink()
        options(save)
        Rd2txt_options(Rdsave)
        close(file)
    })
    if (is.null(rval)) 
        rval <- character()
    else enc2utf8(rval)
}
