#? stdlib
`.find_charset` <- function () 
{
    l10n <- l10n_info()
    enc <- if (l10n[["UTF-8"]]) 
        "UTF-8"
    else utils::localeToCharset()
    cat("charset: ", enc, "\n", sep = "")
    invisible()
}
