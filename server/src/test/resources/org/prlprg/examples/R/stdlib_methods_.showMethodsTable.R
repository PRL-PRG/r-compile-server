#? stdlib
`.showMethodsTable` <- function (generic, includeDefs = FALSE, inherited = FALSE, classes = NULL, 
    showEmpty = TRUE, printTo = stdout()) 
{
    cf <- function(...) cat(file = printTo, sep = "", ...)
    sigString <- function(sig) paste0(names(sig), "=\"", as.character(sig), 
        "\"", collapse = ", ")
    doFun <- function(func, pkg) cf("Function: ", func, " (package ", 
        pkg, ")\n")
    env <- environment(generic)
    table <- get(if (inherited) 
        ".AllMTable"
    else ".MTable", envir = env)
    f <- generic@generic
    p <- packageSlot(f)
    if (is.null(p)) 
        p <- "base"
    deflt <- new("signature", generic, "ANY")
    labels <- sort(names(table))
    if (!is.null(classes) && length(labels) > 0L) {
        sigL <- strsplit(labels, split = "#")
        keep <- !vapply(sigL, function(x, y) all(is.na(match(x, 
            y))), NA, y = classes)
        labels <- labels[keep]
    }
    if (length(labels) == 0L) {
        if (showEmpty) {
            doFun(f, p)
            cf("<No methods>\n\n")
        }
        return(invisible())
    }
    doFun(f, p)
    for (m in mget(labels, table)) {
        pkgs <- NULL
        if (is.environment(m)) {
            pkgs <- names(m)
            m <- m[[pkgs[1L]]]
        }
        if (is(m, "MethodDefinition")) {
            t <- m@target
            if (length(t) == 0L) 
                t <- deflt
            d <- m@defined
            if (length(d) == 0L) 
                d <- deflt
            cf(sigString(t), "\n")
            if (!identical(t, d)) 
                cf("    (inherited from: ", sigString(d), ")\n")
            if (!.identC(m@generic, f) && length(m@generic) == 
                1L && nzchar(m@generic)) 
                cf("    (definition from function \"", m@generic, 
                  "\")\n")
            if (length(pkgs) > 1) 
                cf("  (", length(pkgs), " methods defined for this signature, with different packages)\n")
        }
        if (includeDefs && is.function(m)) {
            if (is(m, "MethodDefinition")) 
                m <- m@.Data
            cat(deparse(m), sep = "\n", "\n", file = printTo)
        }
    }
    cat("\n", file = printTo)
}
