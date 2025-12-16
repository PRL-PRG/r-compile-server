#? stdlib
`conformMethod` <- function (signature, mnames, fnames, f = "<unspecified>", fdef, 
    method) 
{
    sig0 <- signature
    fsig <- fdef@signature
    if (is.na(match("...", mnames)) && !is.na(match("...", fnames))) 
        fnames <- fnames[-match("...", fnames)]
    imf <- match(fnames, mnames)
    omitted <- is.na(imf)
    if (is.unsorted(imf[!omitted])) 
        stop(.renderSignature(f, signature), "formal arguments in method and generic do not appear in the same order", 
            call. = FALSE)
    if (!any(omitted)) 
        return(signature)
    sigNames <- names(signature)
    omittedSig <- sigNames %in% fnames[omitted]
    if (!any(omittedSig)) 
        return(signature)
    if (any(iiN <- is.na(match(signature[omittedSig], c("ANY", 
        "missing"))))) {
        bad <- omittedSig & iiN
        bad2 <- paste0(fnames[bad], " = \"", signature[bad], 
            "\"", collapse = ", ")
        stop(.renderSignature(f, sig0), gettextf("formal arguments (%s) omitted in the method definition cannot be in the signature", 
            bad2), call. = TRUE, domain = NA)
    }
    else if (any(omittedSig <- omittedSig & signature != "missing")) {
        .message("Note: ", .renderSignature(f, sig0), gettextf("expanding the signature to include omitted arguments in definition: %s", 
            paste(sigNames[omittedSig], "= \"missing\"", collapse = ", ")))
        signature[omittedSig] <- "missing"
    }
    n <- length(signature)
    while (.identC(signature[[n]], "ANY")) n <- n - 1L
    length(signature) <- n
    length(fsig) <- n
    setNames(signature, fsig)
}
