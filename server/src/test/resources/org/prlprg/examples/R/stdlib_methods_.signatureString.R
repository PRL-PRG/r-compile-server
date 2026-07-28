#? stdlib
`.signatureString` <- function (fdef, signature) 
{
    snames <- names(signature)
    if (is.null(snames)) {
        if (is(fdef, "genericFunction")) {
            snames <- fdef@signature
            signature <- matchSignature(signature, fdef)
            if (length(snames) > length(signature)) 
                length(snames) <- length(signature)
        }
        else return(paste(signature, collapse = ", "))
    }
    else signature <- as.character(signature)
    paste(paste0(snames, "=\"", signature, "\""), collapse = ", ")
}
