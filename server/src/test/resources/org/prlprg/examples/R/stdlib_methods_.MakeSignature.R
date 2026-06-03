#? stdlib
`.MakeSignature` <- function (object, def = NULL, signature, fdef = def) 
{
    signature <- unlist(signature)
    if (length(signature) > 0) {
        classes <- as.character(signature)
        sigArgs <- names(signature)
        pkgs <- attr(signature, "package")
        if (is.null(pkgs)) 
            pkgs <- character(length(signature))
        if (is(fdef, "genericFunction")) 
            formalNames <- fdef@signature
        else if (is.function(def)) {
            if (!is.function(fdef)) 
                fdef <- def
            formalNames <- formalArgs(fdef)
            dots <- match("...", formalNames)
            if (!is.na(dots)) 
                formalNames <- formalNames[-dots]
        }
        else formalNames <- character()
        if (length(formalNames) > 0) {
            if (is.null(sigArgs)) 
                names(signature) <- formalNames[seq_along(classes)]
            else if (length(sigArgs) && anyNA(match(sigArgs, 
                formalNames))) 
                if (is(fdef, "genericFunction")) 
                  stop(sprintf(gettext("the names in signature for method (%s) do not match %s's arguments (%s)", 
                    domain = "R-methods"), paste(sigArgs, collapse = ", "), 
                    fdef@generic, paste(formalNames, collapse = ", ")), 
                    domain = NA)
                else stop(sprintf(gettext("the names in signature for method (%s) do not match function's arguments (%s)", 
                  domain = "R-methods"), paste(sigArgs, collapse = ", "), 
                  paste(formalNames, collapse = ", ")), domain = NA)
        }
        object@.Data <- signature
        object@package <- pkgs
    }
    object
}
