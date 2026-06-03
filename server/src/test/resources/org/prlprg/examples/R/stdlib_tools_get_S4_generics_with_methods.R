#? stdlib
`get_S4_generics_with_methods` <- function (env, verbose = getOption("verbose")) 
{
    env <- as.environment(env)
    r <- methods::getGenerics(env)
    if (length(r) && {
        hasM <- lapply(r, function(g) tryCatch(methods::hasMethods(g, 
            where = env), error = identity))
        if (any(hasErr <- vapply(hasM, inherits, NA, what = "error"))) {
            dq <- function(ch) paste0("\"", ch, "\"")
            rErr <- r[hasErr]
            pkgs <- r@package[hasErr]
            warning(gettextf("Generics 'g' in 'env' %s where '%s' errors: %s\nMay need something like\n\n%s\nin NAMESPACE.", 
                format(env), "hasMethods(g, env)", paste(sQuote(rErr), 
                  collapse = ", "), paste0("  importFrom(", paste(dq(pkgs), 
                  dq(rErr), sep = ", "), ")\n")), domain = NA)
            hasM <- hasM[!hasErr]
        }
        !all(ok <- unlist(hasM))
    }) {
        if (verbose) 
            message(sprintf(ngettext(sum(!ok), "Generic without any methods in %s: %s", 
                "Generics without any methods in %s: %s"), format(env), 
                paste(sQuote(r[!ok]), collapse = ", ")), domain = NA)
        r[ok]
    }
    else as.vector(r)
}
