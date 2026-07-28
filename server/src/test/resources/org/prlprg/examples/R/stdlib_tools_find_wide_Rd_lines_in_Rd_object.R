#? stdlib
`find_wide_Rd_lines_in_Rd_object` <- function (x, limit = NULL, installed = FALSE) 
{
    if (is.null(limit)) 
        limit <- list(usage = c(79, 95), examples = c(87, 105))
    sections <- names(limit)
    if (is.null(sections)) 
        stop("no Rd sections specified")
    if (installed) 
        x <- prepare_Rd(x, stages = "render")
    y <- Map(function(s, l) {
        out <- NULL
        zz <- textConnection("out", "w", local = TRUE)
        on.exit(close(zz))
        pos <- which(RdTags(x) == s)
        Rd2txt(x[pos[1L]], out = zz, fragment = TRUE, outputEncoding = "UTF-8")
        nc <- nchar(sub("[ \t]+$", "", out))
        if (length(l) > 1L) {
            ind_warn <- (nc > max(l))
            ind_note <- (nc > min(l)) & !ind_warn
            Filter(length, list(warn = out[ind_warn], note = out[ind_note]))
        }
        else {
            out[nc > l]
        }
    }, paste0("\\", sections), limit)
    names(y) <- sections
    Filter(length, y)
}
