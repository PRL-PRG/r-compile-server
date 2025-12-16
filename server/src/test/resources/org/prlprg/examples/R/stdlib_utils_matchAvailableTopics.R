#? stdlib
`matchAvailableTopics` <- function (prefix, text) 
{
    .readAliases <- function(path) {
        if (file.exists(f <- file.path(path, "help", "aliases.rds"))) 
            names(readRDS(f))
        else if (file.exists(f <- file.path(path, "help", "AnIndex"))) 
            scan(f, what = list("", ""), sep = "\t", quote = "", 
                na.strings = "", quiet = TRUE)[[1L]]
        else character()
    }
    if (length(text) != 1L || text == "") 
        return(character())
    pkgpaths <- searchpaths()[startsWith(search(), "package:")]
    if (!identical(basename(pkgpaths), .CompletionEnv[["attached_packages"]])) {
        assign("attached_packages", basename(pkgpaths), envir = .CompletionEnv)
        assign("help_topics", unique(unlist(lapply(pkgpaths, 
            .readAliases))), envir = .CompletionEnv)
    }
    aliases <- .CompletionEnv[["help_topics"]]
    ans <- findMatches(sprintf("^%s", makeRegexpSafe(text)), 
        aliases)
    if (nzchar(prefix)) {
        tmp <- grep(sprintf("-%s$", prefix), ans, value = TRUE)
        if (length(tmp)) 
            substring(tmp, 1, nchar(tmp) - nchar(prefix) - 1L)
        else character(0)
    }
    else ans
}
