#? stdlib
`.fillSignatures` <- function (sigs, n) 
{
    siglens <- lengths(strsplit(sigs, "#", fixed = TRUE))
    short <- n > siglens
    suffix <- vapply(n - siglens[short], function(ni) paste(rep("ANY", 
        ni), collapse = "#"), character(1L))
    sigs[short] <- paste(sigs[short], suffix, sep = "#")
    sigs
}
