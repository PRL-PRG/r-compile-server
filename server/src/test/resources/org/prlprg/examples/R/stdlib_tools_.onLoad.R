#? stdlib
`.onLoad` <- function (libname, pkgname) 
{
    if (.Platform$OS.type == "windows") {
        cp <- l10n_info()$codepage
        if (cp > 0 && (cp == 874L || (cp >= 1250L && cp <= 1258L))) 
            Rd2txt_options(itemBullet = "• ")
    }
    else if (!is.na(iconv("•", "UTF-8", ""))) 
        Rd2txt_options(itemBullet = "• ")
}
