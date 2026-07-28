#? stdlib
`Sys.setLanguage` <- function (lang, unset = "en") 
{
    stopifnot(is.character(lang), length(lang) == 1L, lang == 
        "C" || grepl("^[a-z][a-z]", lang))
    curLang <- Sys.getenv("LANGUAGE", unset = NA)
    if (is.na(curLang) || !nzchar(curLang)) 
        curLang <- unset
    ok <- Sys.setenv(LANGUAGE = lang)
    if (!ok) 
        warning(gettextf("Sys.setenv(LANGUAGE=\"%s\") may have failed", 
            lang), domain = NA)
    ok. <- capabilities("NLS") && isTRUE(bindtextdomain(NULL))
    invisible(structure(curLang, ok = ok && ok.))
}
