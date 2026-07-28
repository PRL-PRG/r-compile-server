#? stdlib
`shQuote` <- function (string, type = c("sh", "csh", "cmd", "cmd2")) 
{
    if (missing(type) && .Platform$OS.type == "windows") 
        type <- "cmd"
    type <- match.arg(type)
    if (type == "cmd") {
        string <- gsub("(\\\\*)\"", "\\1\\1\\\\\"", string)
        string <- sub("(\\\\+)$", "\\1\\1", string)
        paste0("\"", string, "\"", recycle0 = TRUE)
    }
    else if (type == "cmd2") 
        gsub("([()%!^\"<>&|])", "^\\1", string)
    else if (!any(grepl("'", string))) 
        paste0("'", string, "'", recycle0 = TRUE)
    else if (type == "sh") 
        paste0("\"", gsub("([\"$`\\])", "\\\\\\1", string), "\"")
    else if (!any(grepl("([$`])", string))) 
        paste0("\"", gsub("([\"!\\])", "\\\\\\1", string), "\"")
    else paste0("'", gsub("'", "'\"'\"'", string, fixed = TRUE), 
        "'")
}

# Examples
test <- "abc$def`gh`i\\j"
cat(shQuote(test), "\n")

test <- "don't do it!"
cat(shQuote(test), "\n")

tryit <- paste("use the", sQuote("-c"), "switch\nlike this")
cat(shQuote(tryit), "\n")

cat(shQuote(tryit, type = "csh"), "\n")

## Windows-only example, assuming cmd.exe:
perlcmd <- 'print "Hello World\\n";'


