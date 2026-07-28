#? stdlib
`testRdConditional` <- function (format, conditional, Rdfile) 
{
    condition <- conditional[[1L]]
    tags <- RdTags(condition)
    if (!all(tags == "TEXT")) 
        stopRd(conditional, Rdfile, "condition must be plain text")
    allow <- trimws(strsplit(paste(condition, collapse = ""), 
        ",")[[1L]])
    any(c("TRUE", format) %in% allow)
}
