#? stdlib
`methodSignatureMatrix` <- function (object, sigSlots = c("target", "defined")) 
{
    if (length(sigSlots)) {
        allSlots <- lapply(sigSlots, slot, object = object)
        n <- max(lengths(allSlots))
        mm <- unlist(lapply(allSlots, function(s) {
            length(s) <- n
            s[is.na(s)] <- "ANY"
            s
        }))
        mm <- matrix(mm, nrow = length(allSlots), byrow = TRUE)
        dimnames(mm) <- list(sigSlots, names(allSlots[[1L]]))
        mm
    }
    else matrix(character(), 0L, 0L)
}
