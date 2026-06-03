#? stdlib
`createRedirects` <- function (file, Rdobj) 
{
    linksToTopics <- config_val_to_logical(Sys.getenv("_R_HELP_LINKS_TO_TOPICS_", 
        "TRUE"))
    if (!linksToTopics) 
        return(invisible())
    redirHTML <- sprintf("<!DOCTYPE html>\n<html><head><meta http-equiv='refresh' content='0; url=../html/%s'><title>HTTP redirect</title></head><body></body></html>\n", 
        urlify(basename(file), reserved = TRUE))
    toProcess <- which(RdTags(Rdobj) == "\\alias")
    helpdir <- paste0(dirname(dirname(file)), "/help")
    aliasName <- function(i) trimws(Rdobj[[i]][[1]])
    aliasFile <- function(i) file.path(helpdir, sprintf("%s.html", 
        topic2filename(aliasName(i))))
    redirMsg <- function(type, src, dest, status) {
        msg <- sprintf("\nREDIRECT:%s\t %s -> %s [ %s ]", type, 
            src, dest, status)
        message(msg, appendLF = FALSE)
    }
    aliasesToProcess <- vapply(toProcess, aliasName, "")
    toProcess <- toProcess[!duplicated(aliasesToProcess)]
    for (i in toProcess) {
        aname <- aliasName(i)
        afile <- aliasFile(i)
        if (file.exists(afile)) {
            msg <- sprintf("\nREDIRECT:topic\t Previous alias or file overwritten by alias: %s", 
                afile)
            message(msg, appendLF = FALSE)
        }
        try(suppressWarnings(cat(redirHTML, file = afile)), silent = TRUE)
        if (!file.exists(afile)) 
            redirMsg("topic", aname, basename(file), "FAILURE")
    }
    file.fallback <- file.path(helpdir, basename(file))
    if (!file.exists(file.fallback)) {
        try(cat(redirHTML, file = file.fallback), silent = TRUE)
        if (!file.exists(file.fallback)) 
            redirMsg("file", basename(file), basename(file), 
                "FAILURE")
    }
}
