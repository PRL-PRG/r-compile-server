#? stdlib
`selfStart.formula` <- function (model, initial, parameters, template = NULL) 
{
    if (is.null(template)) {
        nm <- all.vars(model)
        if (any(msng <- is.na(match(parameters, nm)))) {
            stop(sprintf(ngettext(sum(msng), "parameter %s does not occur in the model formula", 
                "parameters %s do not occur in the model formula"), 
                paste(sQuote(parameters[msng]), collapse = ", ")), 
                domain = NA)
        }
        template <- function() {
        }
        argNams <- c(nm[is.na(match(nm, parameters))], parameters)
        args <- setNames(rep(alist(a = ), length(argNams)), argNams)
        formals(template) <- args
    }
    structure(deriv(model, parameters, template), initial = as.function(initial), 
        pnames = parameters, class = "selfStart")
}
