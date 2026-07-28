#? stdlib
`vignette_type` <- function (file) 
{
    ext <- tolower(file_ext(file))
    type <- c(pdf = "PDF", html = "HTML")[ext]
    if (is.na(type)) 
        stop(gettextf("Vignette product %s does not have a known filename extension (%s)", 
            sQuote(file), paste(sQuote(names(type)), collapse = ", ")), 
            domain = NA)
    unname(type)
}
