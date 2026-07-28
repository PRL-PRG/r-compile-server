#? stdlib
`.get_urls_from_Rd` <- function (x, href = TRUE, ifdef = FALSE) 
{
    urls <- character()
    recurse <- function(e) {
        tag <- attr(e, "Rd_tag")
        if (identical(tag, "\\url")) {
            urls <<- c(urls, lines2str(.Rd_deparse(e, tag = FALSE)))
        }
        else if (href && identical(tag, "\\href")) {
            urls <<- c(urls, lines2str(.Rd_deparse(e[[1L]], tag = FALSE)))
        }
        else if (ifdef && length(tag) && (tag %in% c("\\if", 
            "\\ifelse"))) {
            condition <- e[[1L]]
            if (all(RdTags(condition) == "TEXT")) {
                if (any(c("TRUE", "html") %in% trimws(strsplit(paste(condition, 
                  collapse = ""), ",")[[1L]]))) 
                  recurse(e[[2L]])
                else if (tag == "\\ifelse") 
                  recurse(e[[3L]])
            }
        }
        else if (is.list(e)) 
            lapply(e, recurse)
    }
    lapply(x, recurse)
    unique(trimws(urls))
}
