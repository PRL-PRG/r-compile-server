#? stdlib
`findMethodSignatures` <- function (..., target = TRUE, methods = findMethods(...)) 
{
    what <- methods@arguments
    if (target) 
        sigs <- methods@signatures
    else {
        anySig <- rep("ANY", length(what))
        for (m in methods) if (!is.primitive(m)) {
            length(anySig) <- length(m@defined)
            break
        }
        sigs <- lapply(methods, function(x) if (is.primitive(x)) 
            anySig
        else as.character(x@defined))
    }
    lens <- unique(lengths(sigs, use.names = FALSE))
    if (length(lens) == 0) 
        return(matrix(character(), 0, length(methods@arguments)))
    if (length(lens) > 1L) {
        lens <- max(lens)
        anys <- rep("ANY", lens)
        sigs <- lapply(sigs, function(x) {
            if (length(x) < lens) {
                anys[seq_along(x)] <- x
                anys
            }
            else x
        })
    }
    length(what) <- lens
    t(matrix(unlist(sigs), nrow = lens, dimnames = list(what, 
        NULL)))
}
