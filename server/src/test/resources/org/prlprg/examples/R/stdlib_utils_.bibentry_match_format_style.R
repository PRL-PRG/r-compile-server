#? stdlib
`.bibentry_match_format_style` <- function (style) 
{
    ind <- pmatch(tolower(style), tolower(bibentry_format_styles), 
        nomatch = 0L)
    if (all(ind == 0L)) 
        stop(gettextf("%s should be one of %s", sQuote("style"), 
            paste(dQuote(bibentry_format_styles), collapse = ", ")), 
            domain = NA)
    bibentry_format_styles[ind]
}
