#? stdlib
`dropBraces` <- function (lines) 
{
    lines <- sub("[{].*[}]", " ", lines)
    start <- grepl("[{]", lines)
    end <- grepl("[}]", lines)
    lines <- lines[cumsum(start - end) == 0 | start | end]
    lines <- sub("[{].*", "", lines)
    lines <- lines[!grepl(".*[}]", lines)]
    lines
}
