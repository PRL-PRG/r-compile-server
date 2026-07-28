#? stdlib
`as.character.Rconcordance` <- function (x, targetfile = "", ...) 
{
    concordance <- x
    offset <- concordance$offset
    src <- concordance$srcLine
    result <- character()
    srcfile <- rep_len(concordance$srcFile, length(src))
    while (length(src)) {
        first <- src[1]
        if (length(unique(srcfile)) > 1) 
            n <- which(srcfile != srcfile[1])[1] - 1
        else n <- length(srcfile)
        vals <- with(rle(diff(src[seq_len(n)])), as.numeric(rbind(lengths, 
            values)))
        result <- c(result, paste0("concordance:", targetfile, 
            ":", srcfile[1], ":", if (offset) paste0("ofs ", 
                offset, ":"), concordance$srcLine[1], " ", paste(vals, 
                collapse = " ")))
        offset <- offset + n
        drop <- seq_len(n)
        src <- src[-drop]
        srcfile <- srcfile[-drop]
    }
    result
}
