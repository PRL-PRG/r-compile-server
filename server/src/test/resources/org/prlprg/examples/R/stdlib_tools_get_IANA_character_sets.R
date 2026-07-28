#? stdlib
`get_IANA_character_sets` <- function (file = NULL) 
{
    if (is.null(file)) 
        file <- file.path(R.home("share"), "encodings", "character-sets")
    lines <- readLines(file)
    spos <- min(which(startsWith(lines, "Name:")))
    epos <- min(which(startsWith(lines, "REFERENCES"))) - 1
    lines <- lines[spos:epos]
    if (any(ind <- grep("^[[:alnum:]]+:[[:space:]]+None[[:space:]]*$", 
        lines))) 
        lines <- lines[-ind]
    if (any(ind <- grep("^[^[:blank:]][^:]*$", lines))) 
        lines <- lines[-ind]
    entries <- paste(lines, collapse = "\n")
    con <- textConnection(entries)
    on.exit(close(con))
    out <- read.dcf(con, fields = c("Name", "MIBenum", "Source", 
        "Alias"), all = TRUE)
    names(out)[names(out) == "Alias"] <- "Aliases"
    MIME <- sapply(mapply(c, out$Name, out$Aliases), function(u) {
        if (any(ind <- grep("preferred MIME name", u))) 
            sapply(strsplit(u[ind], " +"), `[[`, 1L)
        else character()
    })
    out$MIME <- MIME
    out$Name <- sub(" +.*", "", out$Name)
    out$Aliases <- lapply(out$Aliases, function(s) sub(" +.*", 
        "", s))
    out$MIBenum <- as.integer(out$MIBenum)
    out
}
